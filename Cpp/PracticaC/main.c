#include <stdio.h>	//Funciones estándar de i/O
#include <string.h>	//Funciones de cadena
void hola(char cad[]);
void Cuenta();
int main(){
	char cad[80];
	strcpy(cad, "...you mother fucker");
	hola(cad);
	Cuenta();
}

void hola(char cad[]){
 printf("Hola ");
 printf("%s \n", cad);
 return;
}

void Cuenta(){
	short i =32767;
	short ni = i+1;
	unsigned short nsi = i+2;
	printf("short i= %d \nshort i + 1= %d \nunsigned i+2= %u", i, ni, nsi);
	return;  
}
