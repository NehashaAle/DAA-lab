#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num[]= {11,8,6,5,10,1};
    int size=sizeof(num)/sizeof(num[0]);

    printf("Numbers before sorting:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",num[i]);
    }

    for(int i=0; i<size-1; i++)
    {
        int selected=i;
        for(int j=i+1; j<size; j++)
        {
            if(num[selected]>num[j])
            {
                selected=j;
            }
            if(selected!=j)
            {
                swap(&num[j],&num[selected]);
            }
        }

    }

    printf("\nAfter sorting:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}
