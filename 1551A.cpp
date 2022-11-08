#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	string s1,s2,l1,l2;
	cin>>s1>>s2;
	l1=s1.back(); l2=s2.back();
	if(l1 == l2){ if(s1.length() == s2.length()) cout<<"=\n"; 
                  else if(l1== 'S'){ if(s1.length()>s2.length()) cout<<"<\n";
                                      else cout<<">\n";}
                  else{ if(s1.length()>s2.length()) cout<<">\n";
                                      else cout<<"<\n";}
                                  } 
    else if(l1 == 'S') cout<<"<\n";
    else if(l1 == 'M'){
    	if(l2 == 'S') cout<<">\n";
    	else cout<<"<\n";
    }
    else cout<<">\n";

    return 0 ;
}
