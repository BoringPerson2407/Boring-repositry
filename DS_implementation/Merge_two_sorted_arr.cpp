// Program to merge two sorted arrays
#include<iostream>

using namespace std;

void PrintArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
void MergeSortArr(int arr1[], int arr2[], int m, int n){
    int* arr3 = new int[m+n];
    int m1 = 0;
    int n1 = 0;
    int index = 0;
    while (m1 < m && n1 < n)
    {
        if (arr1[m1] <= arr2[n1])
        {
            arr3[index] = arr1[m1];
            m1++,index++;
        }
        else
        {
            arr3[index] = arr2[n1];
            n1++,index++;
        }
    }
    while (m1 < m)
        {
            arr3[index++] = arr1[m1++];
        }
    while (n1 < n)
    {
        arr3[index++] = arr2[n1++];
    }
    PrintArr(arr3, m+n);
    delete[] arr3;
}

int main(){
    int arr1[5] = {};
    int arr2[5] = {6,7,8,9,10};

    MergeSortArr(arr1, arr2, 0, 5);

    return 0;
}