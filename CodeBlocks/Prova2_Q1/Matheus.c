float valorDeH(int n)
{
    float h=0, num=2, den=1;

    for (int i=0;i<n;i++) {
        if (i!=0) {
            if (i%2==0) {
                num+=3;
                den+=2;
                h-=(num/den);
            } else {
                num+=3;
                den+=2;
                h+=(num/den);
            }
        } else {
            h=-(num/den);
        }
    }

    return h;
}
