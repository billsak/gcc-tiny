
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_ObjectInput__
#define __java_io_ObjectInput__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::io::ObjectInput : public ::java::lang::Object
{

public:
  virtual jint available() = 0;
  virtual jint read() = 0;
  virtual jint read(JArray< jbyte > *) = 0;
  virtual jint read(JArray< jbyte > *, jint, jint) = 0;
  virtual ::java::lang::Object * readObject() = 0;
  virtual jlong skip(jlong) = 0;
  virtual void close() = 0;
  virtual jboolean readBoolean() = 0;
  virtual jbyte readByte() = 0;
  virtual jint readUnsignedByte() = 0;
  virtual jchar readChar() = 0;
  virtual jshort readShort() = 0;
  virtual jint readUnsignedShort() = 0;
  virtual jint readInt() = 0;
  virtual jlong readLong() = 0;
  virtual jfloat readFloat() = 0;
  virtual jdouble readDouble() = 0;
  virtual ::java::lang::String * readLine() = 0;
  virtual ::java::lang::String * readUTF() = 0;
  virtual void readFully(JArray< jbyte > *) = 0;
  virtual void readFully(JArray< jbyte > *, jint, jint) = 0;
  virtual jint skipBytes(jint) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_io_ObjectInput__
