#include <stdio.h>
// arr = [3,2,5,1,0]
void selectionSort(int arr[], int size){
    for(int i=0;i<size;i++){
        int smallest = i;
        int j=i+1;
        for(j;j<size;j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
    printf("Sorted Array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}


void main(){
    while(1){
        printf("\nEnter the no. of elements OR -1 to exit\n");
        int x;
        
        scanf("%d",&x);
        if(x==0) printf("\nNo. should be greater then 0");
        else if (x==-1)
        {
           printf("\nExiting...");
            break;
        }
        else{
            int arr[x];
            printf("\nEnter the elements: \n");
            for (int i = 0; i < x; i++)
            {
                scanf("%d",&arr[i]);
            }
            printf("Entered array is: ");
            for(int i=0;i<x;i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
            selectionSort(arr,x);
        }
    }
}