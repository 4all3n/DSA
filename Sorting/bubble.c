#include <stdio.h>


// arr = [5,6,1,9,4]

void bubble(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
            bubble(arr,x);
        }
    }
}