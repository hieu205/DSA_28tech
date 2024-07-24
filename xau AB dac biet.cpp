#include<bits/stdc++.h>
using namespace std;
int n,k,ok;
vector<int> a;
vector<vector<int>> v;

void ktao(){
	cin>>n>>k;
	a.push_back(1);
	for(int i=1;i<=n;i++){
		a.push_back(0);
	}
}

void sinh(){
	int i=n;
	while(a[i]==1&&i>=1){
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}

bool check(){
	int b[100];
	for(int i=1;i<=n;i++) b[i]=1;
	int maxx=0;
	for(int i=1;i<n;i++){
		if(a[i]==a[i+1]&&a[i]==0){
			b[i+1]=b[i]+1;
			maxx=max(maxx,b[i+1]);
		}
	}
	int cmp=0;
	for(int i=1;i<=n;i++){
		if(b[i]==maxx&&maxx==k) ++cmp;
	}
	if(cmp==1) return true;
	else return false;
//	if(maxx==k) return true;
//	else return false;
}
int main (){
	ktao();
	ok=1;
	int cnt=0;
	while(ok){
		if(check()){
			cnt++;
			v.push_back(a);
		}
		sinh();
	}
	cout<<cnt<<endl;
	for(int i=0;i<v.size();i++){
		for(int j=1;j<v[i].size();j++){
			if(v[i][j]==0) cout<<"A";
			else cout<<"B";
		}
		cout<<endl;
	}
}

