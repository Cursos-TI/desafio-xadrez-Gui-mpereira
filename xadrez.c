#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//O intuíto do programa é fazer com que seja simples para o usuário compreender as entradas que deve fazer, de fácil manutenção.
//E que possibilite a reutilização dos recursivos para chamar em outro momento do código, caso tenha alguma adição de novas funcionalidades. 

//Recursivos


// Recursivo de loop construído com IF
/*void moverTorre(int casas) {
    if (casas > 0){
    printf("Direita\t");
    moverTorre(casas - 1);
   }
}*/

//Movimentação da Torre
void moverTorreDireita(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Direita\t");
    }
}
void moverTorreEsquerda(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Esquerda\t");
    }
}
void moverTorreCima(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Cima\t");
    }
}
void moverTorreBaixo(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Baixo\t");
    }
}

// Recursivo de loop construído com IF
/*void moverBispo(int casas){
    if (casas > 0){
    printf("Cima Esquerda\t");
    moverBispo(casas - 1);

    }
}*/

//Movimentação do Bispo
void moverBispoCimaEsquerda(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Cima Esquerda\t");
    }
}
void moverBispoCimaDireita(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Cima Direita\t");
    }
}
void moverBispoBaixoEsquerda(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Baixo Esquerda\t");
    }
}
void moverBispoBaixoDireita(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Baixo Direita\t");
    }
}

// Recursivo de loop construído com IF
/*void moverRainha(int casas){
    if (casas > 0){
    printf ("Esquerda\t");
    moverRainha(casas - 1);

    }*/

//Movimentação da Rainha
void moverRainhaEsquerda(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Esquerda\t");
    }
}
void moverRainhaDireita(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Direita\t");
    }
}
void moverRainhaCima(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Cima\t");
    }
}
void moverRainhaBaixo(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Baixo\t");
    }
}
void moverRainhaCimaEsquerda(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Cima Esquerda\t");
    }
}
void moverRainhaCimaDireita(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Cima Direita\t");
    }
}
void moverRainhaBaixoEsquerda(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Baixo Esquerda\t");
    }
}
void moverRainhaBaixoDireita(int casas){
    for (int i = 0; i < casas; i++) {
        printf("Baixo Direita\t");
    }
}

//Movimentação do Cavalo
void moverCavaloCimaEsquerda(int casas){
    for (int i = 2; i <= 2; i++) {

        // Loop interno (aninhado)
    for (int j = 1; j <= i ; j++) {
            printf("Cima\n");
        }
        printf("Esquerda\n");
}
}

void moverCavaloCimaDireita(int casas){
    for (int i = 2; i <= 2; i++) {

        // Loop interno (aninhado)
    for (int j = 1; j <= i ; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
}
}
void moverCavaloDireitaCima(int casas){
    for (int i = 2; i <= 2; i++) {

        // Loop interno (aninhado)
    for (int j = 1; j <= i ; j++) {
            printf("Direita\n");
        }
        printf("Cima\n");
}
}
void moverCavaloEsquerdaCima(int casas){
    for (int i = 2; i <= 2; i++) {

        // Loop interno (aninhado)
    for (int j = 1; j <= i ; j++) {
            printf("Esquerda\n");
        }
        printf("Cima\n");
}
}
void moverCavaloEsquerdaBaixo(int casas){
    for (int i = 2; i <= 2; i++) {

        // Loop interno (aninhado)
    for (int j = 1; j <= i ; j++) {
            printf("Esquerda\n");
        }
        printf("Baixo\n");
}
}
void moverCavaloDireitaBaixo(int casas){
    for (int i = 2; i <= 2; i++) {

        // Loop interno (aninhado)
    for (int j = 1; j <= i ; j++) {
            printf("Direita\n");
        }
        printf("Baixo\n");
}
}
void moverCavaloBaixoDireita(int casas){
    for (int i = 2; i <= 2; i++) {

        // Loop interno (aninhado)
    for (int j = 1; j <= i ; j++) {
            printf("Baixo\n");
        }
        printf("Direita\n");
}
}
void moverCavaloBaixoEsquerda(int casas){
    for (int i = 2; i <= 2; i++) {

        // Loop interno (aninhado)
    for (int j = 1; j <= i ; j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
}
}


int main() {
// Identação das variáveis
int casas;
char movimentacaoPecas, direcao;


// Menu de Peças
// Nesta seção é solicitada a entrada do usuário para selecionar a peça desejada para movimentar.
    printf("Bem-vindo ao jogo Xadrez!\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    printf("4. Cavalo\n");
    printf("Escolha a peça que deseja movimentar:");
    scanf(" %c", &movimentacaoPecas);





// Menu de Movimentação
switch (movimentacaoPecas)
{

// Nesta seção o usuário é informado da peça escolhida.
case '1':
    printf("Você escolheu movimentar a Rainha!\n");
    //Entrada para determinar a direção da movimentação das peças
    printf("Escolha a direção que deseja movimentar!\n");
    printf ("1. Esquerda\t 2. Direita\t 3. Cima\t 4. Baixo\t 5. Cima Esquerda\t 6. Cima Direita\t 7. Baixo Esquerda\t 8. Baixo Direita\n");
    scanf(" %c", &direcao);
    //Entrada para determinar o número de casas para a peça andar.
    printf("Escolha quantas casas vai movimentar:\n");
    scanf("%d", &casas);
    
 
 //Switch com todas as possibilidades de movimento para cada peça.   
switch (direcao)
{
    case '1': moverRainhaEsquerda(casas); break;
    case '2': moverRainhaDireita(casas); break;
    case '3': moverRainhaCima(casas); break;
    case '4': moverRainhaBaixo(casas); break;
    case '5': moverRainhaCimaEsquerda(casas); break;
    case '6': moverRainhaCimaDireita(casas); break;
    case '7': moverRainhaBaixoEsquerda(casas); break;
    case '8': moverRainhaBaixoDireita(casas); break;
    default: printf("Direção inválida!\n"); break;
            }
    break;



case '2':
    printf("Você escolheu movimentar a Bispo!\n");
    //Entrada para determinar a direção da movimentação das peças
    printf("Escolha a direção que deseja movimentar!\n");
    printf ("1. Cima Esquerda\t 2. Cima Direita\t 3. Baixo Esquerda\t 4. Baixo Direita\n");
    scanf(" %c", &direcao);
    //Entrada para determinar o número de casas para a peça andar.
    printf("Escolha quantas casas vai movimentar:");
    scanf("%d",&casas);

    
switch (direcao)
{
    case '1': moverBispoCimaEsquerda(casas); break;
    case '2': moverBispoCimaDireita(casas); break;
    case '3': moverBispoBaixoEsquerda(casas); break;
    case '4': moverBispoBaixoDireita(casas); break;
    default: printf("Direção inválida!\n"); break;
            }
    break;

case '3':
    printf("Você escolheu movimentar a Torre!\n");
    //Entrada para determinar a direção da movimentação das peças
    printf("Escolha a direção que deseja movimentar!\n");
    printf ("1. Esquerda\t 2. Direita\t 3. Cima\t 4. Baixo\t 5. Cima Esquerda\t 6. Cima Direita\t 7. Baixo Esquerda\t 8. Baixo Direita\n");
    scanf(" %c", &direcao);
    //Entrada para determinar o número de casas para a peça andar.
    printf("Escolha quantas casas vai movimentar:\n");
    scanf("%d", &casas);
    
 
 //Switch com todas as possibilidades de movimento para cada peça.   
switch (direcao)
{
    case '1': moverTorreEsquerda(casas); break;
    case '2': moverTorreDireita(casas); break;
    case '3': moverTorreCima(casas); break;
    case '4': moverTorreBaixo(casas); break;
    default: printf("Direção inválida!\n"); break;
            }
    break;

case '4':
int casas = 3;
    printf("Você escolheu movimentar o Cavalo!\n");
    //Entrada para determinar a direção da movimentação das peças
    printf("Escolha a direção que deseja movimentar!\n");
    printf ("1.CimaEsquerda\t 2.CimaDireita\t 3.EsquerdaCima\t 4.DireitaCima\t 5.BaixoEsquerda\t 6.BaixoDireita\t 7.EsquerdaBaixo\t 8.DireitaBaixo\n");
    scanf(" %c", &direcao);

 
 //Switch com todas as possibilidades de movimento para cada peça.   
switch (direcao)
{
    //Devido ao movimento do cavalo ser em L, determinei uma movimentação diferente dos outros com as opções CimaDireita e DireitaCima.
    //Considerando que uma se inicia inicia na direita, anda 2 casas e finaliza com uma para cima, e vice e versa.
    //No caso do cavalo, o numero de casas é pré-determinado(3 casas), não tendo a opção para selecionar a quantidade.
    case '1': moverCavaloCimaEsquerda(casas); break;
    case '2': moverCavaloCimaDireita(casas); break;
    case '3': moverCavaloEsquerdaCima(casas); break;
    case '4': moverCavaloDireitaCima(casas); break;
    case '5': moverCavaloBaixoEsquerda(casas); break;
    case '6': moverCavaloBaixoDireita(casas); break;
    case '7': moverCavaloEsquerdaBaixo(casas); break;
    case '8': moverCavaloDireitaBaixo(casas); break;
    default: printf("Direção inválida!\n"); break;
            }
    break;

default:
printf("Opção inválida\n");

}

return 0;


}
