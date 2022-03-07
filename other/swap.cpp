#include <iostream>
#include <string>

template <typename T>
void swap (T &a, T &b) {
    int temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap(T a[], T b[], int size) {
    for(int i = 0; i < size; i++) {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

// void swap(std::string &a, std::string &b) {
//     std::string temp = a;
//     a = b;
//     b = temp;
// }

int main() {
    int a = 10;
    int b = 5;

    std::string first_name = "Andrew";
    std::string last_name = "Moore";

    swap(a, b);
    std::cout << "A: " << a << "\tB: " << b << "\n";

    swap(first_name, last_name);
    std::cout << "First Name: " << first_name << "\tLast Name: " << last_name << "\n";

    int nines[] = {9,9,9,9,9,9};
    int ones[] = {1,1,1,1,1,1};

    for(int i = 0; i < 6; i++){
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";

    swap(nines, ones, 6);

    for(int i = 0; i < 6; i++){
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";

    return 0;
}