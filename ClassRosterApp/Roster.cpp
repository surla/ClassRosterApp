//
//  Roster.cpp
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/7/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//

#include "Roster.h"

void Roster::parseThanAdd(string datarow) {
    
    add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

string Roster::remove(string StudentID) {
    bool found = false;
    while (!found) {
        found = true;
        if
    }
}

void Roster::printAll() {
    for (int i = 0; i < index; i++) {
        classRosterArray[i]->print();
        
    }
}
