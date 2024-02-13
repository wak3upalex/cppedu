// Task 1
/*
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
*/

// Task 2
#include <cmath>
#include <iostream>

int main() {
    int a, b, c;
    std::cin>>a>>b>>c;

    if (!((a + b > c) && (a + c > b) && (b + c > a))) {
        std::cout<<"UNDEFINED";
    }
    else if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) ||
        (pow(a, 2) + pow(c, 2) == pow(b, 2)) ||
        pow(b, 2) + pow(c, 2) == pow(a, 2)) {
        std::cout<<"YES";
    } else {
        std::cout<<"NO";
    }
    return 0;
}
