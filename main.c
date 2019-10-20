/*******************************************************************************
  @file     +main.c+                  
  @author   +The Commune+
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"
/*
 * 
 */
int main(int argc, char** argv) {
    int is_palindrome = palindrome_checker(argv,argc);
    if (is_palindrome==0){
        printf("La frase que ingreso no es un palindromo. \n");
    }
    else{
        printf("La frase que ingreso es un palindromo. \n");
    }
    return (EXIT_SUCCESS);
}

