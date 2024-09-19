#include <iostream>
#include "utils.h"
#include "boolean.h"

int main()
{
    std::cout << boolean1(5) << std::endl;
    std::cout << boolean2(5) << std::endl;
    std::cout << boolean3(5) << std::endl;
    std::cout << boolean4(5, 67) << std::endl;
    std::cout << boolean5(5,67) << std::endl;
    std::cout << boolean6(5,-67,8) << std::endl;
    std::cout << boolean7(5,67,8) << std::endl;
    std::cout << boolean8(5,67) << std::endl;
    std::cout << boolean14(5,67,-7) << std::endl;
    return 0;
}
