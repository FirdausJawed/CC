#include <iostream>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n=3;
        int key1=0,key2=0,flag1=0,flag2=0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==0)
            {
                key1++;
            }
            else{
                key2++;
            }
            
        }

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i]==0)
            {
                flag1++;
            }
            else{
                flag2++;
            }
            
        }
        if (key1==flag1 && key2==flag2)
        {
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
            
    }
    
    return 0;
}