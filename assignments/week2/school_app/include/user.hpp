#pragma once

#include <string>


class User{
    protected:

        std::string m_name;

    public:
    
        User(std::string &NAME);

        void print_name();

};

