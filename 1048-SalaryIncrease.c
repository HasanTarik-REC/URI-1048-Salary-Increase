#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1) {
    float a,b,c;
    int A=15,B=12,C=10,D=7,E=4;
    printf("Enter your salary:\n");
    scanf("%f",&a);
    if (a>=0 && a<=400.00) {
        b=a*0.15;
        c=a+b;
        printf("Novo salario: %0.2f\n",c);
        printf("Reajuste ganho: %0.02f\n",b);
        printf("Em percentual: %d %\n",A);
    }
    else if (a>=400.01 && a<=800.00) {
        b=a*0.12;
        c=a+b;
        printf("Novo salario: %0.2f\n",c);
        printf("Reajuste ganho: %0.02f\n",b);
        printf("Em percentual: %d %\n",B);
    }
    else if (a>=800.01 && a<=1200.00) {
        b=a*0.10;
        c=a+b;
        printf("Novo salario: %0.2f\n",c);
        printf("Reajuste ganho: %0.02f\n",b);
        printf("Em percentual: %d %\n",C);
    }
    else if (a>=1200.01 && a<=2000.00) {
        b=a*0.07;
        c=a+b;
        printf("Novo salario: %0.2f\n",c);
        printf("Reajuste ganho: %0.02f\n",b);
        printf("Em percentual: %d %\n",D);
    }
    else if (a>2000.00) {
        b=a*0.04;
        c=a+b;
        printf("Novo salario: %0.2f\n",c);
        printf("Reajuste ganho: %0.02f\n",b);
        printf("Em percentual: %d %\n",E);
    }
    
}
return 0;
}