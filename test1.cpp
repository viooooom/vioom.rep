#include <iostream>
double perimeterOfSquare(double a) {
    return 4 * a;
}
double areaOfSquare(double a) {
    return a * a;
}
int main() {
  double result = perimeterOfSquare(5.0);
    std::cout << result << std::endl;
    return 0;
}