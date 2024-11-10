#ifndef Iterator_HPP
#define Iterator_HPP

template <typename T> class Iterator {
  T *collection;
  int size;
  int position = 0;

public:
  Iterator(int size, T *collection) : size(size), collection(collection) {}

  T get() {
    if (this->isEmpty()) {
      throw "Iterator: Collection is empty";
    }
    return this->collection[this->position];
  }

  bool next() {
    if (this->position + 1 < this->size) {
      this->position++;
      return true;
    }
    return false;
  }

  bool prev() {
    if (this->position == 0) {
      return false;
    }

    this->position--;
    return true;
  }

  bool isLast() { return this->position == size - 1; }

  bool isFirst() {
    if (this->isEmpty())
      throw "Iterator: Collection kosong";
    return this->position == 0;
  }

  void toStart() { this->position = 0; }

  void toEnd() {
    if (this->isEmpty()) {
      return;
    }

    this->position = this->size - 1;
  }

  bool isEmpty() { return this->size == 0; }

  int getPosition() { return this->position; }

  ~Iterator() { delete[] collection; }
};

#endif
