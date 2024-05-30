#include<stdio.h>
#define MAX 100

int function(int year)
{
     int arr[year],i;
     arr[1]=0;
     arr[2]=0;
   
    for(i=3;i<=year;i++){
        if(i%2==0){
            arr[i]=arr[i-2]+6;
            
        }else if(i%2==1){
            arr[i]=arr[i-2]+7;
        }
    }
    return arr[year];

}


int main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
    return 0;
}

