
#include <string>

#include "student.hpp"

#include <iostream>

int main(){

    int id = 20123;
    std::string name = "Michael";

    Student student1 = Student(name, id);

    student1.print_name();
    student1.print_id();

    return 0;
}