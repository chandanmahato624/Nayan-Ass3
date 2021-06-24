#include<stdio.h>
int main(){
    int n,i,res=0;
    printf("Enter the number of integers : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers : ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        res += arr[i];
    }
     printf("Sum of N integers = %d",res);
}