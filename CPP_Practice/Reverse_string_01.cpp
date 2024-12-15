// program to reverses a string
#include<iostream>

using namespace std;

string revS(string str){
    string rev;
    for (int i = str.size()-1; i >= 0; i--)
    {
        rev += str[i];
    }

    return rev;
}
int main(){
    string lp = revS("messer pablo");
    cout << lp;

    return 0;
}