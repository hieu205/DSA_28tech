#include<stdio.h>
using namespace std;
#define ll long long
int n,a[1000],b[1000],ok;
ll minn=99999999;

void sinh(){
	int i=n;
	ll sum1=0,sum2=0;
	while(b[i]==1&&i>=1){
		b[i]=0;
		--i;
	}
	if(i==0) ok=0;
	else{
		for(int i=1;i<=n;i++){
			if(b[i]==1){
				sum1+=a[i];
			}else sum2+=a[i];
		}
	}
	minn=min(minn,abs(sum1 - sum2));
}
int main (){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	ok=1;
	while(ok){
		sinh();
	}
	cout<<minn;
	
}
