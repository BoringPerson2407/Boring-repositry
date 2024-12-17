// Program to implement matrix and it's operations on C++
#include<iostream>
#include<vector>
using namespace std;

class matrix
{
    private:
        int rows, columns;
        vector<vector<int>> mat;

    public:
        matrix(int r, int c, int value = 0) : rows(r), columns(c)
        {
            mat.resize(r, vector<int>(c, value));
        }
        void setMat(); // set the value for matrix
        void printMat(); // print the matrix
        int getVal(int r1, int c1); // return an element of matrix
        void addMat(const matrix &a1, const matrix &a2); // function to add two matrix and store their values (a1 and a2 are the matrices)

};

void matrix :: setMat()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> mat[i][j];
        }
        
    }
}

void matrix :: printMat()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int matrix :: getVal(int r1, int c1)
{   r1--, c1--;
    return mat[r1][c1];
}
void matrix :: addMat(const matrix &a1, const matrix &a2)
{
    if (a1.rows != a2.rows || a1.columns != a2.columns)
    {
        cout << "Dimensions do not match! " << endl;
        return;
    }
    for (int i = 0; i < a1.rows; i++)
    {
        for (int j = 0; j < a1.columns; j++)
        {
            mat[i][j] = a1.mat[i][j] + a2.mat[i][j];
        }   
    } 
}
int main(){
    matrix m1(3, 3);
    cout << "**********************************" << endl;
    m1.setMat();
    cout << "**********************************" << endl;
    m1.printMat();
    cout << "**********************************" << endl;
    matrix m2(3, 3);
    cout << "**********************************" << endl;
    m2.setMat();
    cout << "**********************************" << endl;
    m2.printMat();
    cout << "**********************************" << endl;
    matrix m3(3, 3);
    cout << "**********************************" << endl;
    m3.printMat();
    cout << "**********************************" << endl;
    m3.addMat(m1, m2);
    cout << "**********************************" << endl;
    m3.printMat();
    cout << "**********************************" << endl;


    return 0;
}