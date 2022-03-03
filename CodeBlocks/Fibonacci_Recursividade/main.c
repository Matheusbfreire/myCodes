#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int fib(int n);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n=0;

    printf("Digite um número:\n");
    scanf("%i",&n);
    printf("O %i° termo da série de Fibonacci: %i\n",n,fib(n));
    return 0;
}

int fib(int n)
{
    if (n==1 || n==2) {
        return 1;
    } else {
        return fib(n-1)+fib(n-2);
    }
}
