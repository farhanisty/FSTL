#ifndef CollectionRender_HPP
#define CollectionRender_HPP

#include "Iterator.hpp"

template <typename T> class CollectionRender {
public:
  virtual void render(Iterator<T> *) = 0;
  virtual ~CollectionRender() {}
};

#endif
