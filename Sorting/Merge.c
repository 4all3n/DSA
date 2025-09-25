#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int start,int mid,int end){
    int left_size = mid - start + 1;  
    int right_size = end - mid; 

    int temp_left[left_size], temp_right[right_size];

    int i=0,j=0,k=0;

    for(i=0;i<left_size;i++){
        temp_left[i] = arr[start + i]; 
    }
    for(i=0;i<right_size;i++){
        temp_right[i] = arr[mid +1 + i];
    }

    for(i=0,j=0,k=start;k<=end;k++){
        if((i<left_size) && ((j>=right_size) || temp_left[i]<=temp_right[i])){
            arr[k] = temp_left[i];
            i++;
        }else{
            arr[k] = temp_right[j];
            j++;
        }
    }
}

void divide(int arr[],int start,int end){
    
    if(start < end){
        int mid = start + (end-start) / 2;
    
        //Left divide
        divide(arr,start,mid);
        
        //right divide
        divide(arr,mid+1,end);
    
        // Merge
        merge(arr,start,mid,end);
    }

}


void mergesort(int arr[],int size){
    divide(arr,0,size-1);
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
            mergesort(arr,x);
        }
    }
}
