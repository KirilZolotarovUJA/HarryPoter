// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

/**
 * @file professor.h
 * @author Kiril Zolotarov  (@domain.com)
 * @author Roberto Menegassi (ramf0001@red.ujaen.es)
 * @brief Header of the Professor Class
 * @version 0.1
 * @date 2026-03-09
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>
#include <vector>
#include "WizardStudent.h"

/**
 * @class Professor
 * @brief Class to manage each professor. It is responsible for professor name, subject and students list.
 * It interacts with WizardStudent class and Spell class to manage and evaluate the students.
 * 
 */
class Professor {
private:
    std::string name; ///< Name of the professor.
    std::string subject; ///< Subject of the professor.
    std::vector<WizardStudent*> students; ///< List of students on Professor class.

public:
    /**
     * @brief Construct a new Professor object.
     * 
     * @param n Professor name.
     * @param s Professor subject.
     */
    Professor(std::string n, std::string s);

    /**
     * @brief Destroy the Professor object.
     * 
     */
    ~Professor();

    /**
     * @brief Insert WizardStudent into Professor's student list.
     * Shows a message with WizardStudent name and Professor name.
     * 
     * @param student Reference to the WizardStudent to be inserted.
     */
    void addStudent(WizardStudent* student);

    /**
     * @brief Teach the same spell to all students on Professor's student list.
     * 
     * @param spell The spell to be taught.
     */
    void teachSpell(const Spell& spell);

    /**
     * @brief Shows the powerLevel of every spell for each student on Professor's student list.
     */
    void evaluateStudents() const;
};

#endif
