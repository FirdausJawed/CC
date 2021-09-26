#include<iostream>
using namespace std;

int main(){
 char n ;
 cin>>n;
 switch (n){
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   cout<<"Vowel"<<endl;
   break;
   default:
   cout<<"Consonent"<<endl;
   break;
 }
  return 0;
  }
