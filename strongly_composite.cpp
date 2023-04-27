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
#define sz(n, string)  int n=string.size();
#define out(x) cout<<x<<endl;
#define ed  cout<<endl;
#define in   cin>>
#define ff   first
#define ss   second
#define dout(x, y)  cout<<x<<" "<<y<<endl;
#define sout(x)  cout<<x<<" ";
#define mx   INT_MAX
#define mn   INT_MIN
#define vec vector
template<typename T>
bool isPrime(T n){if (n <= 1) return 0; if (n <= 3)  return 1; if (n % 2 == 0 || n % 3 == 0) return 0; 
for (unsigned LL int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0) return 0;  return 1;
}

LL int ans(int a){return (a*(a-1))/2;}
void pos(int a){while(a--) cout<<1<<" ";}
void neg(int a){while(a--)cout<<-1<<" ";}



void test(){
        int n, k, a, b; in n; in k;
        if(ans(n)==k){yes; pos(n);ed; return;}
        if(ans(n-1)==k){yes; pos(n-1);out(-1);return;}
        rep(2, n){
           a=n-i, b=i;
           if(a>0)
           if(ans(a)+ans(b)==k){yes; pos(a); neg(b); ed; return;}
        }
        no;     
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
