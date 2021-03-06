
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_datatype_DatatypeConstants__
#define __javax_xml_datatype_DatatypeConstants__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace datatype
      {
          class DatatypeConstants;
          class DatatypeConstants$Field;
      }
      namespace namespace$
      {
          class QName;
      }
    }
  }
}

class javax::xml::datatype::DatatypeConstants : public ::java::lang::Object
{

  DatatypeConstants();
public:
  static const jint JANUARY = 1;
  static const jint FEBRUARY = 2;
  static const jint MARCH = 3;
  static const jint APRIL = 4;
  static const jint MAY = 5;
  static const jint JUNE = 6;
  static const jint JULY = 7;
  static const jint AUGUST = 8;
  static const jint SEPTEMBER = 9;
  static const jint OCTOBER = 10;
  static const jint NOVEMBER = 11;
  static const jint DECEMBER = 12;
  static const jint LESSER = -1;
  static const jint EQUAL = 0;
  static const jint GREATER = 1;
  static const jint INDETERMINATE = 2;
  static const jint FIELD_UNDEFINED = -2147483647 - 1;
  static ::javax::xml::datatype::DatatypeConstants$Field * YEARS;
  static ::javax::xml::datatype::DatatypeConstants$Field * MONTHS;
  static ::javax::xml::datatype::DatatypeConstants$Field * DAYS;
  static ::javax::xml::datatype::DatatypeConstants$Field * HOURS;
  static ::javax::xml::datatype::DatatypeConstants$Field * MINUTES;
  static ::javax::xml::datatype::DatatypeConstants$Field * SECONDS;
  static ::javax::xml::namespace$::QName * DATETIME;
  static ::javax::xml::namespace$::QName * TIME;
  static ::javax::xml::namespace$::QName * DATE;
  static ::javax::xml::namespace$::QName * GYEARMONTH;
  static ::javax::xml::namespace$::QName * GMONTHDAY;
  static ::javax::xml::namespace$::QName * GYEAR;
  static ::javax::xml::namespace$::QName * GMONTH;
  static ::javax::xml::namespace$::QName * GDAY;
  static ::javax::xml::namespace$::QName * DURATION;
  static ::javax::xml::namespace$::QName * DURATION_DAYTIME;
  static ::javax::xml::namespace$::QName * DURATION_YEARMONTH;
  static const jint MAX_TIMEZONE_OFFSET = -840;
  static const jint MIN_TIMEZONE_OFFSET = 840;
  static ::java::lang::Class class$;
};

#endif // __javax_xml_datatype_DatatypeConstants__
