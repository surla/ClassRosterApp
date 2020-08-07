//
//  Roster.h
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/7/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//

#ifndef Roster_h
#define Roster_h

#include <stdio.h>

class Roster {
private:
    Student** classRosterArray;

    public:
        void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);
}
#endif /* Roster_h */
