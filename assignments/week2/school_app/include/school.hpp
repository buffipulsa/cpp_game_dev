#pragma once

#include "teacher.hpp"
#include "student.hpp"

#include <unordered_map>
#include <string>
#include <vector>
#include <variant>

struct ClassDetails{
    Teacher* teacher = nullptr;
    std::vector<Student*> students;
};

class School{
    private:
        std::unordered_map<
            std::string, 
            std::unordered_map<std::string, ClassDetails>
        > m_class_details;

    public:
        School();

        void add_class_to_school(std::string& class_name, Teacher& teacher, std::vector<Student>& students);
};
School::School()
{
    
}

void School::add_class_to_school(std::string& class_name, Teacher& teacher, std::vector<Student>& students)
{
    
}
