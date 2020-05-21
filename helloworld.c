int main() {
    long x1,x2,x3,x4,x5,x6,x7,a,m,c;
    x1=115666;
    x2=123882;
    x3=207144;
    x4=117227;
    x5=41605;
    x6=34225;
    x7=39639;

    m=233341;
        for(a=1;a<=m;a++)
        {
            for(c=1;c<=m;c++)
            {
                if(x2==(a*x1+c)%m && x3==(a*x2+c)%m && x4==(a*x3+c)%m && x5==(a*x4+c)%m && x6==(a*x5+c)%m && x7==(a*x6+c)%m)
                {
                    printf("%ld %ld %ld",a,m,c);
                    break;
                }
            }
        }
    return 0;
}