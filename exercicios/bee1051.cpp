#include <stdio.h>

int main()
{
    float s;
    scanf("%f", &s);
    if(s<=2000.00)
        printf("Isento\n");
    else
        if(s>2000&&s<=3000)
        {    
            s=s-2000;
            s=s*0.08;
            printf("R$ %.2f\n", s);
        }
        else
            if(s>3000&&s<=4500)
            {
                s=s-3000;
                s=s*0.18+1000*0.08;
                printf("R$ %.2f\n", s);
            }
            else
                if(s>4500)
                {
                    s=s-4500;
                    s=s*0.28+1000*0.08+1500*0.18;
                    printf("R$ %.2f\n", s);
                }
                

return 0;
}
