/*
 * figueroa.h
 *      Author: Damian.Figueroa
 */

#ifndef FIGUEROA_H_
#define FIGUEROA_H_
#endif /* FIGUEROA_H_ */

/*
 * brief pide al usuario ingresar un entero
 * return retorna dicho numero ingresado
*/
int IngresarNumero();


/*
 * brief suma dos enteros
 * param numero1 es el primer entero
 * param numero2 es el segundo entero
 * return devuelve la suma de los enteros
*/
int Adicion(int numero1, int numero2);


/*
 * brief resta dos enteros
 * param numero1 es el primer entero
 * param numero2 es el segundo entero
 * return devuelve la resta de los enteros
*/
int Sustraccion(int numero1, int numero2);


/*
 * brief multiplica dos enteros
 * param numero1 es el primer entero
 * param numero2 es el segundo entero
 * return devuelve el producto
*/
int Producto(int numero1, int numero2);


/*
 * brief divide dos numeros enteros
 * param numero1 es el primer entero
 * param numero2 es el segundo entero
 * return devuelve el cociente
*/
float Cociente(int numero1, int numero2);

/*
 * brief factoriza un numero
 * param numero1 es el numero a factorizar
 * return devuelve el factorial
*/
int Factoreo(int numero1);


/*
 * brief menu de opciones
 * return retorna opcion elegida
*/
int Menu(int numero1, int numero2, int flagNum1, int flagNum2);

/*
 * brief realiza una animacion de apagado
*/
void Apagado();

/*
 * brief resetea los flags que recibe
 * param flag es la variable que recibe el valor 0
 */
void ResetFlags(int* flag);
