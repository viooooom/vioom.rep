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
    std::cout << boolean18(5,0,0) << std::endl;
    std::cout << boolean34(5,7) << std::endl;
    std::cout << boolean35(5,7,6,8) << std::endl;
    std::cout << boolean36(3,7,3,5) << std::endl;
    std::cout << boolean37(3,7,3,5) << std::endl;
    return 0;
}
