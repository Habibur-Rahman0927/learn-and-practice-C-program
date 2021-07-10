//for loop while, do while;

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<10; i++)//for (initialization; condition; conditionUpdate)
    {
        printf("c programming\n");
        printf("%d\n",i);
    }

    int w = 1;
    while(w<10)
    {
        printf("%d\n",w);
        w++;
    }

    int d=1;
    do
    {
        printf("%d\n", d);
        d++;
    }
    while(d<10);
    int v;
    for(v = 2; v<=100; v=v+2){
        printf("%d\n", v);
    }
    int o;
    for(o = 1; o<=100; o=o+2){
        printf("%d", o);
    }

}
