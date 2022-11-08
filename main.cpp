#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	pair<int, double> p;
	p = make_pair(80, 4);
	//cout<<p.first<< " " <<p.second << endl;

	pair<int, double> p2 = p;
    //cout<<p2.first<< " " <<p2.second << endl;

    pair<int , string> sp;
    sp.first = 4;
    sp.second = "Sunzil";

    //cout<<sp.first<<" "<<sp.second<<endl;

    pair<int, string> result[3];
    /*for(int i=0; i<3; i++){
    cin>>result[i].first>>result[i].second;}
   for(int i=0; i<3; i++){
    cout<<result[i].first<<result[i].second;}*/
    result[0] = {5383, "Sunzil"};
    result[1] = {5360, "Fatin"};
    result[2] = {5522, "Janina"};
for(int i=0; i<3; i++){
    cout<<result[i].first<<" "<<result[i].second<<endl;}
    cout<<"\n\nSwapping 1st with 3rd in pairs\n";

    swap(result[0],result[2]);
    for(int i=0; i<3; i++){
    cout<<result[i].first<<" "<<result[i].second<<endl;}

    cout<<"Parir of Course and credit"<<endl;
    pair<string, float> CC[2];
    CC[0] = {"Art of Living", 3.0};
    cin>>CC[1].first>>CC[1].second;
    cout<<CC[0].first<<" "<<CC[0].second<<endl;
    cout<<CC[1].first<<" "<<CC[1].second<<endl;
	return 0;
}