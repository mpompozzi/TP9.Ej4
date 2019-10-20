/***************************************************************************//**
  @file     +palindrome.h+
  @author   +The commune+
 ******************************************************************************/

#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

/*******************************************************************************
 * FUNCTION PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/

/**
 * @brief palindrome_checker eval�a si el input recibido al ejecutar el programa 
 * es palindromo o no. Toma todos los argumentos (luego del nombre del programa) 
 * como parte de una frase.
 * @param argv matriz de argumentos recubidos al ejecutar el programa
 * @param argc numero de argumentos ingresados al ejecutar el programa
 * @return devuelve si la frase que forman los argumentos ingresados es un pa-
 * lindromo o no.
 */

int palindrome_checker(char ** argv, int argc);

/*******************************************************************************
 ******************************************************************************/

#endif // _TEMPLATE_H_
