// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

#include "Spell.h"
#include <iostream>

Spell::Spell(std::string n, std::string e, int p) : name(n), effect(e), powerLevel(p)
{
    std::cout << "New spell " << name << " learned!\n";
}

Spell::~Spell()
{
    std::cout << "Spell " << name << " forgotten.\n";
}

std::string Spell::getName() const { return name; }
std::string Spell::getEffect() const { return effect; }
int Spell::getPowerLevel() const { return powerLevel; }

void Spell::practice()
{
    powerLevel += 1;
    std::cout << "Practicing " << name << "! Power level increased to " << powerLevel << "\n";
}
