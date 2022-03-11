#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>

class User {

    //private status element
    std::string status = "Gold";

    //static user count element
    static int user_count;

    public:

        std::string first_name;
        std::string last_name;

        static int get_user_count();

        //status getter and setter
        std::string get_status();

        void set_status(std::string status);

        virtual void output();

        //constructor and destructor
        User(std::string first_name, std::string last_name);
        User();
        ~User();


        //operator overload declarations
        friend std::ostream& operator << (std::ostream& output, User user);
        friend std::istream& operator >> (std::istream& input, User &user);
    
};

#endif
