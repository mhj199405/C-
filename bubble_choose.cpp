#include<stdio.h>
int change(int *p);
void gogle();
void bubble(int a[],int n);
void  choose(int b[],int n);
int main(){
 int age=25;
 int *p=&age;
 printf("val:%d\n",*p);
// change(p);
  printf("val:%d\n",*p);
printf("����˷��ھ���:\n");
  gogle();
int a[]={4,7,0,-1,2,-3,20,11,0,6,7,5,-20};
int n=sizeof(a)/sizeof(a[0]);
printf("�����ð������\n"); 
printf("����֮ǰ:"); 
for(int i=0;i<n;i++){
	printf(" %d",a[i]);	
}
printf("\n");
printf("����֮��:");
bubble(a,n);
printf("\n");
printf("�����ѡ������\n");
printf("����֮ǰ:"); 
for(int i=0;i<n;i++){
	printf(" %d",a[i]);	
}
printf("\n");
printf("����֮��:");
choose(a,n);
}
int change(int *p){
	*p=10;
}
void gogle(){
	int i,j;
	for(i=1;i<=9;i++){
	   for(j=1;j<=i;j++){
	   	printf(" %d*%d=%d ",j,i,i*j);
	   }	
	   printf("\n");
	}
}
void bubble(int a[],int n){
  int i,j,temp;
  for(i=0;i<=n-1;i++){
  	for(j=0;j<=n-1-i;j++){
  		if(a[j]>a[j+1]){
  			temp=a[j];
  			a[j]=a[j+1];
  			a[j+1]=temp;
		  }
	  }
  }
  for(i=0;i<n;i++){
  	printf(" %d",a[i]);
  }
}
void  choose(int a[],int n){
	int i,j,temp;
	for(i=0;i<=n-1;i++){
		int min=a[0];
		int k=i;
		for(j=i+1;j<=n-1;j++){
			if(min>a[j]){
			   min=a[j];
			   k=j;
			}
		}
		temp=a[i];
    	a[i]=a[k];
		a[k]=temp;
	}
  for(i=0;i<n;i++){
  	printf(" %d",a[i]);
  }	
}
