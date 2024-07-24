#include<bits/stdc++.h>
using namespace std;
bool cmp(pair <int ,int > a, pair <int ,int > b){
	if(a.second==b.second) return a.first>b.first;
	else return a.second<b.second;
}
int main (){
	int t;
	cin>>t;
	map <int ,int > m;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		m[n]++;
	}
	vector<pair<int ,int >> v(m.begin(),m.end());
	sort(begin(v),end(v),cmp);
	for(auto x : v ) cout<<x.first<<" "<<x.second<<endl;
}
