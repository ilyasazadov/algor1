#include "Searching.h"
#include <iostream>

int main() {

    std::vector<int> a ({ 2,4,7,9,12,15,15,15,15,15,29,70,80,80});
    int result;

    result = binarySearch(a, 15);
    std::cout << "binarySearch for 15: " << result << std::endl;

    result = binarySearchFirst(a, 15);
    std::cout << "binarySearchFirst for 15: " << result << std::endl;
    result = binarySearchFirst(a, 30);
    std::cout << "binarySearchFirst for 30: " << result << std::endl;

}