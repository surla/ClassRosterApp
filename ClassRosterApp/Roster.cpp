//
//  Roster.cpp
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/9/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "Roster.h"
#include "Degree.h"
using namespace std;

Roster::Roster() {
    this->studentIndex = -1;
    this->numOfStudents = 0;
    this->classRosterArray = nullptr;
}

Roster::Roster(int numOfStudents) {
    this->studentIndex = -1;
    this->numOfStudents = numOfStudents;
    this->classRosterArray = new Student*[numOfStudents];
}

void Roster::parseAdd(string dataRow) {
    size_t rhs = dataRow.find(",");
    string studentID = dataRow.substr(0, rhs);
    
    size_t lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    string firstName = dataRow.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    string lastName = dataRow.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    string emailAddress = dataRow.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    int age = stoi(dataRow.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    int daysInCourse1 = stoi(dataRow.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    int daysInCourse2 = stoi(dataRow.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    int daysInCourse3 = stoi(dataRow.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    string degree = dataRow.substr(lhs, rhs - lhs);
    
    DegreeProgram degreeProgram;
 
    if (degree == "SECURITY") {
        degreeProgram = SECURITY;
    } else if (degree == "NETWORK") {
        degreeProgram = NETWORK;
    } else {
        degreeProgram = SOFTWARE;
    }
    
    studentIndex++;
    add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
    
    cout << classRosterArray[studentIndex] << endl;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    int daysInCourse[3];
    
    daysInCourse[0] = daysInCourse1;
    daysInCourse[1] = daysInCourse2;
    daysInCourse[2] = daysInCourse3;
    
    classRosterArray[studentIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
}
