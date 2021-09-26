/*
 * figueroa.c
 *      Author: Damian.Figueroa
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#include "figueroa.h"


int IngresarNumero()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    system("pause");
    return numero;
}


int Adicion(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
}


int Sustraccion(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 - numero2;
    return resultado;
}


int Producto(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 * numero2;
    return resultado;
}


float Cociente(int numero1, int numero2)
{
    float resultado;
    resultado = (float)numero1 / numero2;

    return resultado;
}


int Factoreo(int numero1)
{
    int contadorFactoreo;
    int factorial;
    factorial=1;
    if(numero1==0)
    {
        factorial=1;
    }
    else
    {
        for (contadorFactoreo = 1; contadorFactoreo <= numero1; contadorFactoreo++)
        {
            factorial = factorial * contadorFactoreo;
        }
    }

    return factorial;
}


void Apagado()
{
    printf("##################################################################\n");
    printf("Gracias por utilizar Figueroa Calculator\n");
    printf("Hasta la proxima\n");
    printf("##################################################################\n");
    Beep(1500,100);
    system("color 2");
    Beep(2000,100);
    system("color 1");
    Beep(1500,100);
    system("color 4");
    Beep(2000,100);
    system("color 3");
}



int Menu(int numero1, int numero2, int flagNum1, int flagNum2)
{
    int opcion;
    system("cls");
    printf("##################################################################\n");
    printf("#                       Calculadora                              #\n");
    printf("##################################################################\n");
    printf("#                      Menu de opciones                          #\n");
    printf("##################################################################\n");
    if(flagNum1==0)
    {
        printf("******************************************************************\n");
        printf("                 1- Ingrese el 1er operando (A=x)                 \n");
        printf("******************************************************************\n");
    }
    else
    {
        printf("******************************************************************\n");
        printf("                 1- Ingrese el 1er operando (A=%d)             \n",numero1);
        printf("******************************************************************\n");
    }
    if(flagNum2==0)
    {
        printf("******************************************************************\n");
        printf("                 2- Ingrese el 2do operando (B=y)                 \n");
        printf("******************************************************************\n");
    }
    else

    {
        printf("******************************************************************\n");
        printf("                 2- Ingrese el 2do operando (B=%d)             \n",numero2);
        printf("******************************************************************\n");
    }
    printf("******************************************************************\n");
    printf("                 3- Calcular todas las operaciones                \n");
    printf("******************************************************************\n");
    printf("                 4- Mostrar las operaciones                       \n");
    printf("******************************************************************\n");
    printf("                 5- Salir                                         \n");
    printf("******************************************************************\n");
    printf("                 Elija una opcion: \n");
    printf("******************************************************************\n");

    scanf("%d", &opcion);

    return opcion;
}


void ResetFlags(int* flag)
{

    *flag = 0;
}


