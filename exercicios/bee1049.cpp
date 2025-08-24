#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define tf 20
int main()
{
    int i, t1, t2, t3;
    char p1[tf], p2[tf], p3[tf];
    fgets(p1, tf, stdin);
    fgets(p2, tf, stdin);
    fgets(p3, tf, stdin);
    t1 = strlen(p1);
    t2 = strlen(p2);
    t3 = strlen(p3);
    for(i=0; i<t1; i++)
        if(p1[i] == '\n')
            p1[i] = p1[i+1];
    for(i=0; i<t2; i++)
        if(p2[i] == '\n')
            p2[i] = p2[i+1];
    for(i=0; i<t1; i++)
        if(p3[i] == '\n')
            p3[i] = p3[i+1];
    for(i=0; p1[i]!='\0'; i++)
        p1[i] = tolower(p1[i]);
    for(i=0; p2[i]!='\0'; i++)
        p2[i] = tolower(p2[i]);
    for(i=0; p3[i]!='\0'; i++)
        p3[i] = tolower(p3[i]);
    if(strcmp(p1, "vertebrado") == 0)
        if(strcmp(p2, "ave") == 0)
            if(strcmp(p3, "carnivoro") == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        else
            if(strcmp(p3, "onivoro") == 0)
                printf("homem\n");
            else
                printf("vaca\n");
    else
        if(strcmp(p2, "inseto") == 0)
            if(strcmp(p3, "hematofago") == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        else
            if(strcmp(p3, "hematofago") == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
return 0;
}
