#include<stdio.h>
int main (){
// Remember one thing ki array me kitne bheae variable ho lekin Uska index 0 se start hoga jab bhee ham1 variable ko call krana chahe to 0 se call krege.
 int arr[5]={1,2,3,4,5};

printf("%d\n",arr[0]);    //For example of calling 0 is here 
printf("%d\n",arr[1]);
printf("%d\n",arr[2]);
printf("%d\n",arr[3]);
printf("%d",arr[4]);

//  for (int i =0 ;i<5;i++){

    



//  printf("%d\n",arr[i]);  
    
//  }
    
    
    return 0;


// Program number 2

}
#include<Stdio.h>
int main(){
int arr[6];
 
for(int i=0;i<=5;i++){
    printf("Enter the value of Element %d ",i+1);
    scanf("%d",&arr[i]);
}
for(int j=0;j<=5;j++){
    printf("Value of ELement %d is %d \n",j+1,arr[j]);
}



    return 0;
}
