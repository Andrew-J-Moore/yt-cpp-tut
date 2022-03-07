#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
#include <fstream>

void save_score(int count) {
    std::ifstream input("best_score.txt");

    if (!input.is_open()) { 
        std::cout << "Unable to read file.\n";
        return;
    }

    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");
    if (!output.is_open()){
        std::cout << "Unable to write to file.\n";
    }

    if(count < best_score) {
        output << count;
    } else {
        output << best_score;
    }
}

void print_array(std::vector<int> guesses){

    for(int i = 0; i < guesses.size(); i++){
        std::cout << guesses[i] << "\t";
    }

    std::cout << std::endl;

}

void play_game() {
    std::vector<int> guesses;
    int count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Let's go!\n";
    std::cout << "Guess a number: ";
    while(true) {

        int guess;
        std::cin >> guess;
        count++;
        guesses.push_back(guess);
    
        if(guess == random) {
            std::cout << "You win!\n";
            break;
        } else if (guess < random) {
            std::cout << "Too low!\n";
        } else if (guess > random) {
            std::cout << "Too high!\n";
        }
    }

    save_score(count);

    print_array(guesses);
}

int main() 
{

    srand(time(NULL));

    int choice;
    
    do {
        std::cout << "0. Quit\n1. Play Game\n";
        std::cin >> choice;
        switch(choice) {
            case 0:
                std::cout << "Thanks for nothing...\n";
                break;
            case 1:
                play_game();
                break;
        }
    }   
    while(choice != 0);
    
}
