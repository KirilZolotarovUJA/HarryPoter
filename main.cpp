// This file was created by Jose Ignacio Gomez Espinola
// on February, 2025.

#include <iostream>
#include "Spell.h"
#include "WizardStudent.h"
#include "Professor.h"

void displayMenu() {
    std::cout << "\n=== Wizarding School Menu ===\n";
    std::cout << "1. Create new student\n";
    std::cout << "2. Teach new spell\n";
    std::cout << "3. Practice spells\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Professor mcgonagall("McGonagall", "Transfiguration");
    std::vector<WizardStudent*> allStudents;
    
    int choice;
    bool running = true;
    
    while(running) {
        displayMenu();
        std::cin >> choice;
        
        switch(choice) {
            case 1: {
                std::string name, house;
                std::cout << "Enter student name: ";
                std::cin >> name;
                std::cout << "Enter house name: ";
                std::cin >> house;
                
                WizardStudent* student = new WizardStudent(name, house, 1);
                allStudents.push_back(student);
                mcgonagall.addStudent(student);
                break;
            }
            case 2: {
                if(allStudents.empty()) {
                    std::cout << "No students to teach!\n";
                    break;
                }
                
                Spell spell("Wingardium Leviosa", "Levitation", 1);
                mcgonagall.teachSpell(spell);
                break;
            }
            case 3: {
                if(allStudents.empty()) {
                    std::cout << "No students to practice!\n";
                    break;
                }
                
                for(auto student : allStudents) {
                    student->practiceSpells();
                }
                mcgonagall.evaluateStudents();
                break;
            }
            case 4: {
                running = false;
                break;
            }
            default: {
                std::cout << "Invalid option!\n";
            }
        }
    }
    
    // Cleanup
    for(auto student : allStudents) {
        delete student;
    }
    
    return 0;
}
