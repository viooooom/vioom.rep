#include <iostream>
struct foo {
    int value;
};
int operator+ (foo a, foo b) {
    return 4;
}
// 2+2
// 2 sum 2
// +2 2
// sum 2 2
// sum (2,2)
// 2+2*2
// +*2 2 2
// sum(mul(2,2),2)
// *+2 2 2
// mul(sum(2,2),2)
int main() {
    foo a, b;
    std::cout << a + b << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}