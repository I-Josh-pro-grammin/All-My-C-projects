#include <iostream>

namespace newNameSpace{
  int value = 100;
  void printValue () {
    std::cout << value << std::endl;
  }
}

namespace nameSpace2{
  int value2 = 200;
  void printValue () {
    std::cout << value2 << std::endl;
  }
}

int main() {
  newNameSpace::printValue();

  nameSpace2::printValue();

  return 0;
}
