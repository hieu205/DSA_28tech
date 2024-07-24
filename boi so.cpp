#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll res[501];
int ok;
vector<string> a;

void sinh(){
	int i=s.size()-1;
	while(s[i]=='9'&&i>=0){
		s[i]='0';
		--i;
	}
	if(i==-1){
		ok=0;
	}else{
		s[i]='9';
	}
}

int main (){
	ok=1;
	s=string(13,'0');// string de sinh ra tats ca sinh nhi phan cua 0 va 9
	while(ok){
		a.push_back(s);// luu cac cau hinh sinh ra vao vector 
		sinh();
	}
	for(int i=1;i<=500;i++){
		for(auto x : a){
			if(stoll(x)&&stoll(x)%i==0){
				res[i]=stoll(x);// luu tat ca cac boi nho nhat cua so tu 1-500 vao mang res
				break;
			}
		}
	}
	//for(int i=1;i<=500;i++) cout<<i<<" "<<res[i]<<endl;
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<res[x]<<endl;
	}
}

