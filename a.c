#include<stdio.h>

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int p,q,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d ",&p,&q);
		if(p == 1 || q == 1) printf("%d %d\n",p,q);
		else{
			if(p%2!=0 || q%2!=0)
			printf("%d %d\n",p/2+1,q/2+1);
		    else printf("%d %d\n",p/2,q/2);
		}
	}
}
