#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
    char name[10];
    scanf("%d",&n);
    gets(name);
    if(name[n-1]=='A')
        printf("YES");
    else
        printf("NO");
    }




    return 0;

}
