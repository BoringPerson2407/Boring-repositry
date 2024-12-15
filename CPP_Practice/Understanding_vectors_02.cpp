#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// function to display vector
void displayVec(vector<int> &vec){
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
// function to count and print freq of unique elements
void countfreq(vector<int> &vec){
    sort(vec.begin(), vec.end()); // sorting function
    int count = 1;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == vec[i-1])
        {
            count++;
        }
        else
        {
            cout << vec[i-1] << " -> " << count << endl; 
            count = 1;
        }
    }  
}

int main(){

    vector<int> V = {1,2,2,2,4,55,6,1,1,13,2,3,67,7,8,8,8,68};
    cout << V.size() << endl;
    displayVec(V);
    countfreq(V);
    return 0;
}