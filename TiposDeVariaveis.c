#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    //Definindo uma variável
    int     vrv1;
    float   vrv2;
    char    vrv3;
    bool    vrv4;

    //Passando Valores
    vrv1 = 5;
    vrv2 = 2.3;
    vrv3 = 'teste';
    vrv4 = true; //True = 1 e False = 0

    //Escrevendo na Tela
    printf("\nO valor da variável 'vrv1' é: %d", vrv1);
    printf("\nO valor da variável 'vrv2' é: %.2f", vrv2);
    printf("\nO valor da variável 'vrv3' é: %c\n", vrv3);
    printf("\nO valor da variável 'vrv4' é: %d\n", vrv4);  

    //Lendo um valor
    scanf("%d", &vrv1);
    scanf("%f", &vrv2);
    scanf(" %c", &vrv3);
    scanf("%d", &vrv4);

    //Escrevendo na Tela
    printf("\nO valor informado da variável 'vrv1' é: %d", vrv1);
    printf("\nO valor informado da variável 'vrv2' é: %.2f", vrv2);
    printf("\nO valor informado da variável 'vrv3' é: %c\n", vrv3);
    printf("\nO valor informado da variável 'vrv4' é: %d\n", vrv4);

    //Pausando
    system("pause");    

}