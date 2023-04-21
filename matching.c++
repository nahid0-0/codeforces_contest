#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <math.h>
#include <string>
#include <bitset>
#include <array>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <unordered_set>
#include <unordered_map>
#include <list>
#include <new>
using namespace std;
#define LL        long long
#define rep(s, e)      for(int i=s; i<e; ++i) 
#define repu(s,e)      for(int i=s; i<=e; ++i)
#define repi(s, e)     for(int i=e-1; i>=0; --i)  
#define repiu(s, e)    for(int i=n; i>=1; --i)         
#define arrin(string, n)   rep(0, n){ cin>>string[i];}
#define arrout(string, n)  rep(0, n){cout<<string[i]<<" ";} cout<<endl;
#define vecout(string)  rep(0, string.size()){cout<<string[i]<<" ";} cout<<endl;
#define bug   cout<<"bug"<<endl;
#define fff(x) cout << "debug: " << #x << ": " << (x) <<endl;
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define pb(x)  push_back(x)
#define po     pop_out()
#define sz(n, string)   n=string.size();
#define out(x) cout<<x<<endl;
#define end  cout<<endl;
#define in cin>>


void test(){
        int cnt=0;
        string s; in s;
        rep(0, s.length()){
                if(s[i]=='?')cnt++;
        }
        if(s[0]=='0'){out(0); return;}
        if(s[0]=='?'){
                if(cnt==1){out(9); return;}
                cnt--;
                out(9*(pow(10,cnt)));
        }
        else out(pow(10, cnt));



            
}

int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        int t;
        cin>>t;
        while(t--){
                test();
        }
     
        return 0;
}
