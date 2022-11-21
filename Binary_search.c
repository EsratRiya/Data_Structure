#include<stdio.h>

void main(){

    int size;
    scanf("%d",&size);

    int arr[size];
    int i;

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int search_value;
    scanf("%d",&search_value);

    int found=0;

    int beg=0,end=size-1,mid;

    while(beg <= end){

        mid = (beg+end)/2;

        if(arr[mid] == search_value){
            found = 1;
            break;
        }
        else if(arr[mid] < search_value){
            beg = mid + 1;
        }
        else if(arr[mid] > search_value){
            end = mid - 1;
        }
    }
    if(found == 1){
        printf("%d is found\n",search_value);
    }
    else{
        printf("%d is not found\n",search_value);
    }



}
