void main() {

    //Definindo uma variável
    int     vrv1;
    float   vrv2;
    char    vrv3;

    //Passando Valores
    vrv1 = 5;
    vrv2 = 2.3;
    vrv3 = 'teste';

    //Escrevendo na Tela
    printf("\nO valor da variável 'vrv1' é: %d", vrv1);
    printf("\nO valor da variável 'vrv2' é: %.2f", vrv2);
    printf("\nO valor da variável 'vrv3' é: %c\n", vrv3);

    //Lendo um valor
    scanf("%d", &vrv1);
    scanf("%f", &vrv2);
    scanf(" %c", &vrv3);

    //Escrevendo na Tela
    printf("\nO valor informado da variável 'vrv1' é: %d", vrv1);
    printf("\nO valor informado da variável 'vrv2' é: %.2f", vrv2);
    printf("\nO valor informado da variável 'vrv3' é: %c\n", vrv3);

    //Pausando
    system("pause");    

}