// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>
#include <vector>
#include "WizardStudent.h"

class Professor {
private:
    std::string name;
    std::string subject;
    std::vector<WizardStudent*> students;

public:
    Professor(std::string n, std::string s);
    ~Professor();
    void addStudent(WizardStudent* student);
    void teachSpell(const Spell& spell);
    void evaluateStudents() const;
};

#endif
