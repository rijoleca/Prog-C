/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.h
 * Author: Ricardo
 *
 * Created on 1 de abril de 2018, 03:10 PM
 */

#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include "Person.h"

class Student : public Person
{
private:
	std::string course;
public:
	Student();
	Student(const std::string & name , int  age, const std::string & course);
	
	virtual void display() const;
	virtual ~Student();
	
};



#endif /* STUDENT_H */

