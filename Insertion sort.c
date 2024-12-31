#include<stdio.h>
int main()
{
    int num[]={10,6,5,1,2,3};
    int size=sizeof(num)/sizeof(num[0]);

    printf("Numbers before sorting:\n");
    for(int i=0;i<size;i++)
    {
       printf("%d\t",num[i]);
    }
    for(int i=0;i<size;i++)
    {
        int keyelement=num[i];
        int j=i-1;
        while(j>=0 && num[j]>keyelement)
        {
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=keyelement;
    }
    printf("\nAfter sorting:\n");
    for(int i=0;i<size;i++)
    {
       printf("%d\t",num[i]);
    }

    return 0;
}
