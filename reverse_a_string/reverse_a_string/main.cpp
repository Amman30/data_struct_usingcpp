//
//  main.cpp
//  reverse_a_string
//
//  Created by MOHAMMAD AMMAN on 01/07/22.
//

#include <iostream>
#include <string>
using namespace std;


void reverse(string s){
    for (int i=s.length(); i>=0; i--){
      
      cout<< s[i];
    }
    cout<<endl;
}
int main(void){
    string ss;
    cout<<"Enter string"<<endl;
     cin>>ss;
   reverse(ss);
   return (0);
}
