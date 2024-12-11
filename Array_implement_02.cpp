// Program to implement array using Classes
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
        void insert(int value);
        void remove(int index);
        void display() const;
        int get(int index) const;
        int getsize() const;
        int getcapacity() const;
};
void Array :: insert(int value){
    if (size == capacity)
    {
        cout << "Cannot insert element, Array is full! \n";
        return;
    }
    data[size] = value;
    size++;
}
void Array :: remove(int index){
    if (index < 0 || index >= size)
    {
        cout << "Invalid input, index out of range! \n";
        return;
    }
    for (int i = index; i < size-1; i++)
    {
        data[i] = data[i+1];
    }
    size--;
}
void Array :: display() const{
    if (size == 0)
    {
        cout << "Array is empty! \n";
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
int Array :: get(int index ) const{
    if (index < 0 || index >= size)
    {
        cout << "Invalid input, index is out of range \n";
        return -1;
    }
    return data[index];
}
int Array :: getcapacity() const{
    return capacity;
}
int Array :: getsize() const{
    return capacity;
}

int main(){
    Array a1(5);
    a1.insert(1);
    a1.insert(2);
    a1.insert(3);
    a1.insert(4);
    a1.insert(5);
    a1.display();
    a1.remove(0);
    a1.display();
    a1.insert(1);
    a1.display();
    cout << a1.getcapacity() << " " << a1.getsize() << endl;
    return 0;
}