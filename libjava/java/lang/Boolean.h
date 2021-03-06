
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Boolean__
#define __java_lang_Boolean__

#pragma interface

#include <java/lang/Object.h>

class java::lang::Boolean : public ::java::lang::Object
{

public:
  Boolean(jboolean);
  Boolean(::java::lang::String *);
  jboolean booleanValue();
  static ::java::lang::Boolean * valueOf(jboolean);
  static ::java::lang::Boolean * valueOf(::java::lang::String *);
  static ::java::lang::String * toString(jboolean);
  ::java::lang::String * toString();
  jint hashCode();
  jboolean equals(::java::lang::Object *);
  static jboolean getBoolean(::java::lang::String *);
  jint Boolean$compareTo(::java::lang::Boolean *);
  static jint compare(jboolean, jboolean);
  static jboolean parseBoolean(::java::lang::String *);
  jint compareTo(::java::lang::Object *);
private:
  static const jlong serialVersionUID = -3665804199014368530LL;
public:
  static ::java::lang::Boolean * TRUE;
  static ::java::lang::Boolean * FALSE;
  static ::java::lang::Class * TYPE;
private:
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_Boolean__
