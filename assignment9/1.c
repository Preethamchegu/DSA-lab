#include<stdio.h>
void bubblesort(int *arr,int n){
	int i,j,flag,c;
	for(i=0;i<n-1;i++){
		flag=0;
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
				flag=1;
			}
		
		}
		if(flag==0){
			break;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int n,i;
	printf("size of your array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter nums:");
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	bubblesort(arr,n);
	
	                                                                                                                                                          
}
