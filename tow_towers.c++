#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string ans(string s1, string s2, int n1, int n2){
    reverse(s1.begin()+1, s1.end());
    string str=s2;
    for(int i=1; i<n1; i++){
    	str.push_back(s1[i]);
    }

	return str;
	
}
void test(){
	int n1, n2;
        	cin>>n1>>n2;
        	string s1, s2;
        	cin>>s1;
        	cin>>s2;
        	string fi=ans(s1, s2, n1, n2);
        	string sec=ans(s2, s1, n2, n1);
        	int count1=0, count2=0;
        	if(s1.length()==1 && s2.length()==1){
        		cout<<"yes"<<endl;
        		return;
        	}
        	for(int i=0; i<fi.length()-1; i++){
        		if(fi[i]==fi[i+1])
        			count1++;

        	}
        	if(count1<=1 && fi[fi.length()-1] != s1[0]){
        		cout<<"yes"<<endl;
        		// cout<<count1<<endl;
        		// cout<<fi[fi.length()-1] <<" "<< s1[0]<<endl;
        		// cout<<"yes"<<endl;

        		return ;
        	}
        	for(int i=0; i<sec.length()-1; i++){
        		if(sec[i]==sec[i+1]){
        			count2++;
        		}
        	}
        	if(count2<=1 && sec [sec.length()-1]!= s2[0]){
        		// cout<<sec[sec.length()-1]<<" "<<s2[0]<<endl;
        		cout<<"yes"<<endl;
        		return ;
        		
        	}
        	cout<<"no"<<endl;
        	return;

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
