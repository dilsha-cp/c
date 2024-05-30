#include<stdio.h>
#include<stdlib.h>
#define MAX 30

int function(int arr[],int lim, int x)
{
  int sum,diff,res,i,j,minind;
  int min=10000;
  
  for(i=0;i<lim;i++)
  {
      for(j=i+1;j<lim;j++)
      {
          sum=arr[i]+arr[j];
          diff=abs(x-sum);
           if(min>diff)
           {
            min=diff;
             res=sum;
         } 
      }
  }
   
  return res;
   
}

int main() {
    int i,length,array[MAX];
    int x;
    scanf("%d",&x);
    while((scanf("%d,",&array[i]))!=-1){
        i++;
    }
    length=i;
    int out=function(array,length,x);
    printf("%d",out);
    return 0;
}

