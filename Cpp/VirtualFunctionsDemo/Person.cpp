/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Person.h"
#include <iostream>
Person::Person()
	: name("[Unknown name]"), age(0)
{}

Person::Person(const std::string & name, int age) : name(name), age(age){}

void Person::display() const{
	std::cout << name << ", " << age << std::endl;
}
Person::~Person(){
	std::cout << "Goodbye from the Person destructor" << std::endl;
}
