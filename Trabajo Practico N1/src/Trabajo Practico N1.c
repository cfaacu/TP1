/*
 ============================================================================
 Name        : Trabajo.c
 Author      : Facu
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "utn2.h"
#include "tpuno.h"

#define MINIMO -9999
#define MAXIMO 99999


int main(void)
{
	float numeroUno=0;
	float numeroDos=0;
	float resultadoSuma,resultadoResta,resultadoMultiplicacion,resultadoDivision,resultadoFactorialUno,
	resultadoFactorialDos;
	int flagPrimerNumero=0;
	int flagSegundoNumero=0;
	int flagOperaciones=0;
	int opcion;

	do
	{

		tp_menuCalc(numeroUno, numeroDos);
		if(utn_getNumero(&opcion,"Ingrese una opcion:","[ERROR] Opcion invalida!\n",1,5,1)==0)

		switch(opcion)
		{
			case 1:
				if(utn_getNumeroFloat(&numeroUno,"Ingrese el 1er numero:","[ERROR] Numero invalido\n",MINIMO,MAXIMO,3)==0)
				flagPrimerNumero=1;
				break;
			case 2:
				if(flagPrimerNumero==1)
				{
					if(utn_getNumeroFloat(&numeroDos,"Ingrese el 2do numero:","[ERROR] Numero invalido\n",MINIMO,MAXIMO,3)==0)
					flagSegundoNumero=1;
				}
				else
				{
					printf("[ERROR] No se cargo el 1er numero\n");
				}
				break;
			case 3:
				if(flagPrimerNumero==1 && flagSegundoNumero==1)
				{
					flagOperaciones=1;
					printf("Operaciones realizadas con exito.\n");

					if(tp_sumarDosNumeros(numeroUno, numeroDos, &resultadoSuma)==0)
					if(tp_restarDosNumeros(numeroUno, numeroDos,&resultadoResta)==0)
					if(tp_multiplicarDosNumeros(numeroUno, numeroDos,&resultadoMultiplicacion)==0)
					if(tp_dividirDosNumeros(numeroUno, numeroDos,&resultadoDivision)==0)
					if(tp_fartorialNumeros(numeroUno,&resultadoFactorialUno)==0)
					if(tp_fartorialNumeros(numeroDos,&resultadoFactorialDos)==0){
					}
				}
				else
				{
					printf("[ERROR] Faltan cargar datos!\n");
				}
				break;
			case 4:
				if(flagOperaciones==1)
				{
					printf("El resultado de (%.2f + %.2f) es: %.2f\n"
						   "El resultado de (%.2f - %.2f) es: %.2f\n"
						   "El resultado de (%.2f * %.2f) es: %.2f\n",
						   numeroUno,numeroDos,resultadoSuma,
						   numeroUno,numeroDos,resultadoResta,
						   numeroUno,numeroDos,resultadoMultiplicacion);
					if(numeroDos==0)
					{
						printf("El resultado de (%.2f / %.2f) es: ERROR,no se puede dividir por 0\n",numeroUno,numeroDos);
					}
					else
					{
						printf("El resultado de (%.2f / %.2f) es: %.2f\n",numeroUno,numeroDos,resultadoDivision);
					}

					if(numeroUno < 0)
					{
						printf("El resultado de (!%.2f) es: ERROR,no existe factorial de negativo.\n",numeroUno);
					}
					else
					{
						printf("El resultado de (!%.2f) es: %.2f\n",numeroUno,resultadoFactorialUno);
					}

					if(numeroDos < 0)
					{
						printf("El resultado de (!%.2f) es: ERROR,no existe factorial de negativo.\n",numeroDos);
					}
					else
					{
						printf("El resultado de (!%.2f) es: %.2f\n",numeroDos,resultadoFactorialDos);
					}

				}
				else
				{
					printf("[ERROR] No se realizaron las operaciones.\n");
				}
				break;
			case 5:
				break;
		}
	}while(opcion!=5);



	return EXIT_SUCCESS;
}



