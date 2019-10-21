/* 
 * File:  suma_digitos.c
 * Author: Grupo 3
 *
 * Created on October 17, 2019, 10:20 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include"suma_digitos.h"

/*La función suma las cifras o dígitos de un número de manera recursiva.
 * No funciona pues en el mismo no se plantea un case base, lo que hace que
 * se mantenga llamandose y llenando el stack todo el tiempo.
 * Para hacer que funcione, solo hace falta replantear el caso base.
 */



int suma_digitos(int n1)
{
    return ((n1 % 10) + suma_digitos(n1 / 10)); //caso recursivo
}

