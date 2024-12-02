/*
 * main.cpp
 *
 *  Created on: 20 nov. 2024
 *      Author: rleza
 */
#include <cstdlib>
#include <iostream>
#include "Week04.h"
using namespace std;
/*
 *
 */
int main(int argc, char** argv) {
    cout << "Power: " << pow(4, 2) << endl;
    cout << "Sine:  " << sin(4, 2) << endl;
    int nL[] = {4,10,6,27,8,9,21,6,78};
    cout << "Average: " << avg(nL, sizeof(nL)/sizeof(int)) << endl;

    return 0;
}




