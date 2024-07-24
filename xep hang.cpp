#include<bits/stdc++.h>
using namespace std;

int n,a[100],ok;
vector <string> res;

void ktao(){
	cin>>n;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		res.push_back(x);
	}
	for(int i=1;i<=n;i++) a[i]=i;
}

void sinh(){
	int i=n-1;
	while(a[i]>a[i+1]&&i>=1) --i;
	if(i==0){
		ok=0;
	}
	else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}

bool cmp(string a,string b){
	return a<b;
}
int main (){
	ktao();
	ok=1;
	sort(res.begin(),res.end(),cmp);
	while(ok){
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
		for(int i=1;i<=n;i++) cout<<res[a[i]-1]<<" ";
		cout<<endl;
		sinh();
	}
	
}
