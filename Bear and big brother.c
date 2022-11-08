#include<stdio.h>
int main()
{
    int i,count,j=1;
    char b,a[5];
    for(i=0;i<5;i++)
        scanf("%c",&a[i]);

    for(i=4;i>=0;i--)
    {
        if(a[i]!='0'){
            b = a[i] * j;
            j=j*10;
            printf("%d\n",b);
        }
        else
            j=j*10;

    }

}
