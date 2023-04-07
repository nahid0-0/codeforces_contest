#include<iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll        long long
#define fl(s, e)      for(int i=s; i<e; ++i)         
#define vecint   vector< int > 
#define intmeme(s, e, val) fl(s, e+1){arr[i]=val;}
#define arrin(string, n)   fl(0, n){ cin>>string[i];}
#define arrout(string, n)  fl(0, n){cout<<string[i]<<" ";} cout<<endl;
#define bug   cout<<"bug"<<endl;
#define dbg(x) cout << "debug: " << #x << ": " << (x) <<endl;
#define CY  cout<<"YES"<<endl;
#define CN cout<<"NO"<<endl;

void test(){
	int n;cin>>n;
	char c;cin>>c;
	string s;
	cin>>s;
	int indx=0;
	while(s[indx]>=c && indx<n){
		cout<<s[indx];
		++indx;

	}
	cout<<c;
	for(indx=indx; indx<n; ++indx){
		cout<<s[indx];
	}
	cout<<endl;



}
int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #endif
        int t;
        cin>>t;
        while(t--){
                test();
        }
     
        return 0;
}

