#include<iostream>
using namespace std;
int main(){
    
    int lucky=0, unlucky=0;
    int n;
    cin>>n;
    
    int arr [n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    
    for (int j = 0; j<n; j++)
    {
        if (arr[j]%2==0)
        {
           lucky++;
        }
        else{
            unlucky++;
        }
    }
    if (lucky>unlucky)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }

    return 0;
}