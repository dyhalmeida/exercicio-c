#include <stdio.h>
//Média aritmética entre três números.

int main(void) {
float nota1, nota2, nota3, media;

  printf("Informe o primeiro número\n");
  scanf("%f", &nota1);
  printf("Informe o segundo número\n");
  scanf("%f", &nota2);
  printf("Informe o terceiro número\n");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

printf("A média desses números é %f", media );

  return 0;
}