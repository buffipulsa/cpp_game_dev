#pragma once

#include "user.hpp"

class Teacher: public User{
    private:
        int m_facuilty_id;
        std::string m_subject;
    
    public:
        Teacher(std::string &NAME, int FACUILTY_ID, std::string &SUBJECT);
};

