#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor1, valor2, resultado;
    char sinal;

    printf("Qual o primeiro valor?\n");
    scanf("%f", &valor1);
    

    printf("Qual o segundo valor?\n");
    scanf("%f", &valor2);

    while(1) { 
    printf("Qual a opera��o desejada? (+, -, *, :)\n");
    scanf(" %c", &sinal);

    if (sinal == '+') {
        resultado = valor1 + valor2;
      break;
    } 
    else if (sinal == '-') {
        resultado = valor1 - valor2;
      break;
    }
    else if (sinal == '*') {
        resultado = valor1*valor2;
      break;
    }
    else if (sinal == ':') {
        resultado = valor1/valor2;
      if (valor2 == 0) {
         printf("N�o � poss�vel dividir por zero.");
         printf("Programa finalizado.\n");
         return 0;
      }
      break;
    }
    else
      printf("Caractere inv�lido. ");

    }

  printf("O resultado �: %g.\n", resultado);
  printf("Programa finalizado.\n");

  return 0;
}
