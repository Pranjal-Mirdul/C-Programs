#include<stdio.h>
void main(){
int x=7,y=8;
int *gh;
int *bg;
gh=&x;
bg=&y;


    printf("\nAdess of x = %u",&x);
    printf("\nmridul of gh = %u",gh);

    printf("\n vale of x=%d",x);
    printf("\n mridul of gh=%d",*gh);

    printf("\nAdess of y= %u",&y);
    printf("\nmridul of bg = %u",bg);

    printf("\n vale of y=%d",y);
    printf("\n mridul of bg=%d",*bg);
    }