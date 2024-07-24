#include<bits/stdc++.h>
using namespace std;

int main (){
	int n,k;
	cin>>n>>k;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	int b[100];
	for(int i=1;i<=n;i++) b[i]=i;
	vector<string> res;
	int cnt=0;
	do{
		int sum=0;
		for(int i=1;i<=n;i++){
			sum+=a[i][b[i]];
		}
		if(sum==k){
			++cnt;
			string ans="";
			for(int i=1;i<=n;i++){
				ans+=to_string(b[i]);
				ans+=" ";
			}
			res.push_back(ans);
		}
	}while(next_permutation(b+1,b+n+1));
	cout<<cnt<<endl;
	for(auto x : res) cout<<x<<endl;
}
