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
#include <regex>
using namespace std;

//Empty constructor set to default values
Roster::Roster() {
    this->studentIndex = -1;
    this->numOfStudents = 0;
    this->classRosterArray = nullptr;
}

//Full constructor
Roster::Roster(int numOfStudents) {
    this->studentIndex = -1;
    this->numOfStudents = numOfStudents;
    this->classRosterArray = new Student*[numOfStudents];
}

//Destructor
Roster::~Roster() {
    cout << "Destructor called." << endl;
    for (int i = 0; i <= numOfStudents; i++) {
        delete this->classRosterArray[i];
    }
    delete classRosterArray;
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
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    int daysInCourse[3];
    
    daysInCourse[0] = daysInCourse1;
    daysInCourse[1] = daysInCourse2;
    daysInCourse[2] = daysInCourse3;
    
    classRosterArray[studentIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
}

void Roster::remove(string studentID) {
    for (int i = 0; i < 5; i++) {
        if (this->classRosterArray[i]->getStudentID() == studentID) {
            delete this->classRosterArray[i];;
            this->classRosterArray[i] = this->classRosterArray[numOfStudents - 1];
            cout << "Student with ID of " << studentID << " successfully removed.";
            numOfStudents--;
            return;
        }
        
    }
    
    cout << "Error: Can not remove student. Student ID not found! Try again.\n";
}

void Roster::printAll() {
    for (int i = 0; i < numOfStudents; i++) {
        classRosterArray[i]->print();
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            int* student = classRosterArray[i]->getDaysInCourse();
            int sum = 0;
            for (int i = 0; i < 3; i++) {
                sum += student[i];
            }
            
            double average = (float)sum / 3;
            cout << studentID << ": Average day in courses is " << average << "." << endl;
        }
    }
}

void Roster::printInvalidEmails() {
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    
    for (int i = 0; i < 5; i++) {
        string email = classRosterArray[i]->getEmailAddress();
        if (!regex_match(email, pattern)) {
            cout << email << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < numOfStudents; i++) {
        Student* student = classRosterArray[i];
        if (student->getDegreeProgram() == degreeProgram) {
            student->print();
        }
    }
}
