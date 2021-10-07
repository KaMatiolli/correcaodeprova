#include <stdio.h>
int main() {
  char q1, q2, q3, r1, r2, r3, continua;
  float media, soma_media = 0.0, porcent_aprovado, provas, corrigidas = 0.0,aprovados = 0.0;
  int nota = 0 , soma;

  printf("\tDigite o gabarito da prova");
  
  printf("\n\nQuestao 1:");
  scanf(" %c", &r1);
  printf("Questao 2:");
  scanf(" %c", &r2);
  printf("Questao 3:");
  scanf(" %c", &r3);

  do{
    printf("\nResposta 1:");
    scanf(" %c", &q1);
    printf("Resposta 2:");
    scanf(" %c", &q2);
    printf("Resposta 3:");
    scanf(" %c", &q3);

  nota = 0;

  if(r1==q1){
   nota++;}
  if(r2==q2){
   nota++;}  
  if(r3==q3){
   nota++;}
    
  if(nota == 3 || nota == 2){
    printf("\nAprovado com a nota %d", nota);
      aprovados++;
    }
    else if( nota <=1){
    printf("\nReprovado com nota %d", nota);
    }

    corrigidas++;
    soma_media = soma_media + nota;
    printf("\nContinua?");
    scanf(" %c", &continua);
  }while (continua == 's');

    media = soma_media/corrigidas;
    porcent_aprovado = (aprovados*100)/corrigidas;
    printf("\nQuantidade de provas corrigidas: %.0f", corrigidas);
    printf("\nMedia das notas: %.2f", media);
    printf("\nAprovados: %.0f", aprovados);
    printf("\nTaxa de aprovados: %.2f%%", porcent_aprovado);
}