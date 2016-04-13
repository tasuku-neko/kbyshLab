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

int gitVs(per,com){
	int res;//勝ち負け
//あいこの場合
	if(per == com){
		res = 2;

//その他
		else{
			if(per == 0 && com == 1){
				res = 0;
			}
			if(per == 0 && com == 2){
				res = 1;
			}
			if(per == 1 && com == 0){
				res = 1
			}
			if(per == 1 && com == 2){
				res = 0;
			}
			if(per == 2 && com == 0){
				res = 0
			}
			if(per == 1 && com == 2){
				res = 1;
			}
		}
	}
	return res;
}


void getMyHand(int x){
  int a;
  a=x;

  return a;

}

