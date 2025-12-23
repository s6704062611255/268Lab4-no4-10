#include<stdio.h>
int main(){
    char character;
    int i, j, row, col;
    scanf("%c %d %d", &character, &row, &col);
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%c", character);
        }
        printf("\n");
    }
}