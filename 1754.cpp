#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string a;
        int n,b=0,q=0;
        scanf("%d",&n);
        cin>>a;
        for(int i=0; i<n; i++){
        if(a[i]=='Q') b++;
        else b--;
        if(b<0)
            b=0;
        }
        if(b==0) cout<<"YES\n";
        else cout<<"NO\n";
    }

}

