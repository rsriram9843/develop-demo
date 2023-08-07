#include<stdio.h>
void main(){
	int a,b,i,tem=1,j=0,k=0,d=0;
	int arr[100];
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++){
		if(i%2!=0){
		arr[d++]=i;	
		}
	}
	for(i=1;i<=a;i++){
	if(i%2==0){
		arr[d++]=i;
		}
	}
	for(i=0;i<d;i++){
	printf("%d ",arr[i]);
	}    
	printf("\n%d",arr[b-1]); 
}
