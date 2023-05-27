#include<stdio.h>
#include<string.h>
struct p1
{
    int hour;
    int min;
    int sec;
    char c;
};
int main()
{
    struct p1 t1;
    struct p1 t2;
    struct p1 t3;
    printf("enter the first time hour min sec A for am P for pm\n");
    scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
    getchar();
    scanf("%c",&t1.c);
    printf("enter the second time hour min sec A for am P for pm\n");
    scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
    getchar();
    scanf("%c",&t2.c);
    if(t1.hour>t2.hour&&t2.c=='P')
    {
        t2.hour=t2.hour+12;
    }
    else if(t1.hour>t2.hour&&t2.c=='A')
    {
        t2.hour=t2.hour+24;
    }
    else{

    }
    if(t1.min>t2.min)
    {
        t2.min=t2.min+60;
        t2.hour--;
    }
    if(t1.sec>t2.sec)
    {
        t2.sec=t2.sec+60;
        t2.min--;
    }
    t3.hour=t2.hour-t1.hour;
    t3.min=t2.min-t1.min;
    t3.sec=t2.sec-t1.sec;
    printf("%d %d %d",t3.hour,t3.min,t3.sec);
    return 0;
}