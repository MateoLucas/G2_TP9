/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jandro1111
 *
 * Created on 14 de octubre de 2020, 15:49
 */


#include <stdlib.h>
#include "input_arreglo.h"
#include "palin.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char pal[MAXLETRAS];//asumimos q el palindromo no tiene mas de 120 letras
    char *p;
    p=pal;
    int error;
    int size1=0;
    printf("Todo lo q no son letras, o ' ' ','y '.' se considera como error\nIngrese su palindromo:\n");
    inimat(p);//inicializo el string q voy a analizar
    do{
        error =0;
        error = input(p);//recibo un string del usuario y lo transformo en letras minusculas, obiando ' ' ','y '.'
        if(error==1){//todo lo q no son letras, o ' ' ','y '.' es error
            printf("Caracter/es no valido/s \n Vuelva a ingresar su palindromo \n");
            inimat(p);//si hay error limpio la el string
        }
    }while(error==1);
    if((error=palin(pal,(size1=size(p))))==0){//es palindromo
        printf("Es palindromo\n");
    }else{
        printf("No es palindromo\n");
    }
    return (EXIT_SUCCESS);
}

