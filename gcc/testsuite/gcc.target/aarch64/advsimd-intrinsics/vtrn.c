#include <arm_neon.h>
#include "arm-neon-ref.h"
#include "compute-ref-data.h"

/* Expected results splitted in several chunks.  */
/* Chunk 0.  */
VECT_VAR_DECL(expected0,int,8,8) [] = { 0xf0, 0xf1, 0x11, 0x11,
					0xf2, 0xf3, 0x11, 0x11 };
VECT_VAR_DECL(expected0,int,16,4) [] = { 0xfff0, 0xfff1, 0x22, 0x22 };
VECT_VAR_DECL(expected0,int,32,2) [] = { 0xfffffff0, 0xfffffff1 };
VECT_VAR_DECL(expected0,uint,8,8) [] = { 0xf0, 0xf1, 0x55, 0x55,
					 0xf2, 0xf3, 0x55, 0x55 };
VECT_VAR_DECL(expected0,uint,16,4) [] = { 0xfff0, 0xfff1, 0x66, 0x66 };
VECT_VAR_DECL(expected0,uint,32,2) [] = { 0xfffffff0, 0xfffffff1 };
VECT_VAR_DECL(expected0,poly,8,8) [] = { 0xf0, 0xf1, 0x55, 0x55,
					 0xf2, 0xf3, 0x55, 0x55 };
VECT_VAR_DECL(expected0,poly,16,4) [] = { 0xfff0, 0xfff1, 0x66, 0x66 };
VECT_VAR_DECL(expected0,hfloat,32,2) [] = { 0xc1800000, 0xc1700000 };
VECT_VAR_DECL(expected0,int,8,16) [] = { 0xf0, 0xf1, 0x11, 0x11,
					 0xf2, 0xf3, 0x11, 0x11,
					 0xf4, 0xf5, 0x11, 0x11,
					 0xf6, 0xf7, 0x11, 0x11 };
VECT_VAR_DECL(expected0,int,16,8) [] = { 0xfff0, 0xfff1, 0x22, 0x22,
					 0xfff2, 0xfff3, 0x22, 0x22 };
VECT_VAR_DECL(expected0,int,32,4) [] = { 0xfffffff0, 0xfffffff1, 0x33, 0x33 };
VECT_VAR_DECL(expected0,uint,8,16) [] = { 0xf0, 0xf1, 0x55, 0x55,
					  0xf2, 0xf3, 0x55, 0x55,
					  0xf4, 0xf5, 0x55, 0x55,
					  0xf6, 0xf7, 0x55, 0x55 };
VECT_VAR_DECL(expected0,uint,16,8) [] = { 0xfff0, 0xfff1, 0x66, 0x66,
					  0xfff2, 0xfff3, 0x66, 0x66 };
VECT_VAR_DECL(expected0,uint,32,4) [] = { 0xfffffff0, 0xfffffff1, 0x77, 0x77 };
VECT_VAR_DECL(expected0,poly,8,16) [] = { 0xf0, 0xf1, 0x55, 0x55,
					  0xf2, 0xf3, 0x55, 0x55,
					  0xf4, 0xf5, 0x55, 0x55,
					  0xf6, 0xf7, 0x55, 0x55 };
VECT_VAR_DECL(expected0,poly,16,8) [] = { 0xfff0, 0xfff1, 0x66, 0x66,
					  0xfff2, 0xfff3, 0x66, 0x66 };
VECT_VAR_DECL(expected0,hfloat,32,4) [] = { 0xc1800000, 0xc1700000,
					    0x42073333, 0x42073333 };

/* Chunk 1.  */
VECT_VAR_DECL(expected1,int,8,8) [] = { 0xf4, 0xf5, 0x11, 0x11,
					0xf6, 0xf7, 0x11, 0x11 };
VECT_VAR_DECL(expected1,int,16,4) [] = { 0xfff2, 0xfff3, 0x22, 0x22 };
VECT_VAR_DECL(expected1,int,32,2) [] = { 0x33, 0x33 };
VECT_VAR_DECL(expected1,uint,8,8) [] = { 0xf4, 0xf5, 0x55, 0x55,
					 0xf6, 0xf7, 0x55, 0x55 };
VECT_VAR_DECL(expected1,uint,16,4) [] = { 0xfff2, 0xfff3, 0x66, 0x66 };
VECT_VAR_DECL(expected1,uint,32,2) [] = { 0x77, 0x77 };
VECT_VAR_DECL(expected1,poly,8,8) [] = { 0xf4, 0xf5, 0x55, 0x55,
					 0xf6, 0xf7, 0x55, 0x55 };
VECT_VAR_DECL(expected1,poly,16,4) [] = { 0xfff2, 0xfff3, 0x66, 0x66 };
VECT_VAR_DECL(expected1,hfloat,32,2) [] = { 0x42066666, 0x42066666 };
VECT_VAR_DECL(expected1,int,8,16) [] = { 0xf8, 0xf9, 0x11, 0x11,
					 0xfa, 0xfb, 0x11, 0x11,
					 0xfc, 0xfd, 0x11, 0x11,
					 0xfe, 0xff, 0x11, 0x11 };
VECT_VAR_DECL(expected1,int,16,8) [] = { 0xfff4, 0xfff5, 0x22, 0x22,
					 0xfff6, 0xfff7, 0x22, 0x22 };
VECT_VAR_DECL(expected1,int,32,4) [] = { 0xfffffff2, 0xfffffff3, 0x33, 0x33 };
VECT_VAR_DECL(expected1,uint,8,16) [] = { 0xf8, 0xf9, 0x55, 0x55,
					  0xfa, 0xfb, 0x55, 0x55,
					  0xfc, 0xfd, 0x55, 0x55,
					  0xfe, 0xff, 0x55, 0x55 };
VECT_VAR_DECL(expected1,uint,16,8) [] = { 0xfff4, 0xfff5, 0x66, 0x66,
					  0xfff6, 0xfff7, 0x66, 0x66 };
VECT_VAR_DECL(expected1,uint,32,4) [] = { 0xfffffff2, 0xfffffff3, 0x77, 0x77 };
VECT_VAR_DECL(expected1,poly,8,16) [] = { 0xf8, 0xf9, 0x55, 0x55,
					  0xfa, 0xfb, 0x55, 0x55,
					  0xfc, 0xfd, 0x55, 0x55,
					  0xfe, 0xff, 0x55, 0x55 };
VECT_VAR_DECL(expected1,poly,16,8) [] = { 0xfff4, 0xfff5, 0x66, 0x66,
					  0xfff6, 0xfff7, 0x66, 0x66 };
VECT_VAR_DECL(expected1,hfloat,32,4) [] = { 0xc1600000, 0xc1500000,
					    0x42073333, 0x42073333 };

#define INSN_NAME vtrn
#define TEST_MSG "VTRN/VTRNQ"

#include "vshuffle.inc"