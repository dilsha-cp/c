#include <stdio.h>
#define MAX 100

int function(int N, int S,int * A)
{
  int i,j;
  int sum;
    
  int s=0;
  int e=N-1;
    
  for(i=0;i<N;i++){
      sum=A[i];
      if(sum==S){
          printf("%d %d",i+1,i+1);
          return 0;
      }
      for(j=i+1;j<N;j++){
          sum=sum+A[j];
          if(sum==S){
             printf("%d %d",i+1,j+1);
              return 0;
          }
      }
  }
  
 
}

int main() {
    int i,N,S,A[MAX];
    
    scanf("%d",&N);
    scanf("%d",&S);
    for(i=0; i<N; i++)
        scanf("%d",&A[i]);
        
    int p=function(N,S,A);
    return 0;
}





