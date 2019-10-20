/***************************************************************************//**
  @file     +palindrome.c+
  @brief    +Este modulo analiza si el input ingresado es un palindromo o no+
  @author   +The Commune+
 ******************************************************************************/

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

#include "palindrome.h"

/*******************************************************************************
 * FUNCTION PROTOTYPES FOR PRIVATE FUNCTIONS WITH FILE LEVEL SCOPE
 ******************************************************************************/

static int palindrome(char ** argv, char * p_init, char *p_fin);


/*******************************************************************************
 *******************************************************************************
                        GLOBAL FUNCTION DEFINITIONS
 *******************************************************************************
 ******************************************************************************/

int palindrome_checker(char ** argv, int argc){
    int is_palindrome;
    char *puntero1 = argv[1];
    char *puntero2 = (argv[(argc-1)]);

    for(;*puntero2 != '\0';){             //Obtengo puntero a ultima letra del ultimo argumento insertado
      ++puntero2;
    }
    --puntero2;                           //Decrementamos uno para no apuntar al terminador.
    
    
    if (argc==1) {
        is_palindrome=0;
    }
    else{
        is_palindrome = palindrome(argv, puntero1, puntero2);
    }
    return is_palindrome;
}

/*******************************************************************************
 *******************************************************************************
                        LOCAL FUNCTION DEFINITIONS
 *******************************************************************************
 ******************************************************************************/

static int palindrome(char ** argv , char * p_init_char, char *p_fin_char){


    if(p_init_char > p_fin_char){
     //Caso base, ya evaluamos todas las letras.
     //Si llegamos a esta instancia, la frase ingresada es un palíndromo.
     return 1;
   }
   for(;((*p_init_char) == ',') || ((*p_init_char) == ' ') || ((*p_init_char) == '.') || ((*p_init_char) == '\0');){
     p_init_char+=1;          //Avanzo un espacio hasta encontrar caracter
   }
   for(;((*p_fin_char) == ',') || ((*p_fin_char) == ' ') || ((*p_fin_char) == '.') || ((*p_fin_char) == '\0');){
     p_fin_char-=1;          //Retrocedo un espacio hasta encontrar caracter
   }

   if((*p_init_char >= 'A') && (*p_init_char <= 'Z')){         //Caracter es mayúscula asi que la transformamos a minúscula
     *p_init_char += 32;
   }
   if((*p_fin_char >= 'A') && (*p_fin_char <= 'Z')){         //Caracter es mayúscula asi que la transformamos a minúscula
     *p_fin_char += 32;
   }

   if (*p_init_char == *p_fin_char){
     return(palindrome(argv, ++p_init_char, --p_fin_char));       //Volvemos a llamar a funcion para analizar con nuevos punteros
   }
   else
    return 0;
  }

