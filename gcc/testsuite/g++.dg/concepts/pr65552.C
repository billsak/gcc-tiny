// { dg-options "-std=c++1z" }

template<typename T>
concept bool Concept() {
  return requires () {
    typename T::member_type1;
    typename T::member_type2;
  };
}

struct model {
  using member_type1 = int;
  using member_type2 = int;
};

template<Concept C>
struct S {};

S<model> s;
