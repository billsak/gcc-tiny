// PR c++/66218
// { dg-options "-std=c++1z" }

template <class T, class U>
concept bool Same = __is_same_as(T, U);

template <class T>
concept bool C =
  requires {
    { 0 } -> Same<T>;
  };

template <C c>
constexpr bool f() { return true; }

static_assert(f<double>(), "");	// { dg-error "" }
static_assert(f<int>(), "");
