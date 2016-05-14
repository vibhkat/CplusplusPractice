#include <iostream>     // std::cout, std::ios
#include <sstream>      // std::stringstream

void print_state (const std::ios& stream)               //here "ios: is the base class
 {
  std::cout << " good()=" << stream.good();
  std::cout << " eof()=" << stream.eof();
  std::cout << " fail()=" << stream.fail();
  std::cout << " bad()=" << stream.bad();
}

int main () {
  std::stringstream stream;

  stream.clear (stream.goodbit);
  std::cout << "goodbit:"; print_state(stream); std::cout << '\n';

  stream.clear (stream.eofbit);
  std::cout << " eofbit:"; print_state(stream); std::cout << '\n';

  stream.clear (stream.failbit);
  std::cout << "failbit:"; print_state(stream); std::cout << '\n';

  stream.clear (stream.badbit);
  std::cout << " badbit:"; print_state(stream); std::cout << '\n';

 std::ios_base::iostate old_state=std::cin.rdstate();
std::cin.clear(std::cin.rdstate() & ~std::cin.failbit & ~std::cin.badbit);

std::cout<<std::unitbuf <<  "Test " << "file" << '\n';  
std::cerr<<"asdasd";

  return 0;
}
