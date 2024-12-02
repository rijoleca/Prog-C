/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Student.h"
#include <iostream>

Student::Student()
	: course("[Unassigned course]"){}
	
Student::Student(const std::string & name, int age, const std::string & course)
	: Person(name, age), course(course){}
void Student::display() const{
	//Call base-class version of display, to display person-related info.
	Person::display();
	
	//Now diaplay the student related info.
	std::cout << course << std::endl;
}	
Student::~Student(){
	std::cout << "Goodbye from the Student destructor" << std::endl;
}
