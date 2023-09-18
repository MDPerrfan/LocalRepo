#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main()
{
    int h,m,s=1;
    int d=1000;
    printf("Set the time:\tHOUR\tMINUTE\n");
    scanf("%d %d ",&h,&m);
    if(h>12||m>60){
        printf("Error!!\\n");
        exit(0);
    }
    while(1){
            s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("\nCLOCK:");
        printf("\n%02d:%02d:%02d:",h,m,s);
        Sleep(d);
        system("cls");
    }
}