#include <iostream>

void print_array(int array[], int size){

    for(int i=0; i<size; i++) {
        std::cout << array[i] << "\t";
    }

}

int main() {
    const int SIZE = 10;
    int guesses[SIZE];

    for(int i = 0; i<SIZE; i++){
        std::cin >> guesses[i];
    }

    // std::cin << guesses[];
    print_array(guesses, SIZE);
    std::cout << "\n";

    return 0;
}