#include<stdio.h>
#include<stdlib.h>
void main(){
	int a[]={9,4,8,5,1,3,2};
	int i,j,c;
	
	int length=sizeof(a)/sizeof(int);
	printf("����ǰ���飺");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("���鳤�ȣ�%d\n",length);

	for(i=0;i<length;i++){
		for(j=i+1;j<length;j++){
			if(a[i]>a[j]){
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		} 
	}
	printf("��������飺");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	getch();
}
