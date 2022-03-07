#include <iostream>
#include <vector>
#include <array>

namespace utilz {
    void print_array(const int data[], int size) {
        for(int i = 0; i < 6; i++) {
            std::cout << data[i] << "\t";

        }
        std::cout << "\n";
    }
}

int main() {
    int data[] = {1,2,3,4,5,6};

    utilz::print_array(data, 6);
}