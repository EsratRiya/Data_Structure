#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);

    int i,arr[size];

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,temp;

    for(i=0; i<size; i++)
    {

        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }
    for(i=0; i<size; i++)
    {
        printf("%d\n",arr[i]);
    }


}
