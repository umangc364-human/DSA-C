#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the values of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int index;
    printf("enter the index where you want to insert the value: ");
    scanf("%d",&index);
    int value;
    printf("enter the value you want to insert: ");
    scanf("%d",&value);
    int j=n;
    while(j>index){
        arr[j]=arr[j-1];
        j--;
    }
    arr[index]=value;
    printf("array after insertion: ");
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);

    }
    return 0;

}