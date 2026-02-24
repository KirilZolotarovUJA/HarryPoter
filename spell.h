// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

#ifndef SPELL_H
#define SPELL_H

#include <string>

class Spell {
private:
    std::string name;
    std::string effect;
    int powerLevel;

public:
    Spell(std::string n, std::string e, int p);
    ~Spell();
    std::string getName() const;
    std::string getEffect() const;
    int getPowerLevel() const;
    void practice();
};

#endif