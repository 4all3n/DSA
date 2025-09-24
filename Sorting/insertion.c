// Insertion sort
#include <stdio.h>
// array => [4,2,6,3,7]
void inseSort(int arr[],int size){
    for(int i =1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(j >=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
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
            inseSort(arr,x);
        }
    }
}