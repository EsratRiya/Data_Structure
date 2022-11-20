#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);

    int i,arr[size];

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int index;
    scanf("%d",&index);

    for(i=index;i<size-1;i++){
        arr[i] = arr[i+1];
    }


    for(i=0;i<size - 1;i++){
        printf("%d\n",arr[i]);
    }

return 0;
}
