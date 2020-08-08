//
//  Roster.h
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/7/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "Degree.h"
#include "Student.h"
using namespace std;

class Roster {
private:
    //Array of pointers to students
    Student** classRosterArray;

public:
    void parseThanAdd(string datarow);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
};
