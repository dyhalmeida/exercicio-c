#include <stdio.h>
//Média aritmética entre três números.

int main(void) {
float number1, number2, number3, media;

  printf("Informe o primeiro número\n");
  scanf("%f", &number1);
  printf("Informe o segundo número\n");
  scanf("%f", &number2);
  printf("Informe o terceiro número\n");
  scanf("%f", &number3);

  media = ((number1 + number2 + number3) / 3);

printf("A média desses números é %f", media );

  return 0;
}