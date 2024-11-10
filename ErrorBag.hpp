#ifndef ErrorBag_HPP
#define ErrorBag_HPP

#include <string>
#include <vector>

class ErrorBag {
  std::vector<std::string> errors;

public:
  void push(std::string error) { this->errors.push_back(error); }

  std::vector<std::string> getErrors() { return this->errors; }

  bool isAny() { return this->errors.size() > 0; }
};

#endif
