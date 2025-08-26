#include<stdio.h>
int main(){
    int num;
    printf("Enter your number ");
    scanf("%d",&num);
    if (num >= 0){
        if (num == 0){
            printf("zero");
        }
        else{
            printf("positive");
        }
    }
    else{
        printf("negative");
    }
    return 0;
}