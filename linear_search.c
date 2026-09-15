#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the values of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the target value: ");
    scanf("%d",&target);
    int i=0;
    while(i<n){
        if (arr[i]==target){
            printf("index of target is : %d ",i);
            break;
        }else{
           i++;
        }
    }
    return 0;
}