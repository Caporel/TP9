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
 * Además haremos que en caso de recibir un número negativo
 * tambien le sume las cifras de su valor absoluto.*
 */



int suma_digitos(int n1)
{
    if(n1<0)
    {   
        n1=-n1;
    }
    
    if(n1<=9)                                       //CASO BASE
    {  
        return n1;                                  //Si el tiene una sola cifra,devuelve ese valor.
    }
    else                                            //CASO RECURSIVO
    {
        return ((n1 % 10) + suma_digitos(n1 / 10)); //Suma la última cifra y lo que obtiene de llamarse así misma con la cifra dividida por 10(seria como correr la coma).
    }
    
}