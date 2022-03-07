#include <iostream>
#include <string>

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(std::string &a, std::string &b) {
    std::string temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 5;

    std::string first_name = "Andrew";
    std::string last_name = "Moore";

    swap(a, b);
    swap(first_name, last_name);

    std::cout << "A: " << a << "\tB: " << b << "\n";
    std::cout << "First Name: " << first_name << "\tLast Name: " << last_name << "\n";

    return 0;
}