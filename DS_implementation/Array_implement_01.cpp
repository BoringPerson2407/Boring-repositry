// Implementation of array using Classes

#include<iostream>

using namespace std;

class Array{
    private:
        int *data;
        int size;
        int capacity;

    public:
        Array(int cap){
            capacity = cap;
            size = 0;
            data = new int[capacity];
        }
        ~Array(){
            delete[] data;
        }
        void insert(int value); // Insert an element at the end od an array if it is not full
        void remove(int index); // Remove an elemet from particular index
        int get(int index) const; // return a value from a particular index
        void display() const; // display all the elements of an array
        int getsize() const; // return  the size of an array
        int getcapacity() const; // return the total capacity of an array

};

void Array :: insert(int value){
    if (size == capacity)
    {
        cout << "Cannot add more element, array is full! \n";
        return;
    }
    else
    {
        data[size] = value;
        size++;
    }
}
void Array :: remove(int index){
    if (index<0 || index >= size)
    {
        cout << "Invalid index, value out of range! \n";
        return;
    }

    for (int i = index; i < size-1; i++)
    {
        data[i] = data[i+1];
    }
    size--;
}
int Array :: get(int index) const{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index, value out of range! \n";
        return -1;
    }
    return data[index];
}
void Array :: display() const{
    if (size == 0)
    {
        cout << "Array is empty! \n";
    }
    else
    {   
        cout << "Elements of array: ";
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
}
int Array :: getsize() const{
    return size;
}
int Array :: getcapacity() const{
    return capacity;
}

int main(){
    Array a1(10);
    a1.insert(1);
    a1.insert(2);
    a1.insert(3);
    a1.insert(4);
    a1.insert(5);
    a1.insert(6);
    a1.insert(7);
    a1.insert(8);
    a1.insert(9);
    a1.insert(10);

    cout << "value at 4: " << a1.get(4);
    return 0;
}