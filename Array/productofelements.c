#include<stdio.h>
int main(){
    int num,product=1;
    printf("Enter the number of elements in Array " );
    scanf("%d",&num);
    int arr[num];

    for (int  i = 0; i < num ; i++)
    {  printf("Enter the value of Element %d ",i+1);
        scanf("%d",&arr[i]);

        product =product*arr[i];
        
    }
    printf("Product is %d",product);
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    }
