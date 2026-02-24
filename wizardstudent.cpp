// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

#include "WizardStudent.h"
#include <iostream>

WizardStudent::WizardStudent(std::string n, std::string h, int y) 
    : name(n), house(h), year(y) {
    std::cout << "Welcome, " << name << " to " << house << "!\n";
}

WizardStudent::~WizardStudent() {
    std::cout << name << " has graduated!\n";
}

void WizardStudent::learnSpell(const Spell& spell) {
    spells.push_back(spell);
    std::cout << name << " learned " << spell.getName() << "!\n";
}

void WizardStudent::practiceSpells() {
    for(auto& spell : spells) {
        spell.practice();
    }
}

void WizardStudent::showSpells() const {
    std::cout << name << "'s spells:\n";
    for(const auto& spell : spells) {
        std::cout << "- " << spell.getName() << " (Power: " << spell.getPowerLevel() << ")\n";
    }
}

std::string WizardStudent::getName() const { return name; }
