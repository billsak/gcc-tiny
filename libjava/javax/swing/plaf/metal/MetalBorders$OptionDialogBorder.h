
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalBorders$OptionDialogBorder__
#define __javax_swing_plaf_metal_MetalBorders$OptionDialogBorder__

#pragma interface

#include <javax/swing/border/AbstractBorder.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Graphics;
        class Insets;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace metal
        {
            class MetalBorders$OptionDialogBorder;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalBorders$OptionDialogBorder : public ::javax::swing::border::AbstractBorder
{

public:
  MetalBorders$OptionDialogBorder();
  virtual ::java::awt::Insets * getBorderInsets(::java::awt::Component *);
  virtual ::java::awt::Insets * getBorderInsets(::java::awt::Component *, ::java::awt::Insets *);
  virtual void paintBorder(::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_metal_MetalBorders$OptionDialogBorder__