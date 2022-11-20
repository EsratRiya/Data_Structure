
#include<stdio.h>

void main()
{
    //array size
    int size;
    scanf("%d",&size);

    int i,arr[size];

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    //taking input search value
    int value,found;
    scanf("%d",&value);

    for(i=0; i<size; i++)
    {
        if(value == arr[i])
        {
            found = 1;
            break;
        }
        else
        {
            found = 0;
        }
    }

    if(found == 1)
    {
        printf("%d is found",value);
    }
    else
    {
        printf("%d is not found",value);
    }


}
