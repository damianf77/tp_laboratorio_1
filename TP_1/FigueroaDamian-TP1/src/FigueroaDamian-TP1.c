/*
 ============================================================================
 Name        : FigueroaDamian-TP1.c
 Author      : Figueroa Damian
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "figueroa.h"

int main(void)
{
	setbuf(stdout, NULL);
//Variables de numeros a operar
    int numeroUno=0;
    int numeroDos=0;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    float resultadoDivision;
    int factorialnumeroUno;
    int factorialnumeroDos;
//Flags
    int flagNumero1 = 0;
    int flagNumero2 = 0;
    int flagOperaciones = 0;
    char continuar = 's';


    do
    {
        switch(Menu(numeroUno,numeroDos,flagNumero1,flagNumero2))
        {
        case 1:
            numeroUno = IngresarNumero();
            flagNumero1 = 1;
            break;
        case 2:
            if(flagNumero1 == 0)
            {
                printf("No se puede ingresar el segundo operando, debe ingresarse previamente el primero\n");
                system("pause");
            }
            else
            {
                numeroDos = IngresarNumero();
                flagNumero2 = 1;
            }

            break;
        case 3:
            if (flagNumero1==0 && flagNumero2==0)
            {
                printf("No se pueden calcular las operaciones sin ingresar los dos operandos.\n");
                system("pause");
            }
            else
            {
                printf("##################################################################\n");
                printf("Se calculara la suma (%d + %d)\n",numeroUno,numeroDos);
                resultadoSuma = Adicion(numeroUno,numeroDos);
                printf("Se calculara la resta(%d - %d)\n",numeroUno,numeroDos);
                resultadoResta = Sustraccion(numeroUno,numeroDos);
                printf("Se calculara la division(%d / %d)\n",numeroUno,numeroDos);
                resultadoDivision = Cociente(numeroUno,numeroDos);
                printf("Se calculara la multiplicación (%d * %d)\n",numeroUno,numeroDos);
                resultadoMultiplicacion = Producto(numeroUno,numeroDos);
                printf("Se calculara el factorial (A=%d)!  (B=%d)!\n",numeroUno,numeroDos);
                printf("##################################################################\n");
                factorialnumeroUno = Factoreo(numeroUno);
                factorialnumeroDos = Factoreo(numeroDos);
                if(numeroDos==0)
                {
                    printf("Recuerde que el segundo operando es 0, por lo que no se podra dividir.\n");
                }
                system("pause");
                system("cls");
                flagOperaciones = 1;
            }
            break;
        case 4:
            if(flagOperaciones == 0)
            {
                printf("No se pueden mostrar los resultados ya que no se realizaron las operaciones previamente\n");
                system("pause");
            }
            else
            {
                printf("##################################################################\n");
                printf("El resultado de %d + %d es: %d \n", numeroUno,numeroDos,resultadoSuma);
                printf("El resultado de %d - %d es: %d \n", numeroUno,numeroDos,resultadoResta);

                if(numeroDos==0)
                {
                    printf("No es posible dividir por cero\n");
                }
                else
                {
                    printf("EL resultado de %d / %d es: %.2f \n", numeroUno,numeroDos,resultadoDivision);
                }

                printf("El resultado de %d * %d es: %d \n", numeroUno,numeroDos,resultadoMultiplicacion);

                if(numeroUno >= 0 && numeroUno<=12)
                {
                    printf("El factorial de %d es: %d\n",numeroUno,factorialnumeroUno);
                }
                else if(numeroUno < 0)
                {
                    printf("No es posible calcular el factorial de numeros negativos.\n");
                }
                else
                {
                    printf("El factorial de %d excede el espacio de la variable.\n",numeroUno);
                }

                if(numeroDos >= 0 && numeroDos <= 12)
                {
                    printf("El factorial de %d es: %d\n",numeroDos,factorialnumeroDos);
                }
                else if (numeroDos < 0)
                {
                    printf("No se puede calcular el factorial de numeros negativos.\n");
                }
                else
                {
                    printf("El factorial de %d excede el espacio de la variable.\n",numeroDos);
                }
                printf("##################################################################\n");
                printf("     LUEGO DE MOSTRAR LOS RESULTADOS SE REINICIAN LOS VALORES     \n");
                printf("##################################################################\n");
                ResetFlags(&flagNumero1);
                ResetFlags(&flagNumero2);
                ResetFlags(&flagOperaciones);
                system("pause");
            }
            break;

        case 5:
            Apagado();
            continuar = 'n';
            break;
        default:
        printf("Error. Ingrese una opcion correcta\n");
        system("pause");
        fflush(stdin);
        break;
        }
    }while(continuar=='s');

    return 0;
}

