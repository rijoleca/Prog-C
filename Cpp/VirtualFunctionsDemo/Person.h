/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: Ricardo
 *
 * Created on 1 de abril de 2018, 03:06 PM
 */

#ifndef PERSON_H
#define PERSON_H
#pragma once
#include <string>

class Person {
private:
    std::string name;
protected:
    int age;
public:
	Person();
	Person(const std::string & name, int age);
	virtual void display() const;
	virtual ~Person();
};


#endif /* PERSON_H */

