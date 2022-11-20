#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i,arr[n];



    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

return 0;
}
