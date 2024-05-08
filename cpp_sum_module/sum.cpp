// sum.cpp
#include "sum.h"
#include <iostream>

int calculateSum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int result = calculateSum(num1, num2);
    
    std::cout << "Sum: " << result << std::endl;
    
    return 0;
}