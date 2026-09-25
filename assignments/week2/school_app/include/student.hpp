#pragma once

#include "user.hpp"

#include <string>


class Student: public User {
    private:
        int m_student_id;

    public:
        Student(std::string &NAME, int STUDENT_ID);

        void print_id();
};

