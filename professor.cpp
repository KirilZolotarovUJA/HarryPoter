// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

#include "Professor.h"
#include <iostream>

Professor::Professor(std::string n, std::string s) 
    : name(n), subject(s) {
    std::cout << "Professor " << name << " is ready to teach " << subject << "!\n";
}

Professor::~Professor() {
    std::cout << "Professor " << name << " has retired.\n";
}

void Professor::addStudent(WizardStudent* student) {
    students.push_back(student);
    std::cout << student->getName() << " joined Professor " << name << "'s class.\n";
}

void Professor::teachSpell(const Spell& spell) {
    std::cout << "Professor " << name << " is teaching " << spell.getName() << "!\n";
    for(auto student : students) {
        student->learnSpell(spell);
    }
}

void Professor::evaluateStudents() const {
    std::cout << "\nProfessor " << name << " is evaluating students:\n";
    for(const auto student : students) {
        student->showSpells();
    }
}
