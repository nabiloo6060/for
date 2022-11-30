#include <iostream>
using namespace std ;
 main (){


 int p,s,i,f;
 cout<<"please enter p:";
 cin>>p;
 cout<<"please enter s:";
 cin>>s;
 f=1;
 for(i=1 ;i<=s ; i++ ){
 	f*=p;
 }
 cout<<f;
}