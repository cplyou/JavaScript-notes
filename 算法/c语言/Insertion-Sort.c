#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[]={9,4,8,5,1,3,2};
    int i,j;
	int length=sizeof(a)/sizeof(int);
	printf("����ǰ���飺");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("���鳤�ȣ�%d\n",length);
	
	for(i=1;i<length;i++){
	    int preindex=i-1;
		int current=a[i];
		while(preindex>=0&&a[preindex]>current){
			a[preindex+1]=a[preindex];
			preindex--;
		}
		a[preindex+1]=current;
	} 
	printf("��������飺");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	getch();
}
