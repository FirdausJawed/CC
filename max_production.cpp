#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int d,x,y,z;
       cin>>d>>x>>y>>z;
      
       int case_1= 7*x;
       int case_2= d*y + z*(7-d);

       cout<< max(case_1,case_2)<<endl;
    }
    return 0;
}