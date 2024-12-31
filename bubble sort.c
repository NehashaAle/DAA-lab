#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num[]={11,8,6,5,10,1};
    int size=sizeof(num)/sizeof(num[0]);

    printf("Numbers before sorting:\n");
    for(int i=0;i<size;i++)
    {
       printf("%d\t",num[i]);
    }

    //Sorting loop
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                swap(&num[j],&num[j+1]);
            }
        }
    }

    printf("\nAfter sorting:\n");
    for(int i=0;i<size;i++)
    {
       printf("%d\t",num[i]);
    }

    return 0;
}

