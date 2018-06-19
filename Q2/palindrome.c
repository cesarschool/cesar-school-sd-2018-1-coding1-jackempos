
#include <stdio.h>
#include <stdbool.h>

/**
* Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
*
* Função: bool isPalindrome (char[] sentence, int length)
* Input:
* - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
* - length: tamanho do array - número de caracteres
* Output: true se a sentença é um palídromo, falso caso negativo.
*/

bool isPalindrome (char sentence[], int length) {
  printf("\nisPalindrome::START: %s, %d\n", sentence, length);

  // TODO: YOUR CODE HERE!
  int ind = 0; //ind será usado no while
  int difere = 0;
 
  while(index < length){
      if (sentence[ind] != sentence[length - 1 - ind]){ //checa se as letras sao diferentes
          difere = 1; // se encontrar uma letra que seja diferente
      }// Fim do if
      ind = ind + 1;
  }// Fim do while
 
  if (difere == 1){ //se tiver encontrado uma letra diferente
      printf("false"); // por não ser palidromo
      printf("\nisPalindrome::END\n");
      return false;
  }//fim do if
  printf("true");
  printf("\nisPalindrome::END\n");
  return true;
 
}// fim do palidromo

int main()
{
  printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
 
  // Casos de palidromo
  isPalindrome("ovo", 3);
  isPalindrome("arara", 5);

  // Nao são palidromos
  isPalindrome("cesar", 5);
  isPalindrome("school", 6);

  return 0;
}
