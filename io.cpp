#include <iostream>
#include <fstream>
#include <vector>

int main() {

    std::ifstream file("hello.txt");

    std::string line;

    getline(file, line);
    std::cout << line << "\n";

    return 0;
}
