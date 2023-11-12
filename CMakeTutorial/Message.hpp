#pragma once

#include <iosfwd>
#include <string>

class Message {
public:
  Message(const std::string &msg): message_(msg) {}
  friend std::ostream &operator<<(std::ostream &os, Message &obj) {
    return obj.printObject(os);
  }
private:
  std::string message_;
  std::ostream &printObject(std::ostream &os);
};