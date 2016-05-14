#include <iostream>
#include <memory>

int main () {
  int* p = new int (10);
  std::shared_ptr<int> a (p);

  if (a.get()==p)
    std::cout << "a and p point to the same location\n";

  // three ways of accessing the same address:
  std::cout << *a.get() << "\n";
  std::cout << *a << "\n";
  std::cout << *p << "\n";
std::cout << a.use_count() << "\n";
  
  return 0;
}
