#include <stdio.h>

void quickSort(int arr[],int size);
void quickSortRecursion(int arr[],int low,int high);
int partition(int arr[],int low,int high);

void quickSort(int arr[],int size){
    quickSortRecursion(arr,0,size-1);
    printf("Sorted Array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


void quickSortRecursion(int arr[],int low,int high){
    if(low < high){
        int pivot_index = partition(arr,low,high);
        quickSortRecursion(arr,low,pivot_index -1); //left side
        quickSortRecursion(arr,pivot_index+1,high); //right side
    }
}

int partition(int arr[],int low,int high){
    int pivot_value = arr[high];
    int i = low;
    for(int j = low;j < high;j++){
        if(arr[j]<=pivot_value){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[high]);
    return i;
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
            quickSort(arr,x);
        }
    }
}
