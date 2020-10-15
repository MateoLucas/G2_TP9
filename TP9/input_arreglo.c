/***************************************************************************//**
  @input_arreglo.c     
  @recive el input del usuario y guarda solo letras    inicializa un matriz
  @Alejandro   
 ******************************************************************************/

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

#include"input_arreglo.h"


/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/



/*******************************************************************************
 * ENUMERATIONS AND STRUCTURES AND TYPEDEFS
 ******************************************************************************/



/*******************************************************************************
 * VARIABLES WITH GLOBAL SCOPE
 ******************************************************************************/

// +ej: unsigned int anio_actual;+


/*******************************************************************************
 * FUNCTION PROTOTYPES FOR PRIVATE FUNCTIONS WITH FILE LEVEL SCOPE
 ******************************************************************************/

// +ej: static void falta_envido (int);+


/*******************************************************************************
 * ROM CONST VARIABLES WITH FILE LEVEL SCOPE
 ******************************************************************************/

// +ej: static const int temperaturas_medias[4] = {23, 26, 24, 29};+


/*******************************************************************************
 * STATIC VARIABLES AND CONST VARIABLES WITH FILE LEVEL SCOPE
 ******************************************************************************/

// +ej: static int temperaturas_actuales[4];+


/*******************************************************************************
 *******************************************************************************
                        GLOBAL FUNCTION DEFINITIONS
 *******************************************************************************
 ******************************************************************************/

int input(char *pal){        //busca el input del usuario y lo escribe en el arreglo correspondiente, devuelve 1 si lo introducido no es valido y 0 si esta bien
    int err;
    char c;
    int i = 0;
    err = c = 0;
    for(i=0;((c=getchar()) != '\n') && (i<MAXLETRAS);++i){ //mientras que el caracter recibido no sea '\n' interpreta si lo recibido es valido o no, y no exeda la cantidad maxima de caracteres;
       if ((c<='z')&&(c>='a')){    //si es alguna letra minuscula la gurada en  la posicion del arreglo que corresponda  
           pal[i]=c; 
       }else{
           if((c<='Z')&&(c>='A')){//si es mayuscula lo paso a minuscula y lo guardo en mi arreglo
               pal[i]=(c+PASAJE);//si a una mayuscula le sumo 32 la hago minuscula
           }else{
               if((c=='.')||(c==',')||(c==' ')){//si es . o , o ' 'omite el caracter
               --i;//me salteo ese lugar del string    
               }else{
                   err=1;//carcater no valido marca error
               }
           }
       
       } 
    }
    return err;
}

void inimat(char *pal){ //inicializa la mat como vacia
    int m=0;
    for(m=0;m<(MAXLETRAS);++m){     //mientras el contador de filas sea distinto a la cant. de filas,guarda NULL en el string
        pal[m]=0;
    }
}
int size(char*pal){//determina la cantidad de caracteres q tendra el string sin tener en cuenta los terminadores
    int i;
    for(i=0;pal[i]!=0;++i){       
   }
   return i;    
}
/*******************************************************************************
 *******************************************************************************
                        LOCAL FUNCTION DEFINITIONS
 *******************************************************************************
 ******************************************************************************/



