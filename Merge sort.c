#include<stdio.h>

void Sort(int a[],int start, int mid, int end)
{
    int temp[end-start];
    int i=start;
    int j=mid;
    int k=0;

    while(i<mid && j<end)
    {
        if(a[i]>a[j])
        {
            temp[k++]=a[j++];
        }
        else
        {
            temp[k++]=a[i++];
        }
    }

    while(i<mid)
    {
        temp[k++]=a[i++];
    }
    while(j<end)
    {
        temp[k++]=a[j++];
    }

    k=0;
    for(int l=start; l<end; l++)
    {
        a[l++]=temp[k++];
    }
}
void mergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        Sort(a,l,mid,r);
    }
}
int main()
{
    int a[]= {8,6,5,4};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Numbers before sorting:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }

    mergeSort(a,0,size);

    printf("\nAfter sorting:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
