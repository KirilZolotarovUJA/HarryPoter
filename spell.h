// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

/**
 * @file spell.h
 * @author Kiril Zolotarov  (@domain.com)
 * @author Roberto Menegassi (ramf0001@red.ujaen.es)
 * @brief Header of the Spell Class
 * @version 0.1
 * @date 2026-03-09
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef SPELL_H
#define SPELL_H

#include <string>

/**
 * @class Spell
 * @brief Class to manage a spell. It is responsible for the spell infos.
 *  Allows improvement on the spell's powerLevel.
 */
class Spell {
private:
    std::string name; ///< Name of the spell.
    std::string effect; ///< Effect of the spell.
    int powerLevel; ///< Current power level of the spell.

public:
    /**
     * @brief Construct a new Spell object.
     * 
     * @param n Spell name.
     * @param e Spell effect.
     * @param p Spell power level.
     */
    Spell(std::string n, std::string e, int p);

    /**
     * @brief Destroy the Spell object
     * 
     */
    ~Spell();

    /**
     * @brief Getter to Spell name.
     * 
     * @return std::string Spell name.
     */
    std::string getName() const;

    /**
     * @brief Getter to Spell effect.
     * 
     * @return std::string Spell effect.
     */
    std::string getEffect() const;

    /**
     * @brief Getter to Spell powerLevel.
     * 
     * @return int Spell powerLevel.
     */
    int getPowerLevel() const;

    /**
     * @brief Practice the spell. Improves the powerLevel by 1 and shows a message with spell name and new powerLevel.
     * 
     */
    void practice();
};

#endif