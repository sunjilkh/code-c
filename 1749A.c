// old version
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int x = m;
        while(x--){
            int p,q;
            scanf("%d%d",&p,&q);
        }
        if(m == n-1) printf("YES\n");
        else if( m == 1 && n>1) printf("YES\n");
        else printf("NO\n");
    }
}

// New
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        //int x = m;
        while(x--){
            int p,q;
            scanf("%d%d",&p,&q);
        }
        if(m == n-1) printf("YES\n");
        else if( m == 1 && n>1) printf("YES\n");
        else printf("NO\n");
    }
}
