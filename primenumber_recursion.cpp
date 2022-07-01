//
//  main.cpp
//  data_struct
//
//  Created by MOHAMMAD AMMAN on 10/06/22.
//
#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2)
{
  
   
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
 
    
    return isPrime(n, i + 1);
}
 

int main()
{
    int n ;
    cout<<"num:"<<endl;
    cin>>n;
    if (isPrime(n))
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}
