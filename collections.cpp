#include <iostream>
#include <vector>
#include <array>

int main() {
    std::array<int, 6> data = {1,2,3,4,5,6};

    for(int n : data) {
        std::cout << n << "\t";
    }

    // for(int i = 0; i < 6; i++) {
    //     std::cout << data[i] << "\t";

    // }
    std::cout << "\n";
}