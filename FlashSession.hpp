#ifndef FlashSession_HPP
#define FlashSession_HPP

#include <string>

class FlashSession {
  std::string message;
  bool any;

public:
  FlashSession() {
    this->message = "";
    this->any = false;
  }

  void store(std::string message) {
    this->message = message;
    this->any = true;
  }

  bool isAny() { return this->any; }

  std::string get() {
    if (!this->isAny()) {
      return "";
    }

    this->any = false;
    return this->message;
  }
};

#endif
