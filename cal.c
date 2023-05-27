#include <stdio.h>
int main()
{
    int n,a,j,i=1,b=1,h;
    printf("Hello\n");
    printf("Enter the month number of the year 2023? ");
    scanf("%d",&n);
    printf("\n\n\n");
    printf("\033[0;31m");
    switch(n)
    {
        case 1:
                a=7;
                j=31;
                printf("\t\t\tJanuary\n");
                break;
        case 2:
                a=3;
                j=28;
                printf("\t\t\tFebruary\n");
                break;
        case 3:
                a=3;
                j=31;
                printf("\t\t\tMarch\n");
                break;
        case 4:
                a=2;
                j=30;
                printf("\t\t\tApril\n");
                break;
        case 5:
                a=1;
                j=31;
                printf("\t\t\tMay\n");
                break;
        case 6:
                a=4;
                j=30;
                printf("\t\t\tJune\n");
                break;
        case 7:
                a=6;
                j=31;
                printf("\t\t\tJuly\n");
                break;
        case 8:
                a=2;
                j=31;
                printf("\t\t\tAugust\n");
                break;
        case 9:
                a=5;
                j=30;
                printf("\t\t\tSeptember\n");
                break;
        case 10:
                a=7;
                j=31;
                printf("\t\t\tOctober\n");
                break;
        case 11:
                a=3;
                j=30;
                printf("\t\t\tNovember\n");
                break;
        case 12:
                a=5;
                j=31;
                printf("\t\t\tDecember\n");
                break;
        default: printf("Invalid Input");
            
    }
    printf("\t\t Month - %d - 2023\n\n",n);
    printf("\033[0;32m");
    printf("\tSUN\tMON\tTUES\t WED\tTHURS\t FRI\tSAT \n\n");
    printf("\033[0;36m");
    switch(a)
    {
        case 1:
                printf("\t %d",i);
                break;
        case 2:
                printf("\t\t %d",i);
                break;
        case 3:
                printf("\t\t\t %d",i);
                break;
        case 4:
                printf("\t\t\t\t %d",i);
                break;
        case 5:
                printf("\t\t\t\t\t %d",i);
                break;
        case 6:
                printf("\t\t\t\t\t\t %d",i);
                break;
        case 7:
                printf("\t\t\t\t\t\t\t %d",i);
                break;
        default:
                printf("Invalid\n");
    }
    h=8-a;
    for(i=2;i<=h;i++)
    {
        printf("\t %d",i);
    }
    printf("\n");
    for(i=h+1;i<=j;i++)
    {
        if(b==8)
        {
            printf("\n");
            b=1;
        }
        printf("\t %d",i);
        b++;
    }

} 