#include<stdio.h>
void smin(){
	int i,j,k,count=0;
	for(i=1;i<=4;i++){ // ����Ϊ����ѭ�� 
		for(j=1;j<=4;j++){
			for(k=1;k<=4;k++){
				if(i!=j&&i!=k&&k!=j){
					count++;
					printf("%d,%d,%d\n",i,j,k);
				}
			}
		} 
	}
	printf("�ܹ��в��ظ�����λ����%d\n",count);
} 
int main(){
 smin();
 return 0;	
}
