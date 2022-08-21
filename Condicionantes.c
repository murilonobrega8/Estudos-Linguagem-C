#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    //Definindo variáveis
    int     vrv1, vrv4;
    float   vrv2;
    char    vrv3;

    //Condicional Simples
    vrv1 = 5;
    vrv2 = 2.50;
    vrv3 = 'teste'

    //Escrevendo na Tela
    if(vrv1 == 5) {
        printf("\n A variável 'vrv1' é: %d", vrv1);
    }

    if(vrv2 == 2.50){
        printf("\n A variável 'vrv2' é: %d", vrv2);
    }

    if(vrv3 == 'teste'){
        printf("\n A variável 'vrv3' é: %d", vrv3);
    }

    //Número Par ou Ímpar 
    if(vrv1 % 2 == 1) {
        printf("\n A variável 'vrv1' é Ímpar.")
    }else{
        printf("\n A variável 'vrv1' é Par.")
    }

    //Condicional Composta
    vrv4 = 3;
    
    //Escrevendo na Tela
    if(vrv4 == 1) {
        printf("\n A opção da 'vrv4' é: 01");
    }else if(vrv4 == 2) {
        printf("\n A opção da 'vrv4' é: 02");
    }else{
        printf("\n A opção da 'vrv4' não é 01, nem 02");
    }        

    //Pausando o Programa Após Executar
    system("pause");    

}