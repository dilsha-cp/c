#include<stdio.h>
#include<string.h>

int main(){
    char word1[]="abc";
     char word2[]="pqr";
    int len1=strlen(word1);
    int len2=strlen(word2);
    int k,i=0,j=0;
    char res[1000];
    for(k=0;k<len1+len2;){
        if(word1!='\0'){
            res[k++]=word1[i++];
        }if(word2!='\0'){
            res[k++]=word2[j++];
        }
    }
    res[k]='\0';
    printf("%s",res);
     return 0;
}
