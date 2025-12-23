#include<stdio.h>
int main(){
    int score, i;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    for (i = 0;; i++){
        scanf("%d", &score);
        if (score == -1){
            break;
        }
        else if (score > 100){
            printf("error score  because > 100\n");
        }
        else if (score < 0){
            printf("error score because < 0\n");
        }
        else if (score >= 68){
            if (score >= 80){
                printf("%d(A)\n", score);
                countA++;
            }
            else if (score >= 75){
                printf("%d(B)\n", score);
                countB++;
            }
            else{
                printf("%d(C)\n", score);
                countC++;
            }
        }
        else{
            if (score >= 50){
                printf("%d(D)\n", score);
                countD++;
            }
            else{
                printf("%d(F)\n", score);
                countF++;
            }
        }
    }
    printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)",countA,countB,countC,countD,countF);
}