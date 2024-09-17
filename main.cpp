#include <iostream>
#include "utils.h"
#include <cmath>

double func(double y) {
  using namespace std;
  return 3 * pow(y,6) - 6 * pow(y,2);
}

int main() {
    std::cout << "begin25"<<std::endl;
    std::cout << func(2) << std::endl;
    return 0;
}