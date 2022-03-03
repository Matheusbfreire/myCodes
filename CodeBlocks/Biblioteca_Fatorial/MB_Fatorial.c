int fatorial(int a)
{
    int fat=1,c=0;

    for (c=1;c<=a;c++) {
        fat*=c;
    }

    return fat;
}
