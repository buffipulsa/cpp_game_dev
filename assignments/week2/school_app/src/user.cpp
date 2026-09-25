
#include "user.hpp"

#include <iostream>

User::User(std::string &NAME)
    : m_name(std::move(NAME)){};

void User::print_name(){
    std::cout << m_name << "\n";
}