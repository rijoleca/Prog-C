/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo
 *
 * Created on 1 de abril de 2018, 03:05 PM
 */

#include <cstdlib>
#include "Student.h"

using namespace std;

/*
 * 
 */
void demoFunction1(Person * ptr);
void demoFunction2(Person & ref);

int main(int argc, char** argv) {
	Person * p = new Student("Jena Smith", 18, "Physics");
	
	p->display();
	demoFunction1(p);
	demoFunction2(*p);
	
	delete p;

    return 0;
}

void demoFunction1(Person * ptr){
	ptr->display();
}

void demoFunction2(Person & ref){
	ref.display();
}
