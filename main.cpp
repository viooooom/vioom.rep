#include <iostream>
double perimeterOfSquare(double a) {
    return 4 * a;
}

int main() {
  double result = perimeterOfSquare(5.0);
    std::cout << result << std::endl;
    return 0;
}