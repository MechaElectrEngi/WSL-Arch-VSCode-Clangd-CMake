#include "src/boo.hpp"
#include <array>
#include <cstdio>
#include <fmt/core.h>
#include <fmt/format.h>


int main() {
  auto arr = std::to_array({0,1,2,3,4,5});

  for (int val : arr) {
    fmt::print("[0]], ", val);
  }

  fmt::print("Hello World!\n");

  Boo b1("Tommy");
  Boo b2(-1);

  b1.show();
  b2.show();

  return 0;
}