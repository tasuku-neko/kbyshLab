#include<stdio.h>
#include<stdlib.h>

//出す手は数値で返す(0:ぐー,1:ちょき,2:ぱー)
int getEnemyHand();
int getMyHand();
//勝ち負けは数値で返す(0:勝ち,1:負け)
int getVs(int,int);
void printResult();


int main(){
 
}

void printResult(int a){

  
  if(a==0){
    printf("勝ち");
  }
  if(a==1){
    printf("負け");
  }
  if(a==2){
    printf("あいこ");
  }
 
}
