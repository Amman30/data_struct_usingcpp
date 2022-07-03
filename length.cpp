//
//  main.cpp
//  reverse_a_string
//
//  Created by MOHAMMAD AMMAN on 01/07/22.
//

#include <iostream>
#include <string>
using namespace std;

int length(char* p) {
    int count = 0;
    while (*p != '\0') {
        count++;
        p++;
    }
    return count;
}

int main() {
    char str[100];
    int size;
    cout << "Enter any string"<<endl;
    cin >> str;
    size = length(str);
    cout << "The length of the given string:"<<endl<< size;
    cout << endl;
    return 0;
}
