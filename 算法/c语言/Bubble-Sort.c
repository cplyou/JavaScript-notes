#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	int a[]={9,4,8,5,1,3,2};
	int length=sizeof(a)/sizeof(int);
	printf("����ǰ���飺");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("���鳤�ȣ�%d\n",length);
	for(i=0;i<length;i++){
		for(j=0;j<length-1-i;j++){
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("��������飺");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	getch();
}
