#include <iostream>
//hello epta. uliana
double perimeterOfSquare(double a) {
    return 4 * a;
}
double areaOfSquare(double value) {
    return value * value;
}
int main() {
  double result = perimeterOfSquare(5.0);
    std::cout << result << std::endl;
    return 0;
}