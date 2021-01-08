#include<stdio.h>
void smin(){
	int i,j,k,count=0;
	for(i=1;i<=4;i++){ // 以下为三重循环 
		for(j=1;j<=4;j++){
			for(k=1;k<=4;k++){
				if(i!=j&&i!=k&&k!=j){
					count++;
					printf("%d,%d,%d\n",i,j,k);
				}
			}
		} 
	}
	printf("总共有不重复的三位数：%d\n",count);
} 
int main(){
 smin();
 return 0;	
}
