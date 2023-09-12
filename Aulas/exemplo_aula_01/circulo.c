#include <stdio.h>

#define PI 3.14159


int main(){

float raio; 
float diametro;
float circuferencia;
float area;

printf("Digite o valor do raio do circulo em cm: \n");
scanf("%f", &raio);

diametro = 2*raio;
circuferencia = 2*PI*raio;
area = PI*raio*raio;

printf("\nO circulo de raio %.2fcm, possui %.2fcm de diametro, %.2fcm de circuferencia e %.2fcm^2 de area.", raio, diametro, circuferencia, area);

return 0;

}

