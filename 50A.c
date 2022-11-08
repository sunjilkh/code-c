#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,i,j=2,c=1,ans;
        scanf("%d%d",&n,&x);
        if(n==1 || n==2)
            printf("1\n");
        else{
            while(1)
            {
                j+=x;
                c++;
                if(j>=n) { ans=c;
                        break;}
            }
            printf("%d\n",ans);
        }
    }


}
