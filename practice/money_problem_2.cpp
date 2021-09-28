#include <iostream>
using namespace std;

int main() {
	int a[]={1, 2, 5, 10, 50, 100};
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c=0;
	    while(n){
	        for(int i=5;i>=0;i--){
	            if(n>=a[i]){
	                n-=a[i];
	                c++;
	                break;
	            }
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
