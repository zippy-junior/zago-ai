#ifndef activators_hpp
#define activators_hpp
#include "../tensor.hpp"

template <typename T, unsigned X, unsigned Y>
tensor2<T, X, Y> ReLU(const tensor2<T, X, Y> &input);

#include "ReLU.cpp"

#endif