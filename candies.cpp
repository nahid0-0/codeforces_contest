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
	int n;
	cin>>n;
	if(n%2==0){
		cout<<-1<<endl;
		return;
	}
	vector<int> ans;
	int cnt=0;
	while(n>1){
		n=n/2;
		if(n%2==0){
			n=n+1;
			ans.push_back(1);
		}
		else
			ans.push_back(2);
		cnt++;
	}
    cout<<cnt<<endl;
	reverse(ans.begin(), ans.end());
	fl(0, ans.size()){
		cout<<ans[i]<<" ";
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
