/*
 * tpuno.c
 *
 *  Created on: Apr 16, 2021
 *      Author: facu
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn2.h"
#include "tpuno.h"

/**
 * \brief Suma dos numeros
 * \param numeroUno Recibe el primer numero float
 * \param numeroDos Recibe el segundo numero float
 * \param pResultado puntero al resultado
 * \return Retorna 0 si se obtuvo el numero y -1 si no
 */
int tp_sumarDosNumeros(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno=-1;
	if(pResultado!=NULL)
		{
			*pResultado=numeroUno+numeroDos;
			retorno = 0;
		}
	return retorno;
}

/**
 * \brief Resta dos numeros
 * \param numeroUno Recibe el primer numero float
 * \param numeroDos Recibe el segundo numero float
 * \param pResultado puntero al resultado
 * \return Retorna 0 si se obtuvo el numero y -1 si no
 */
int tp_restarDosNumeros(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno=-1;
	if(pResultado!=NULL)
		{
			*pResultado=numeroUno-numeroDos;
			retorno = 0;
		}
	return retorno;
}

/**
 * \brief Divide dos numeros y valida que no se pueda dividir por 0
 * \param numeroUno Recibe el primer numero float
 * \param numeroDos Recibe el segundo numero float
 * \param pResultado puntero al resultado
 * \return Retorna 0 si se obtuvo el numero y -1 si no se obtuvo y -2 si numeroDos = 0
 */
int tp_dividirDosNumeros(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno=-1;
	if(pResultado!=NULL)
		{
			if(numeroDos!=0)
			{
				*pResultado=numeroUno/numeroDos;
				retorno = 0;
			}
			else
			{
				retorno = -2;
				printf("No se puede dividir por 0\n");
			}

		}
	return retorno;
}

/**
 * \brief Multiplica dos numeros
 * \param numeroUno Recibe el primer numero float
 * \param numeroDos Recibe el segundo numero float
 * \param pResultado puntero al resultado
 * \return Retorna 0 si se obtuvo el numero y -1 si no
 */
int tp_multiplicarDosNumeros(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno=-1;
	if(pResultado!=NULL)
		{
			*pResultado=numeroUno*numeroDos;
			retorno = 0;
		}
	return retorno;
}

/**
 * \brief Realiza el factorial de un numero
 * \param numeroUno Recibe el primer numero float
 * \param pResultado puntero al resultado
 * \return Retorna 0 si se obtuvo el numero y -1 si no
 */
int tp_fartorialNumeros(float numeroUno,float* pResultado)
{
	int retorno=-1;
	int factorial = 1;

	for(int i=1;i<=numeroUno;i++)
	{
	  factorial = factorial * i;
	  retorno=0;
	}
	*pResultado = factorial;
	return retorno;
}

/**
 * \brief Imprime el menu de la calculadora teniendo en cuenta los dos numeros ingresados
 * \param numeroUno Recibe el primer numero float
 * \param numeroDos Recibe el segundo numero float
 * \return void
 */
void tp_menuCalc(float numeroUno,float numeroDos)
{
	printf("1. Ingresar 1er operando (A=%.2f)\n"
		   "2. Ingresar 2do operando (B=%.2f)\n"
		   "3. Calcular todas las operaciones\n"
		   "  a) Calcular la suma(%.2f + %.2f)\n"
		   "  b) Calcular la resta(%.2f - %.2f)\n"
		   "  c) Calcular la division(%.2f / %.2f)\n"
		   "  d) Calcular la multiplicacion(%.2f * %.2f)\n"
		   "  e) Calcular el factorial (!%.2f)\n"
		   "4. Informar resultados\n"
		   "5. Salir\n",numeroUno,numeroDos,numeroUno,numeroDos,numeroUno,numeroDos,numeroUno,numeroDos,numeroUno,numeroDos,numeroUno);
}


