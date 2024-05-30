#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int function(char * str)
{
   
    int nonalpha=0,space=1,num=0,low=0,cap=0,i;
    
    if(strlen(str)<8){
        return 0;
    }
   for(i=0;str[i]!='\0';i++){
        if(str[i]>='A'&& str[i]<='Z')
        cap=1;
        else if(str[i]>='a'&& str[i]<='z')
        low=1;
        else if(str[i]>='0'&& str[i]<='9')
        num=1;
        else if(str[i]==' ')
        space=0;
        else nonalpha=1;
   }
   return(cap&&low&&num&&space&&nonalpha);
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}



