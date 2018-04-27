#include<stdio.h>
#include<stdlib.h>
void quick_sort(int a[],int l,int r){
	if(l<r){
		int left=l,right=r;
		int x=a[left];
		while(a[right]>x&&left<right){
			right--;
		}
		a[left]=a[right];
		while(a[left+1]<x&&left<right){
			left++;
		}
		a[right]=a[left];
		a[left]=x;
    	quick_sort(a,l,left-1);
	    quick_sort(a,left+1,r);
	}

}
int main(){
	int a[]={2,1,6,3,8,4,1};
	int i;
	int length=sizeof(a)/sizeof(int);
	printf("原序列：");
	for(i=0;i<length;i++){
		printf("%3d",a[i]);
		
	} 
   	printf("原序列：");
	quick_sort(a,0,length);
	for(i=0;i<length;i++){
		printf("%3d",a[i]);	
	} 
	getch();
}
