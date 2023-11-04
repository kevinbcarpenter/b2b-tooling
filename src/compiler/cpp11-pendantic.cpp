// https://compiler-explorer.com/z/3TzsGqEGd
// -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic
#include <iostream>

int main() {
  int zero_size_array[0];
  std::cout << "Welcome to Meeting C++\n";
  std::cout << __func__ << "\n";
  return 0;
}