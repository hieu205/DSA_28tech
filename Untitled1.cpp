#include<bits/stdc++.h>
using namespace std;

int n,a[100],ok,b[100];
long long minn=9999999999;
void ktao(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>b[i];
	
}

void sinh(){
	int i=n;
	while(a[i]==1&&i>=1){
		a[i]=0;
		--i;
	}
	if(i==0) ok=0;
	else a[i]=1;
}

int main (){
	ktao();
	ok=1;
	
	while(ok){
		long long sum1=0,sum2=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1) sum1+=b[i];
			else sum2+=b[i];
		}
		minn=min(minn,abs(sum1-sum2));
		sinh();
	}
	cout<<minn<<endl;
}
