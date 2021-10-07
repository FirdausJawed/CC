#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    int sum1 =0,sum2 = 0;
    int win,lead=0;
    int dif=0;
    for(int i=0;i<n;i++){
        int p1,p2;
        cin>>p1>>p2;
        sum1+=p1;
        sum2+=p2;
        if(sum1<sum2){
            dif=sum2-sum1;
            if(dif>lead){
              lead=dif;
              win=2;}
        }else{
            dif=sum1-sum2;
            if(dif>lead){
              lead=dif;
              win=1;
            }
        }
    }
    cout<<win<<" "<<lead;
    
	return 0;
}

