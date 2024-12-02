/*
 * Week04.h
 *
 *  Created on: 20 nov. 2024
 *      Author: rleza
 */

#ifndef WEEK04_H_
#define WEEK04_H_

#ifdef __cplusplus
extern "C" {
#endif
using namespace std;

int pow(int, int); //Base, Exponent
int sin(int, int ); //Opposite, Hypotenuse
float avg(int [], int aSize);

int pow(int base, int exponent){
    if(exponent < 0){
        cout << "Exponent should be a positive number " ;
        return 0;
    }
    int iResult = 1;
    for(int i = 1; i <= exponent ; i++){
            iResult = iResult * base;
    }
    return iResult;
}

int sin(int opposite, int hypotenuse){
    return opposite / hypotenuse;
}

float avg(int list[], int aSize){
    if(aSize == 0){
        return 0;
    }
    int added = 0;
    for(int i = 0; i < aSize; i++){
        added += list[i];
    }
    return (float) added / aSize;
}

#ifdef __cplusplus
}
#endif
#endif /* WEEK04_H_ */
