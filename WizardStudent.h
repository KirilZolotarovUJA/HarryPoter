// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

#ifndef WIZARD_STUDENT_H
#define WIZARD_STUDENT_H

#include <string>
#include <vector>
#include "Spell.h"

class WizardStudent
{
private:
    std::string name;
    std::string house;
    int year;
    std::vector<Spell> spells;

public:
    WizardStudent(std::string n, std::string h, int y);
    ~WizardStudent();
    void learnSpell(const Spell &spell);
    void practiceSpells();
    void showSpells() const;
    std::string getName() const;
};

#endif
