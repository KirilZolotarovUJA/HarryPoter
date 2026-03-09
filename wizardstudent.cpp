// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

/**
 * @file wizardstudent.cpp
 * @author Kiril Zolotarov  (@domain.com)
 * @author Roberto Menegassi (ramf0001@red.ujaen.es)
 * @brief Implementation of WizardStudent class methods
 * @version 0.1
 * @date 2026-03-09
 *
 * @copyright Copyright (c) 2026
 *
 */

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
