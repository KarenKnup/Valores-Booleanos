#include <stdio.h>
/*Faça um algoritmo que calcule qual será a altura de uma criança: 

Menino - (altura do pai+altura da mãe)/2 +13 

Menina - (altura do pai+altura da mãe)/2 -13 */

//printf - sempre na MAIN

//Deixar como 'float' a variavel que quer mexer nas casas decimais, o 'int' arredonda, 183cm estava virando 1m

int CalcAltura (int gen, int m, int p) {
float c;
  c=(p+m)/2;
if (gen==1) {//Masculino
   c=c+13;
} 
else {//Feminino
  c=c-13;
}
  return c;
}

/*float CalcM (float c){
  float cm;
  return cm=c/100;
}*/

int main(void) {
//Variaveis
int m,p,gen;
float c;

//Usuário
printf("Qual a altura da mãe, em cm?  ");
scanf("%d",&m);
printf("\nQual a altura do pai, em cm?   ");
scanf("%d",&p);
printf("\nQual o gênero da criança?   \n1-Masculino / 2-Feminino    ");
scanf("%d",&gen);
  
//Cálculos e Resultados
c=CalcAltura(gen,m,p);
printf("\n__________________________________________________________");
printf("\n\n    A altura da criança será %.2f cm, ou seja, %.2f m.",c,c/100);
  printf("\n__________________________________________________________");
  
    return 0;
}