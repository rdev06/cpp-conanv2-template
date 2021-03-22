#include <fmt/core.h>

int main(){
  fmt::print("Hello World!, My mname is roshan\n");
  std::string s = fmt::format("Hi placeholder {1} and number is {0} \n", "goo!", 4);
  fmt::print(s);
  return 0;
}