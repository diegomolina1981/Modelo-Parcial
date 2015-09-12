#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

#define CANTIDAD 3

int main(int argc, char *argv[]) {
	
	int proximo = 0;
	int option;	
	int codigo[CANTIDAD];
	char descripcion[CANTIDAD][51];
	float importe[CANTIDAD];
	int cantidad[CANTIDAD];

	
	do{
		option = menu("\n1.ALTA \n2.BAJA \n3.MODIFICAR \n4.LISTA\n9.SALIR\n> ");	
		switch(option)
		{
			case 1:
				alta(proximo, codigo, descripcion, importe, cantidad, CANTIDAD);
				proximo=1;
				break;
				
			case 2:
				if(proximo==0)
				{
					printf("Primero Igrese a opcion Alta");
				}
				else
					baja(proximo,codigo,descripcion,importe, cantidad,CANTIDAD);
			
			break;
			
			case 3:
				if(proximo==0)
				{
					printf("Primero Igrese a opcion Alta");
				}
				else
					modificar(proximo,codigo,descripcion,importe,cantidad,CANTIDAD);
		
				break;
				
				
			case 4:
				informar(proximo, codigo, descripcion, importe, cantidad, CANTIDAD);
				break;
			
		}
	
	}while(option != 9);
	
		
	
	
	
	
	
	return 0;
}
