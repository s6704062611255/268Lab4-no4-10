#include<stdio.h>
int main(){
    char cha;
    int n,i,j;
    scanf("%c %d",&cha,&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c",cha);
        }
        printf("\n");
    }
}