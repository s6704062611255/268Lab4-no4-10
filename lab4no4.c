#include<stdio.h>
int main(){
    int i=1,j;
    while(i<=3){
        printf("Row %d : ", i);
        for(j=1;j<=5;j++){
            printf("%d ",j);
        }
        printf("\n");
        i++;
    }
}