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
    
  
}
