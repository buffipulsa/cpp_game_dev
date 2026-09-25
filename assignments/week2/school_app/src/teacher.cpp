
#include "teacher.hpp"

Teacher::Teacher(std::string &NAME, int FACUILTY_ID, std::string &SUBJECT)
    : User(NAME), m_facuilty_id(std::move(FACUILTY_ID)), m_subject(std::move(SUBJECT)){}