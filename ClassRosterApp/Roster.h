//
//  Roster.h
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/9/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//
#include <iostream>
#include <stdio.h>
using namespace std;

class Roster {
private:
    string name;
    
public:
    Roster();
    void parseAdd(string dataRow);
    void add(string name);
    void print();
    
    //    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    //    void remove(string studentID);
    //    void printAll();
    //    void printAverageDaysInCourse(string studentID);
    //    void printInvalidEmails();
    //    void printByDegreeProgram(DegreeProgram degreeProgram);
};
