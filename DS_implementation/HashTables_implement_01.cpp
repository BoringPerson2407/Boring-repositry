#include<iostream>
#include<iostream>

using namespace std;

int Hash_function(string key, int size){
    int hash = 0;
    int ascii;
    const int prime = 47;
    for (char c: key)
    {
        ascii = static_cast<int>(c);
        hash = (hash * prime + ascii) % size;
    }
    return hash;
}

int main(){

    return 0;
}