#include <iostream>
#include <string>
#include "user.h"
#include "teacher.h"
#include "student.h"

void do_something(User &user) {
    user.output();
}

int main() {
    Teacher teacher;
    Student student;
    User& u = teacher;
    User& v = student;

    do_something(u);
    do_something(v);
}