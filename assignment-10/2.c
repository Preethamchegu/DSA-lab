int inverse=0;
#include <stdio.h>
void mergeinverse(int *a,int low,int mid,int high){
    int B[high-low+1];
    int i=low;
    int j=mid+1;
    int k=0;
    int f=0;
    while(i<=mid && j<=high){
        if(a[i]>a[j]){
            B[k]=a[j];
            k++;
            f++;
            j++;
            
        }
        else {
            B[k]=a[i];
            k++;
            i++;
            inverse+=f;
        }
    }
    while(i<=mid){
        B[k]=a[i];
        inverse+=f;
        k++;
        i++;
    }
    while(j<=high){
        B[k]=a[j];
        k++;
        j++;
    }
   
    for(i=low,k=0;i<=high;i++,k++){
        a[i]=B[k];
    }
}
void mergesort(int *a,int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        mergeinverse(a,low,mid,high);
    }
}
int main() {
    int n,i;
    printf("enter no. of elements in array:");
    scanf("%d",&n);
    int A[n];
    printf("enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",A+i);   
    }
    mergesort(A,0,n-1);
    printf("no . of inverse elements =%d",inverse );
}
