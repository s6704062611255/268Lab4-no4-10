#include<stdio.h>
int main(){
    int time,score,i;
    scanf("%d",&time);
    for(i=0;i<time;i++){
        scanf("%d",&score);
        if (score > 100){
            printf("error score  because > 100\n");
        }
        else if (score < 0){
            printf("error score because < 0\n");
        }
        else if (score >= 68){
            if (score >= 80){
                printf("%d(A)\n", score);
            }
            else if (score >= 75){
                printf("%d(B)\n", score);
            }
            else{
                printf("%d(C)\n",score);
                
            }
        }
        else{
            if (score >= 50){
                printf("%d(D)\n", score);
            }
            else{
                printf("%d(F)\n", score);
            }
        }
    }
    

}