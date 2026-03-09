// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

/**
 * @file wizardstudent.h
 * @author Kiril Zolotarov  (@domain.com)
 * @author Roberto Menegassi (ramf0001@red.ujaen.es)
 * @brief Header of the WizardStudent Class
 * @version 0.1
 * @date 2026-03-09
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef WIZARD_STUDENT_H
#define WIZARD_STUDENT_H

#include <string>
#include <vector>
#include "Spell.h"

/**
 * @class WizardStudent
 * @brief Class that manage each student. It is responsible for the student infos and every spell they've learned.
 * It also interacts with Spell Class to allow practices and spell visualization.
 */
class WizardStudent {
private:
    std::string name; ///< Name of the student.
    std::string house; ///< Which house the student is .
    int year; ///< Current school year.
    std::vector<Spell> spells; ///< List of spells learned.

public:
    /**
     * @brief Construct a new Wizard Student object.
     * 
     * @param n Student name.
     * @param h Student house.
     * @param y Student school year.
     */
    WizardStudent(std::string n, std::string h, int y);

    /**
     * @brief Destroy the Wizard Student object.
     * 
     */
    ~WizardStudent();

    /**
     * @brief Insert new spell into student's learned spells list.
     * Shows a message with the spell name.
     * 
     * @param spell Object Spell to be added to the list.
     */
    void learnSpell(const Spell& spell);

    /**
     * @brief Call the spell method 'practice'.
     */
    void practiceSpells();

    /**
     * @brief Show all the student's spells with their names and powers.
     * 
     */
    void showSpells() const;

    /**
     * @brief Getter to WizardStudent name.
     * 
     * @return std::string WizardStudent name.
     */
    std::string getName() const;
};

#endif
