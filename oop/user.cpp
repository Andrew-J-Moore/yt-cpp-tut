#include <iostream>
#include <vector>
#include <string>
#include "user.h"

//static user count element
int user_count;


int User::get_user_count() {
    return user_count;
}

//status getter and setter
std::string User::get_status() {
    return status;
}

void User::set_status(std::string status) {
    if(status == "Gold" || status == "Silver" || status == "Bronze") {
        this -> status = status;
    } else {
        this -> status = "None";
        std::cout << "Invalid status!" << std::endl;
    }
}

void User::output() {
    std::cout << "I am a user\n";
}

//constructor and destructor
User::User(std::string first_name, std::string last_name) {
    this -> first_name = first_name;
    this -> last_name = last_name;
    user_count++;
}
User::User() {
    user_count++;
    // std::cout << "user created\n";
}
User::~User() {
    user_count--;
    // std::cout << "Destructor" << std::endl;
}

//operator overload declarations
std::ostream& operator << (std::ostream& output, User user);
std::istream& operator >> (std::istream& input, User &user);
    


int User::user_count = 0;

//operator overload definitions
std::ostream& operator << (std::ostream& output, User user) {
    output << "First Name: " << user.first_name << "\nLast Name: " << user.last_name << "\nStatus: " << user.status;

    return output;
}

std::istream& operator >> (std::istream& input, User &user) {

    input >> user.first_name >> user.last_name >> user.status;

    return input;
}
