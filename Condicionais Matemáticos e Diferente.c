
//Função Principal do Programa
void main() {

    //Definindo variáveis
    int     vrv1, vrv2, vrv3;
    char    vrv4;

    //Maior
    vrv1 = 5;
    vrv2 = 10;
    vrv3 = 15;
    vrv4 = 'teste';

    //Escrevendo na Tela
    if(vrv1 > 2) {
        printf("\n A variável 'vrv1 (%d)' é maior que 02.", vrv1);
    }

    //Maior ou igual
    if(vrv3 >= vrv2) {
        printf("\n A variável 'vrv3 (%d)' é maior ou igual a variável 'vrv2 (%d)'.", vrv3, vrv2);
    }

    //Menor
    if(vrv1 < 10) {
        printf("\n A variável 'vrv1 (%d)' é menor que 10.", vrv1);
    }

    //Menor ou igual
    if(vrv2 <= vrv3) {
        printf("\n A variável 'vrv2 (%d)' é menor ou igual a variável 'vrv3 (%d)'.", vrv2, vrv3);
    }

    //Diferente
    if(vrv3 != 10) {
        printf("\n A variável 'vrv3 (%d)' é diferente de 10.", vrv3);
    }

    if(vrv4 != 'teste') {
        printf("\n A variável 'vrv4 (%c)' é diferente da palavra 'testado'.", vrv4);
    }

    //Pausando o Programa Após Executar
    system("pause");    

}