
#include "student.hpp"

#include <iostream>

Student::Student(std::string &NAME, int STUDENT_ID)
    : User(NAME), m_student_id(std::move(STUDENT_ID)){}

void Student::print_id(){
    std::cout << m_student_id << "\n";
}