// Basic program to initialize a vector of integers of 10 value and to sum all of the values.
#include<iostream>
#include<vector>

using namespace std;
// function to print vector
void printVec(const vector<int>& Vec){    // Passing by constant reference (read only)
    for (int i = 0; i < Vec.size(); i++)
    {
        cout << Vec[i] << " ";
    }
    cout << endl;
}
// function to sum all the element of vector
int sumVec(const vector<int>& Vec){    // Passing by constant reference (read only)
    int sum = 0;
    for (int i = 0; i < Vec.size(); i++)
    {
        sum += Vec[i];
    }
    return sum;
}

int main(){

    vector<int> Vec = {1,2,3,4,5,6,7,8,9,10};
    printVec(Vec);
    cout << sumVec(Vec) << "\n";
    return 0;
}