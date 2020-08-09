//
//  Class.cpp
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/9/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "Roster.h"
using namespace std;

Roster::Roster() {
    this->name = "hello";
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
    string age = dataRow.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    string course1 = dataRow.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    string course2 = dataRow.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    string course3 = dataRow.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = dataRow.find(",", lhs);
    string degreeProgram = dataRow.substr(lhs, rhs - lhs);
    
    cout << studentID << endl;
    cout << firstName << endl;
       cout << lastName << endl;
       cout << emailAddress << endl;
       cout << age << endl;
       cout << course1 << endl;
    cout << course2 << endl;
    cout << course3 << endl;
    cout << degreeProgram << endl;
}

void Roster::add(string name) {
    this->name = name;
}

void Roster::print() {
    cout << this->name << endl;
}
