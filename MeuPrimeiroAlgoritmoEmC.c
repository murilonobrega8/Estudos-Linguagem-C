//Algoritmo "MeuPrimeiroAlgoritmo em Linguagem C"

//Disciplina:               Linguagem e Lógica de Programação
//Professor:                Gustavo Guanabara
//Descrição:                Primeiro "Olá, Mundo!"
//Autor(a):                 Murilo Oliveira
//Data de início:           19/07/2022
//Data de conclusão:        29/07/2022
//Adaptação p/ Linguagem C: 21/08/2022 a 22/08/2022  

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    //Definindo Variáveis
    char    msg, msg2, Nome, N8, N13, resppular, rnota, materia, nomepeso, maispesado, letra, fim;

    int     A, N2, N3, N4, N5, N6, N7, N10, N11, N12, N14, N17, N18, N20, ano_atual, ano_nasc, idade, S, parcelas, passeio, meses, contador, qconversao, inicial, final, tabuada, rtabuada, totneg, totpos, fatorial, qnotas, qdiv, N26, iniciofib, casafib, fib1, fib2, qpeso, anoleve, anopesado, x, y, totpar, qalunos, pmega, auxmega, linha, coluna, sdp, p2l, mcol3;

    float   M, B, C1, D, F, G, H, I, J, Angulo, L1, L2, L3, brreal, reais, dolar, dolares, graufar, graucels, compras, imposto, dinheiro, juros, emprestimo, massa, altura, IMC, valor, nvalor, N22, N23, maior, vconversao, somadia, nota, mnota, malta, mbaixa, mediaesc, snota, peso, maispeso, RES;

    bool    EQ, ES, TRI;

    //Definindo Vetores
    int     vet: vetor[1..6];
    char    nomealuno: vetor[1..4];
    float   notateor: vetor[1..4];
    float   notaprat: vetor[1..4];
    float   median: vetor[1..4];
    float   somamedia, mediatot;
    int     mat: vetor[1..4, 1..4];
    int     lin, col, op;
    char    v: vetor[1..3, 1..3];
    int     L, C, Cont, Po;
    char    Simb;
    bool    R;

    //Definindo Procedimentos
    Procedimento PularAula()
        int main(void){
            Escreval("Quer continuar esta aula?")
            Repita
                Escreva("Por favor, digite [S] para SIM ou [N] para N�O: ")
                Leia(resppular)
                Se (resppular <> "s") e (resppular <> "n") entao
                    Escreval("Resposta inválida!")
                    Escreval
                    Escreval("Quer continuar esta aula?")
                FimSe
            Ate (resppular = "s") ou (resppular = "n")
            Escreval
            Se (resppular = "s") entao
                Escreval("Vamos l�!")
            Senao
                Escreval("Ok, vamos encerrar o programa...")
                EscrevaL()
                EscrevaL("At� mais!!")
                FimAlgoritmo
            FimSe

        }

Procedimento Topo()
Inicio
   Escreval("---------------------------------------")
   Escreval("D E T E C T O R   D E   +   P E S A D O")
   Escreval
   Escreval("     Maior Peso at� agora:",maispeso," kg. ")
   Escreval("---------------------------------------")
   Escreval
FimProcedimento

Procedimento ParOUImpar(v: inteiro)
Inicio
   Se (v%2=0) entao
      Escreval("O maior peso,",v," � um n�mero PAR!")
   Senao
      Escreval("O maior peso,",v," � n�mero �MPAR!")
   FimSe
FimProcedimento

Procedimento Soma(var A, B: Inteiro)
Inicio
   A <- A + 100
   B <- B + 10
   Escreval("O novo valor de A �:",A,".")
   Escreval
   Escreval("O novo valor de B �:",B,".")
   Escreval
   Escreval("O soma de A+B �:",A+B,".")
FimProcedimento

Procedimento MostraMatriz()
inicio
   Para lin <- 1 ate 4 faca
      Para col <- 1 ate 4 faca
         Escreva(mat[lin,col]:4)
      FimPara
      EscrevaL()
   FimPara
FimProcedimento

Procedimento DiagonalPrincipal()
var t: inteiro
inicio
   Para lin <- 1 ate 4 faca
      EscrevaL(mat[lin,lin]:4)
      Para t <- 1 ate lin faca
         Escreva("    ")
      FimPara
   FimPara
FimProcedimento

Procedimento TrianguloSuperior()
var t: Inteiro
inicio
   Para lin <- 1 ate 3 faca
      Escreva("    ")
      Para c <- lin+1 ate 4 faca
         Escreva(mat[lin,col]:4)
      FimPara
      EscrevaL()
      Para t <- 1 ate lin faca
         Escreva("    ")
      FimPara
   FimPara
   EscrevaL()
FimProcedimento

Procedimento TrianguloInferior()
inicio
   Para lin <- 2 ate 4 faca
      EscrevaL()
      Para c <- 1 ate lin-1 faca
         Escreva(mat[lin,col]:4)
      FimPara
   FimPara
   EscrevaL()
FimProcedimento

Procedimento mostraVelha()
Inicio
   EscrevaL("+---+---+---+")
   Para L <- 1 ate 3 faca
      Para C <- 1 ate 3 faca
         Escreva("|  ", v[L,C]:1)
      FimPara
      Escreva("|")
      EscrevaL()
      EscrevaL("+---+---+---+")
   FimPara
FimProcedimento

Procedimento mudaJogador()
inicio
   Se (Simb = "X") entao
      Simb <- "O"
   Senao
      Simb <- "X"
   FimSe
FimProcedimento

Funcao Jogar(S: Caractere; P: Inteiro): Logico
Var
   mudou: logico
inicio
   mudou <- falso
   Para L <- 1 ate 3 faca
      Para C <- 1 ate 3 faca
         Se(v[L,C] = NumpCarac(P)) entao
            v[L,C] <- S
            mudou <- verdadeiro
         FimSe
      FimPara
   FimPara
   Retorne mudou
FimFuncao

Funcao TerminouVelha(): Logico
Var
   terminou: Logico
   ocorr: Inteiro
inicio
   terminou <- falso
   // Jogos em linha
   Para L <- 1 ate 3 faca
      Se (v[L,1] = v[L,2]) e (v[L,2] = v[L,3]) entao
         terminou <- verdadeiro
      FimSe
   FimPara
   // Jogos em coluna
   Para C <- 1 ate 3 faca
      Se (v[1,C] = v[2,C]) e (v[2,C] = v[3,C]) entao
         terminou <- verdadeiro
      FimSe
   FimPara
   // Jogos em diagonal
   Se (v[1,1] = v[2,2]) e (v[2,2] = v[3,3]) entao
      terminou <- verdadeiro
   FimSe
   Se (v[1,3] = v[2,2]) e (v[2,2] = v[3,1]) entao
      terminou <- verdadeiro
   FimSe
   // Jogos em VELHA
   ocorr <- 0
   Para L <- 1 ate 3 faca
      Para C <- 1 ate 3 faca
         Se (v[L,C] <> "X") e (v[L,C] <> "O") entao
            ocorr <- ocorr + 1
         FimSe
      FimPara
   FimPara
   Se (ocorr = 0) entao
      terminou <- verdadeiro
   FimSe
   // Retorna se o jogo acabou ou nao
   Retorne terminou
FimFuncao

Funcao SomaTotal(A, B: Inteiro) : Inteiro
Inicio
   S <- A+B
   Retorne S
FimFuncao

Inicio
   EscrevaL()
   msg <- "Ol�, Mundo!"
   msg2 <- "Me livrei da Maldi��o!"
   Escreval("*--***--*")
   Escreval(" AULA 01 - INTRODU��O A ALGORITMOS")
   Escreval("*--***--*")
   EscrevaL()
   EscrevaL()
   PularAula()
   EscrevaL()
   Escreval ("Mensagem: ", msg)
   EscrevaL()
   Escreval (msg2)
   EscrevaL()
   EscrevaL()
   Escreval("*--***--*")
   Escreval(" AULA 02 - PRIMEIRO ALGORITMO")
   Escreval("*--***--*")
   EscrevaL()
   EscrevaL()
   PularAula()
   EscrevaL()
   Escreva ("Digite seu nome: ")
   Leia (Nome)
   EscrevaL()
   Escreval ("Muito prazer, ", Nome, "!")
   EscrevaL()
   EscrevaL()
   Escreval("*--***--*")
   Escreval(" AULA 03 - COMANDOS DE ENTRADA E OPERADORES")
   Escreval("*--***--*")
   EscrevaL()
   EscrevaL()
   PularAula()
   EscrevaL()
   Escreva("Informe um n�mero: ")
   Leia(N2)
   Escreva("Informe outro n�mero: ")
   Leia(N3)
   S <- N2+N3
   Escreval
   Escreval("A soma entre",N2," e",N3," � igual a:",S,"!")
   Escreval
   Escreva("Informe um n�mero: ")
   Leia(N2)
   Escreva("Informe outro n�mero: ")
   Leia(N3)
   M <- (N2+N3)/2
   Escreval
   Escreval("A m�dia entre",N2," e",N3," � igual a:",M,"!")
   Escreval
   Escreva("Informe um valor negativo: ")
   Leia(N4)
   A <- Abs(N4)
   Escreval
   Escreval("O valor absoluto de",N4," � igual a: ",A)
   Escreval
   Escreva("Vamos l�, agora a exponencial. Informe um valor: ")
   Leia(N5)
   Escreval
   Escreva("Agora, informe um valor para exponencial: ")
   Leia(N6)
   B <- Exp(N5, N6)
   Escreval
   Escreval("O resultado � igual a: ",B)
   Escreval
   Escreva("Vamos calcular a Raiz Quadrada. Me diga um valor: ")
   Leia(N7)
   C1 <- RaizQ(N7)
   Escreval
   Escreval("O resultado � igual a: ",C1)
   Escreval
   Escreval("Vamos saber qual � o Valor Inteiro desta Raiz Quadrada?")
   Repita
      Escreva("Por favor, digite [S] para SIM ou [N] para N�O: ")
      Leia(N8)
      Se (N8 <> "s") e (N8 <> "n") entao
         Escreval("Resposta inv�lida!")
         Escreval
         Escreval("Quer saber o Valor Inteiro desta Raiz Quadrada?")
      FimSe
   Ate (N8 = "s") ou (N8 = "n")
   Escreval
   Se (N8 = "s") entao
      Escreval("Vamos l�!")
   Senao
      Escreval("Ok, vamos seguir com a aula...")
   FimSe
   D <- Int(C)
   Escreval
   Escreval("O resultado � igual a: ",D)
   Escreval
   Escreva("Agora, informe um valor em Graus, ou seja, um Angulo: ")
   Leia(Angulo)
   F <- GraupRad(Angulo)
   Escreval
   Escreva("O resultado da convers�o de Graus para Radianos � igual a:",F)
   Escreval
   G <- Sen(GraupRad(Angulo))
   Escreval
   Escreva("O Seno de",Angulo," Graus � igual a:",G)
   Escreval
   H <- Cos(GraupRad(Angulo))
   Escreval
   Escreva("O Coseno de",Angulo," Graus � igual a:",H)
   Escreval
   I <- Tan(GraupRad(Angulo))
   Escreval
   Escreva("A Tangente de",Angulo," Graus � igual a:",I)
   Escreval
   J <- Pi(GraupRad(Angulo))
   Escreval
   Escreval("O Valor Pi � igual a:",J)
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 04 - OPERADORES RELACIONAIS E L�GICOS")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreva("Informe um n�mero entre 01 a 10, para ser A: ")
   Leia(N10)
   Escreval
   Escreva("Informe outro n�mero, para ser B: ")
   Leia(N11)
   Escreval
   Escreva("Agora, um �ltimo n�mero, para C: ")
   Leia(N12)
   Escreval
   Escreval("Se eu disser que A � maior que B, a resposta ser�:",(N10>N11))
   Escreval
   Escreval("Se eu disser que A � menor que B, a resposta ser�:",(N10<N11))
   Escreval
   Escreval("Se eu disser que A � maior ou igual que B, a resposta ser�:",(N10>=N11))
   Escreval
   Escreval("Se eu disser que A � menor ou igual que B, a resposta ser�:",(N10<=N11))
   Escreval
   Escreval("Se eu disser que B � igual a C, a resposta ser�:",(N11=N12))
   Escreval
   Escreval("Se eu disser que B � diferente a C, a resposta ser�:",(N11<>N12))
   Escreval
   Escreval("Se eu disser que B � maior ou igual a 05, a resposta ser�:",(N11>=5))
   Escreval
   Escreval("Se eu disser que B � menor ou igual a 05, a resposta ser�:",(N11<=5))
   Escreval
   Escreval("Se eu disser que C � igual a 05, a resposta ser�:",(N12=5))
   Escreval
   Escreval("Se eu disser que C � igual a A+B, a resposta ser�:",(N12=N10+N11))
   Escreval
   Escreval("Se eu disser que C � maior ou igual a B elevado a A, a resposta ser�:",(N12>=N11^N10))
   Escreval
   Escreval("Se eu disser que C � menor ou igual a B elevado a A, a resposta ser�:",(N12<=N11^N10))
   Escreval
   Escreval("Se eu disser que B � menor ou igual ao Resto da divis�o de C por 02, a resposta ser�:",(N11<=N12%2))
   Escreval
   Escreval("Se eu disser que 01 � igual ao Resto da divis�o de C por 02, a resposta ser�:",(1=N12%2))
   Escreval
   Escreval("Se eu disser que A � igual a B OU que C � maior que A, a resposta ser�:",((N10=N11) ou (N12>N10)))
   Escreval
   Escreval("Se eu disser que A n�o � igual a B OU que C n�o � maior que A, a resposta ser�:",(n�o((N10=N11) ou (N12>N10))))
   Escreval
   Escreval("Se eu disser que B � maior ou igual a C, E que A � menor que B, a resposta ser�:",((N11>=N12) e (N10<N11)))
   Escreval
   Escreval("Se eu disser que C � maior ou igual a A+B, E que A � menor que B, a resposta ser�:",((N12>=N10+N11) e (N10<N11)))
   Escreval
   Escreval("Agora podemos tratar sobre Tri�ngulos. Quer continuar?")
   Repita
      Escreva("Por favor, digite [S] para SIM ou [N] para N�O: ")
      Leia(N13)
      Se (N13 <> "s") e (N13 <> "n") entao
         Escreval("Resposta inv�lida!")
         Escreval
         Escreval("Quer seguir para os c�lculos de Tri�ngulos?")
      FimSe
   Ate (N13 = "s") ou (N13 = "n")
   Escreval
   Se (N13 = "s") entao
      Escreval("Vamos l�!")
   Senao
      Escreval("Ok, vamos pular os c�lculos de Tri�ngulos.")
   FimSe
   Escreval
   Escreva("Informe um n�mero entre 01 a 10, para ser o Primeiro Lado (L1): ")
   Leia(L1)
   Escreval
   Escreva("Informe outro n�mero, para ser o Segundo Lado (L2): ")
   Leia(L2)
   Escreval
   Escreva("Agora, um �ltimo n�mero, para ser o Terceiro Lado (L3): ")
   Leia(L3)
   TRI <- (L1<L2+L3) e (L2<L1+L3) e (L3<L1+L2)
   EQ <- (L1=L2) e (L2=L3)
   ES <- (L1<>L2) e (L2<>L3) e (L1<>L3)
   Escreval
   Escreval("Pode formar um TRI�NGULO?:",TRI)
   Escreval
   Escreval("O Tri�ngulo formado � EQUIL�TERO?:",EQ)
   Escreval
   Escreval("O Tri�ngulo formado � ESCALENO?:",ES)
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 05 - INTRODU��O AO SCRATCH")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreval("Nesta aula aprendemos a usar o Scratch, ent�o a aula foi fora do VISUALG.")
   Escreval
   Escreva("Aperte qualquer tecla para continuar...")
   Leia(N14)
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 06 - EXERC�CIOS DE ALGORITMO RESOLVIDOS")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreva("Me diga, por favor, em que ANO n�s estamos?: ")
   Leia(ano_atual)
   Escreval
   Escreva("Agora me diga em que ANO voc� nasceu?: ")
   Leia(ano_nasc)
   idade <- ano_atual - ano_nasc
   Escreval
   Escreval("Consegui calcular sua idade, ",Nome,", ent�o voc� deve ter",idade," anos, se j� apagou velinhas este ano. Se ainda n�o comemorou, sua idade atual �",(idade - 1)," anos.")
   Escreval
   Escreva("Para comemorar seu anivers�rio, podemos planejar uma viagem para os EUA. Quantos Reais voc� tem para gastar?: R$ ")
   Leia(brreal)
   Escreval
   Escreva("Qual � a cota��o do D�lar na data de hoje?: ")
   Leia(dolar)
   dolares <- brreal/dolar
   Escreval
   Escreval("Com a cota��o atual, voc� ter� U$",dolares:8:2," D�lares para usar em sua viagem!")
   Escreval
   Escreva("Mas lembre-se da roupa adequada! Nos EUA a temperatura � indicada em �F, ent�o me informe a temperatura em Fahrenheit que seu contato de l� te passou: ")
   Leia(graufar)
   graucels <- (graufar-32)/1.8
   Escreval
   Escreval("A temperatura em Celsius durante sua viagem ser� de ",graucels:5:2,"�C!")
   Escreval
   Escreva("Outra situa��o imporante ser� a taxa��o de suas compras. Me informe sua previs�o de gastos em D�lar nestes itens, que s�o taxados em 60%: U$ ")
   Leia(compras)
   reais <- compras*dolar
   imposto <- (reais*60)/100
   Escreval
   Escreval("Voc� precisar reservar por volta de R$",imposto:8:2," (ou U$",(imposto/dolar):7:2,") para custeio de Impostos de Importa��o.")
   Escreval
   Escreva("Se voc� precisar fazer um empr�stimo, posso calcular os custos. Me informe um valor: R$ ")
   Leia(dinheiro)
   Escreval
   Escreva("Qual � a melhor taxa de juros que voc� encontrou, para parcelamento?: ")
   Leia(juros)
   emprestimo <- ((dinheiro*juros)/100)+dinheiro)
   Escreval
   Escreva("Quantas parcelas mensais voc� deseja?: ")
   Leia(parcelas)
   Escreval
   Escreval("Com essa taxa, o custo total ser� de R$",emprestimo:8:2,", em",parcelas," vezes de R$",emprestimo/parcelas:7:2," mensais.")
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 07 - ESTRUTURAS CONDICIONAIS 01")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreva("Para viagens internacionais, alguns requisitos de idade s�o necess�rios. Aperta qualquer tecla para continuar...")
   Leia(N17)
   Escreval
   Se (idade>=21) entao
      Escreval("Como voc� j� possui maioridade, pode viajar sozinho(a)!")
   Senao
      Escreval("Como voc� ainda n�o atingiu sua maioridade, precisa de autoriza��o de seus pais ou respons�veis para viajar sozinho(a)!")
   FimSe
   Escreval
   Escreva("Clique qualquer tecla para uma informa��o irrelevante... ;P")
   Leia(N18)
   Escreval
   Escreva("Viagens longas significam comer muito! Vamos ver como est� seu IMC? Me informe seu peso atual (kg): ")
   Leia(massa)
   Escreval
   Escreva("Agora me informe sua altura (cm): ")
   Leia(altura)
   IMC <- Massa/((altura/100)^2)
   Escreval
   Escreval("Seu IMC est� em ",IMC:5:2,"!")
   Escreval
   Se (IMC>=18.5) e (IMC<25) entao
      Escreval("Parab�ns! Voc� est� no seu peso ideal, e pode curtir sem preocupa��es!")
   Senao
      Escreval("Voc� est� fora de seu peso ideal, o que acha de uma dieta planejada at� a viagem?")
   FimSe
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 08 - ESTRUTURAS CONDICIONAIS 02")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreva("Sabemos que peso ideal n�o � apenas sobrepeso, vamos saber ent�o em qual situa��o voc� est�. Aperte qualquer tecla...")
   Leia(N20)
   Escreval
   Se (IMC<17) entao
      Escreval("Seu peso est� muito abaixo do ideal. Procure aux�lio m�dico e nutricional!")
   Senao
      Se (IMC>=17) e (IMC<18.5) entao
         Escreval("Seu peso est� abaixo do ideal. Cuidados com as defici�ncias nutricionais!")
      Senao
         Se (IMC>=18.5) e (IMC<25) entao
            Escreval("Parab�ns, voc� est� no peso ideal, continue assim!")
         Senao
            Se (IMC>=25) e (IMC<30) entao
               Escreval("Voc� est� acima do peso ideal, planeje melhor sua alimenta��o!")
            Senao
               Se (IMC>=30) e (IMC<35) entao
                  Escreval("Voc� est� muito acima do peso ideal, sua sa�de precisa de cuidados!")
               Senao
                  Se (IMC>=35) e (IMC<40) entao
                     Escreval("Voc� est� em Obesidade, procure aux�lio nutricional!")
                  Senao
                     Escreval("Voc� est� em Obesidade M�rbida e precisa de aten��o multidisciplinar!")
                  FimSe
               FimSe
            FimSe
         FimSe
      FimSe
   FimSe
   Escreval
   Escreval("Agora precisamos escolher os Pacotes de Passeios da Viagem.")
   Escreval
   Escreval("Escolha uma das op��es abaixo:")
   Escreval("1. Pacote Bronze - U$ 700.00")
   Escreval("2. Pacote Prata - U$ 1.100.00")
   Escreval("3. Pacote Ouro - U$ 1.650.00")
   Escreval("4. Passeio Personalizado - A Combinar")
   Escreval("5. Sem Passeios Planejados - Apenas Gorjetas")
   Escreval
   Escreva("Digite agora a sua escolha entre 1 a 5: ")
   Leia(passeio)
   Enquanto (passeio > 5) ou (passeio = 0) faca
      Escreva("Por favor, escolha um n�mero entre 1, 2, 3, 4 ou 5, apenas: ")
      Leia(passeio)
   FimEnquanto
   Escolha passeio
   Caso 1
      valor <- 700
   Caso 2
      valor <- 1100
   Caso 3
      valor <- 1650
   Caso 4
      Escreva("Qual valor voc� define como teto?: U$ ")
      Leia(valor)
   Caso 5
      valor <- 300
   FimEscolha
   Escreval
   Escreval("Parab�ns pela escolha! Voc� precisa agora reservar U$ ",valor:7:2," D�lares para seus passeios!")
   Escreval
   Escreval("Sua ag�ncia de turismo pediu aten��o � infla��o no per�odo. Para viagens futuras, precisamos considerar esses aumentos nas reservas.")
   Escreval
   Escreva("Dentro de quantos meses pretende iniciar sua viagem?: ")
   Leia(meses)
   Escolha meses
   Caso 0, 1, 2, 3
      nvalor <- valor+(valor*3/100)
   Caso 4, 5, 6
      nvalor <- valor+(valor*4.5/100)
   Caso 7, 8, 9
      nvalor <- valor+(valor*6/100)
   Caso 10, 11, 12
      nvalor <- valor+(valor*8.5/100)
   OutroCaso
      nvalor <- valor+(valor*10/100)
   FimEscolha
   Escreval
   Escreval("Para o per�odo escolhido, voc� precisa reservar",(nvalor-valor)/valor*100,"% a mais, resultando em U$ ",nvalor:7:2," D�lares para n�o correr riscos.")
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 09 - ESTRUTURAS DE REPETI��O 01")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreval("Prepare-se para os novos aprendizados.. Uma contagem regressiva para os novos passos, conte comigo...")
   contador <- 10
   Enquanto (contador >= 0) faca
      Escreval(contador)
      contador <- contador - 1
   FimEnquanto
   Escreval("Hey, Ho! Let's Go!")
   Escreval
   Escreval("Agora precisamos calcular o seu gasto di�rio em refei��es e pequenas compras para que n�o chegue ao fim da viagem sem dinheiro.")
   contador <- 1
   somadia <- 0
   Escreval
   Enquanto (contador <= 5) faca
      Escreva("Digite quanto pretende gastar no",contador,"� dia: U$ ")
      Leia(N22)
      Se (N22 > maior) entao
         maior <- N22
      FimSe
      somadia <- somadia + N22
      contador <- contador + 1
   FimEnquanto
   Escreval
   Escreval("A soma total das di�rias pretendidas � de U$",somadia:6:2," D�lares, que precisam ser reservados e controlados!")
   Escreval
   Escreval("Se voc� acredita que precisa diminuir o planejamento, reveja o dia que voc� pretende mais gastar, que representa U$",maior:6:2," do total de U$",somadia:6:2,".")
   Escreval
   Escreval("Pesquise pre�os sempre! Voc� pode inclusive pesquisar agora os pre�os em Real aqui no Brasil, que eu fa�o a convers�o para D�lares.")
   Escreval
   contador <- 1
   somadia <- 0
   Escreva("Quantos produtos voc� pesquisou e quer converter?: ")
   Leia(qconversao)
   Escreval
   Enquanto (contador <= qconversao) faca
      Escreva("Qual o pre�o no Brasil do",contador,"� produto?: R$")
      Leia(N23)
      vconversao <- N23/dolar
      Escreval("O",contador,"� produto em d�lar, custa U$",vconversao:6:2,".")
      contador <- contador + 1
      somadia <- somadia + N23
      Escreval
   FimEnquanto
   Escreval("A cota��o dos",contador-1," produtos somam U$",somadia/dolar:6:2," (ou R$",somadia:6:2,"). Somando tamb�m os impostos de 60%, voc� n�o deve comprar se custarem mais de U$",((somadia/dolar)-((somadia/dolar)*40/100)):6:2," juntos (R$ ",((((somadia/dolar)-((somadia/dolar)*40/100))*dolar)*60/100)+(((somadia/dolar)-((somadia/dolar)*40/100))*dolar):6:2," com impostos), pois seria melhor comprar no Brasil mesmo.")
   Escreval
   Escreval("Eu fa�o contagem inteligente tamb�m... Regressiva ou Progressiva, � s� me infomar onde come�o e onde paro!")
   Escreval
   Escreva("Digite o n�mero de in�cio: ")
   Leia(inicial)
   Escreva("Agora digite o n�mero final: ")
   Leia(final)
   contador <- inicial
   Escreval
   Se (inicial < final) entao
      Enquanto (contador <= final) faca
         Escreval(contador,"...")
         contador <- contador + 1
      FimEnquanto
   Senao
      Enquanto (contador >= final) faca
         Escreval(contador,"...")
         contador <- contador - 1
      FimEnquanto
   FimSe
   Escreval
   Escreval("Hey, Ho! Let's Go!")
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 10 - ESTRUTURAS DE REPETI��O 02")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   contador <- 0
   Escreva("Me informe um n�mero, que te respondo a tabuada dele: ")
   Leia(tabuada)
   Escreval
   Repita
      rtabuada <- tabuada * contador
      Escreval(tabuada," x",contador," =",rtabuada)
      contador <- contador + 1
   Ate (contador > 10)
   Escreval
   Escreval("Aproveitando que o assunto � escolar, informe todas as notas de uma mat�ria do Boletim Escolar de um de seus filhos (inclusive as negativas).")
   Escreval
   Escreva("Qual � a m�dia na escola do aluno?: ")
   Leia(mediaesc)
   Escreval
   Escreva("Qual � a mat�ria a ser registrada?: ")
   Leia(materia)
   contador <- 0
   snota <- 0
   totneg <- 0
   totpos <- 0
   malta <- 0
   mbaixa <- 10
   Repita
      Escreval
      Escreva("Digite a",contador + 1,"� Nota em ",materia,": ")
      Leia(nota)
      contador <- contador + 1
      snota <- snota + nota
      Se (nota >= mediaesc) entao
         totpos <- totpos + 1
      Senao
         totneg <- totneg + 1
      FimSe
      Se (nota < mbaixa) entao
         mbaixa <- nota
      FimSe
      Se (nota > malta) entao
         malta <- nota
      FimSe
      Escreval
      Escreva("Quer inserir mais uma Nota [S]/[N]?: ")
      Leia(rnota)
      Se (rnota <> "s") e (rnota <> "n") entao
         Repita
            Escreval("Resposta inv�lida!")
            Escreval
            Escreva("Quer inserir mais uma Nota [S]/[N]?: ")
            Leia(rnota)
         Ate (rnota = "s") ou (rnota = "n")
      FimSe
   Ate (rnota = "n")
   mnota <- snota / contador
   Escreval
   Escreval("A m�dia entre as",contador," Notas em ",materia," (",totpos," positivas e",totneg," negativas ) � de",mnota:5:2,", sendo a mais baixa",mbaixa:5:2," e a mais alta ",malta:5:2,".")
   Escreval
   Escreval("Vamos ver como fica o Fatorial de ",contador,"?")
   Escreval
   qnotas <- contador
   fatorial <- 1
   Repita
      Se (qnotas = 1) entao
         Escreva(qnotas,".")
      Senao
         Escreva(qnotas, " x ")
      FimSe
      fatorial <- fatorial * qnotas
      qnotas <- qnotas -1
   Ate (qnotas < 1)
   Escreval
   Escreval
   Escreval("O valor do Fatorial de",contador," � igual a",fatorial,".")
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 11 - ESTRUTURAS DE REPETI��O 03")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   qdiv <- 0
   Escreva("Digite um n�mero, que eu te digo se ele � um n�mero primo: ")
   Leia(N26)
   Escreval
   Para contador <- 1 ate N26 passo 1 faca
      Se (contador = N26 - 1) entao
         Escreva(contador," e")
      FimSe
      Se (contador = N26) entao
         Escreva(contador,".")
      FimSe
      Se (contador < N26) e (contador <> (N26 - 1)) entao
         Escreva(contador,",")
      FimSe
      Se (N26 % contador = 0) entao
         qdiv <- qdiv + 1
      FimSe
      contador <- contador + 1
   FimPara
   Escreval
   Escreval
   Se (qdiv > 2) entao
      Escreval("Ao todo existem",qdiv," valores divis�veis. Logo, o n�mero",N26," N�O � um n�mero PRIMO.")
   Senao
      Escreval("Ao todo existem",qdiv," valores divis�veis. Logo, o n�mero",N26," � SIM um n�mero PRIMO!")
   FimSe
   Escreval
   Escreva("Vamos uma sequ�ncia combinada? Informe de qual n�mero voc� quer iniciar: ")
   Leia(iniciofib)
   Escreval
   Escreva("At� qual casa voc� quer ver?: ")
   Leia(casafib)
   Escreval
   fib1 <- iniciofib
   fib2 <- casafib
   Para fib1 := iniciofib ate casafib faca
      Para fib2 := iniciofib ate casafib faca
         Escreval (fib1, fib2)
      FimPara
   FimPara
   Escreval
   Escreva("Me ajude a exibir a sequ�ncia Fibonacci. At� qual termo devo exibir?: ")
   Leia(casafib)
   fib1 <- 0
   fib2 <- 1
   contador <- 1
   Escreval
   Escreva(fib1, fib2)
   contador <- contador + 2
   Para contador := contador ate casafib faca
      Escreva(fib1 + fib2)
      contador <- contador + 1
      fib2 <- fib2 + fib1
      fib1 <- fib2 - fib1
   FimPara
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 12 - PROCEDIMENTOS, ROTINAS E FUN��ES")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreva("Controle de Peso da Fam�lia. Quantas pessoas ser�o pesadas?: ")
   Leia(qpeso)
   Escreval
   Escreval
   Topo()
   Para contador <- 1 ate qpeso faca
      Escreval
      Escreva("Digite o nome da ",contador,"� pessoa da fam�lia: ")
      Leia(nomepeso)
      Escreval
      Escreva("Digite o peso de ",nomepeso,": ")
      Leia(peso)
      Escreval
      Escreval
      Se (peso > maispeso) entao
         maispeso <- peso
         maispesado <- nomepeso
      FimSe
      Topo()
   FimPara
   Escreval
   Escreval("A pessoa da fam�lia mais pesada � ",maispesado,", com",maispeso,"kg!")
   Escreval
   ParOUImpar(maispeso)
   Escreval
   Escreva("Digite a idade da pessoa mais pesada: ")
   Leia(anopesado)
   Escreval
   Escreval("A esta idade eu vou adicionar 100")
   Escreval
   Escreva("Agora, digite a idade da pessoa mais leve: ")
   Leia(anoleve)
   Escreval
   Escreval("A esta idade eu vou adicionar 10")
   Escreval
   x <- anopesado
   y <- anoleve
   Soma(x,y)
   Escreval
   Escreval("A idade da pessoa mais pesada, somada � 100 �:",x,".")
   Escreval
   Escreval("A idade da pessoa mais leve, somada � 10 �:",y,".")
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 13 - FUN��ES")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   RES <- SomaTotal(x,y)
   Escreval("A soma desses dois valores � igual a: ",RES,", e a m�dia deles �",RES / 2,".")
   Escreval
   Escreval("Agora, vou realizar uma An�lise do nome da pessoa mais pesada, que � ",maispesado,".")
   Escreval
   Escreval("O total de letras de ",maispesado," �: ",compr(maispesado),".")
   Escreval
   Escreval("O nome ",maispesado," em mai�sculas � ",maiusc(maispesado),".")
   Escreval
   Escreval("O nome ",maispesado," em min�sculas � ",minusc(maispesado),".")
   Escreval
   Escreval("A primeira letra do nome ",maispesado," � ",copia(maispesado,1,1),".")
   Escreval
   Escreval("A �ltima letra do nome ",maispesado," � ",copia(maiusc(maispesado),compr(maispesado),1),".")
   Escreval
   Escreva("Digite uma letra do nome, que eu respondo em que posi��o ela est�: ")
   Leia(letra)
   Escreval
   Escreval("A letra ",letra," est� na posi��o ",pos(letra,maispesado),".")
   Escreval
   Escreval("O c�digo da letra ",maiusc(letra)," na programa��o dos teclados �",asc(letra),".")
   Escreval
   Escreval("A tecla",asc(letra)," na programa��o dos teclados corresponde � ",carac(asc(letra)),".")
   Escreval
   Escreval("Agora vou escrever o nome ",maispesado," de tr�s pra frente.")
   Escreval
   Para contador <- compr(maispesado) ate 1 passo-1 faca
      Escreva(copia(maiusc(maispesado),contador,1))
   FimPara
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 14 - VETORES")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreval("Bem vindo(a) ao seu digitador de MEGASENA das Loterias!")
   Escreval
   totpar <- 0
   Para contador <- 1 ate 6 faca
      Escreva("Digite o",contador,"� n�mero: ")
      Leia(vet[contador])
      Se (vet[contador] % 2 = 0) entao
         totpar <- totpar + 1
      FimSe
   FimPara
   Escreval
   Para contador <- 1 ate 6 faca
      Se (contador = 6) entao
         Escreva("{",vet[contador]," }.")
      Senao
         Escreva("{",vet[contador]," };")
      FimSe
   FimPara
   Escreval
   Para contador <- 1 ate 5 faca
      Para pmega <- contador+1 ate 6 faca
         Se(vet[contador] > vet[pmega]) entao
            auxmega <- vet[contador]
            vet[contador] <- vet[pmega]
            vet[pmega] <- auxmega
         FimSe
      FimPara
   FimPara
   Escreval
   Para contador <- 1 ate 6 faca
      Se (contador = 6) entao
         Escreva("{",vet[contador]," }.")
      Senao
         Escreva("{",vet[contador]," };")
      FimSe
   FimPara
   Escreval
   Escreval
   Para contador <- 1 ate 6 faca
      Se (vet[contador] % 2 = 0) entao
         Escreval("Encontrei um valor PAR na posi��o",contador,"!")
         Escreval
      FimSe
   FimPara
   Escreval("O total de n�meros PARES digitados �",totpar,".")
   Escreval
   Escreval("Agora vamos calcular e publicar as Notas e M�dias das provas Te�rica e Pr�tica.")
   Escreval
   Para contador <- 1 ate 4 faca
      Escreval("Aluno ",contador)
      Escreva("Nome: ")
      Leia(nomealuno[contador])
      Escreval
      Escreva("Nota na Prova Te�rica: ")
      Leia(notateor[contador])
      Escreva("Nota na Prova Pr�tica: ")
      Leia(notaprat[contador])
      median[contador] <- (notateor[contador]+notaprat[contador]) / 2
      somamedia <- somamedia + median[contador]
      Escreval
   FimPara
   mediatot <- somamedia/4
   Escreval
   Escreval("LISTAGEM DE ALUNOS")
   Escreval("----------------------")
   Para contador <- 1 ate 4 faca
      Escreval(nomealuno[contador]:15, median[contador]:4:1)
      Se (median[contador] > mediatot) entao
         qalunos <- qalunos + 1
      FimSe
   FimPara
   Escreval
   Escreval("Ao todo temos",qalunos," alunos acima da m�dia da turma, que foi",mediatot:4:1,".")
   Escreval
   Escreval
   Escreval("*--***--*")
   Escreval(" AULA 15 - MATRIZES")
   Escreval("*--***--*")
   Escreval
   Escreval
   PularAula()
   Escreval
   Escreval("Eu posso tamb�m ler Matrizes Matem�ticas!")
   Escreval
   sdp <- 0
   p2l <- 1
   Para linha <- 1 ate 4 faca
      Para coluna <- 1 ate 4 faca
         Escreva("Digite um valor da posi��o LINHA [",linha," ], COLUNA [",coluna," ]: ")
         Leia(mat[linha,coluna])
         Se (linha = coluna) ent�o
            sdp <- sdp + mat[linha,coluna]
         FimSe
      FimPara
   FimPara
   Escreval
   Para linha <- 1 ate 4 faca
      Para coluna <- 1 ate 4 faca
         Escreva(mat[linha,coluna]:4)
      FimPara
      Escreval()
   FimPara
   Escreval
   Para coluna <- 1 ate 4 faca
      p2l <- p2l * mat[2,coluna]
   FimPara
   Escreva
   Para linha <- 1 ate 4 faca
      Se (mat[linha,3] > mcol3) entao
         mcol3 <- mat[linha,3]
      FimSe
   FimPara
   Escreval("A soma dos valores da Diagonal Principal � igual a:",sdp,".")
   Escreval()
   Escreval("O produto dos valores da Linha [ 2 ] � igual a:",p2l,".")
   Escreval()
   Escreval("O maior valor da Coluna [ 3 ] � igual a:",mcol3,".")
   Escreval()
   Escreval("Dissecando Matrizes")
   Escreval
   Para lin <- 1 ate 4 faca
      Para col <- 1 ate 4 faca
         Escreva("Digite valor para a posi��o [",lin,",",col,"]: ")
         Leia(mat[lin,col])
      FimPara
   FimPara
   Escreval
   Repita
      EscrevaL()
      EscrevaL("MENU DE OP��ES")
      EscrevaL("====================")
      EscrevaL("[1] Mostrar a Matriz")
      EscrevaL("[2] Diagonal Principal")
      EscrevaL("[3] Tri�ngulo Superior")
      EscrevaL("[4] Tri�ngulo Inferior")
      EscrevaL("[5] Sair")
      Repita
         EscrevaL("===== OP��O: ")
         Leia(op)
      Ate (op >= 1) e (op <= 5)
      Escreval
      Escolha op
      Caso 1
         MostraMatriz()
      Caso 2
         DiagonalPrincipal()
      Caso 3
         TrianguloSuperior()
      Caso 4
         TrianguloInferior()
      Caso 5
         Escreval("ENCERRANDO...")
      FimEscolha
   Ate (op = 5)
   Escreval
   Escreval("Para finalizar nosso curso em Algoritmos, vamos jogar um Joga da Velha?")
   Escreval
   Cont <- 1
   Simb <- "X"
   Para L <- 1 ate 3 faca
      Para C <- 1 ate 3 faca
         v[L,C] <- NumpCarac(Cont)
         Cont <- Cont + 1
      FimPara
   FimPara
   MostraVelha()
   Repita
      Repita
         EscrevaL("Vai jogar [", simb:1, "] em qual posicao? ")
         Leia(Po)
         R <- Jogar(Simb, Po))
         Se (R = falso) entao
            EscrevaL("JOGADA INVALIDA!")
         FimSe
      Ate (R = verdadeiro)
      MudaJogador()
      Escreval
      MostraVelha()
   Ate (terminouVelha() = verdadeiro)
   EscrevaL("JOGO FINALIZADO!!!")
   Escreval
   Escreva("Foi um prazer trabalhar com voc�, ",Nome,", at� mais!")
   EscrevaL()
   Escreva()("Aperte qualquer tecla para fechar...")
   Leia(fim)
   LimpaTela
   Escreval
}