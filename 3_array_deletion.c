#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    printf("enter the index of which element you want to delete: ");
    scanf("%d",&index);
    int i=index;
    while(i<n-1){
        arr[i]=arr[i+1];
        i++;
    }
    n=n-1;
    printf("array after deletion: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}