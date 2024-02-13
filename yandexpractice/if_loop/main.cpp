// Task 1
#include <iostream>

int main() {
    int coord1, coord2, coord3, coord4;
    std::cin>>coord1>>coord2>>coord3>>coord4;
    if ((std::abs(coord1-coord3)==std::abs(coord2-coord4)) || coord1==coord3 || coord2==coord4) {
        std::cout<<"YES";
    }else {
        std::cout<<"NO";
    }
    return 0;
}