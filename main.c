/* 
 * File:   main.c
 * Author: gino
 *
 * Created on October 17, 2019, 10:27 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include"suma_digitos.h"


int main(void)
{
    int a=125;                                                      //Defino y declaro número a analizar.                                
    
    printf("Las cifras de %d sumadas dan %d\n",a,suma_digitos(a));  //Llamo a la función y muestro al usuario el resultado.
    
    return (EXIT_SUCCESS);
}

