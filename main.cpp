#include <iostream>
#include <string>
#include "VECTOR/Vector.h"

int main() {
    Vector<int> v;
    int InputNumber = 0;
    while (std::cin >> InputNumber) {
        v.Append( InputNumber );
    }
    for (const auto& Number : v) {
        std::cout << Number << std::endl;
    }
    return 0;
}
