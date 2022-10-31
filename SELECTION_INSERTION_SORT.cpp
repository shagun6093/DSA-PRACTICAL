#include<stdio.h>
void SelectSort(int a[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min]){
                min=j;
            }
            if(min!=i)
            {
                temp =a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }
    }
}


void InsertionSort(int arr[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key =arr[i];
        j=i-1;
    
    while (j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j=j+1;
    }
    
    arr[j+1]=key;
    
}
}

int main (){
    int i,sort[100],size,choice;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&sort[i]);
        
    }
    SelectSort(sort,size);
    printf("Array sorted using Selection Sort:\n");
    printf("After Sorting:\n");
    for(i=0;i<size;i++)
    printf("%d\t",sort[i]);
    
    
    InsertionSort(sort,size);
    printf("\nArray sorted using InsertionSort Sort:\n");
    printf("After Sorting:\n");
    for(i=0;i<size;i++)
    printf("%d\t",sort[i]);
}
