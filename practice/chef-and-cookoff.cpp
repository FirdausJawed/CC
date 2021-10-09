#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,c=0,e=0,si=0,m=0,h=0;
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++){
	        if(s[i]=="cakewalk")
	        c++;
	        if(s[i]=="easy")
	        e++;
	        if(s[i]=="simple")
	        si++;
	        if(s[i]=="medium" || s[i]=="easy-medium")
	        m++;
	        if(s[i]=="medium-hard" || s[i]=="hard")
	        h++;
	    }
	    if(c>0 && e>0 && si>0 && m>0 && h>0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
