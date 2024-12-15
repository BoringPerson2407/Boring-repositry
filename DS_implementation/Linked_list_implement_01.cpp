// Program to implement singly linked list using C++ classes
#include<iostream>

using namespace std;

class node{ // class to represent node
    public:
        int value; // it stores the value in node
        node* next; // it stores the address of next node

        node(int val){ 
            value = val;
            next = nullptr; // initially it points to null
        }
};
class linkedlist{
    private:
        node* head; // head of the linked list
    
    public:
        linkedlist(){
            head = nullptr; // initially it points to null
        }
        // function declaration of linked list
        void appendVal(int val);
        void display();
        void delNode(int val);
    // destructor to deallocate memory
    ~linkedlist(){

    }
};
// function to appends value in linked list
void linkedlist :: appendVal(int val){
    node* newNode = new node(val); // Creates a new node which holds the value
    if (head == nullptr) // Checks if node is empty
    {
        head = newNode; // if empty, assign the value of new node to head
        return;
    }
    node* temp = head; // creates a temporary var of type *node which holds value of head
    while ( temp->next != nullptr ) // iterate through until temp reaches the last node
    {   // move to next node
        temp = temp->next;
    }
    temp->next = newNode; // make the last node point to new node
}
// Function which prints all the elements of linked list
void linkedlist :: display(){
    if (head == nullptr) // checks if linkned list is empty or not
    {
        cout << "linked list is empty!\n";
        return;
    }
    node* temp = head;
    while (temp != nullptr) // iterate through every element of linked list ( from head to tail)
    {
        cout << temp->value << " "; // print the value 
        temp = temp->next;         // then move on to next node
    }
    cout << endl;
}
// Function to delete a node with give value from linked list
void linkedlist :: delNode(int value){
    if (head == nullptr) // checks if linked list is empty or nor
    {
        cout << "Linked list is empty!\n";
        return;
    }
    if (head->value == value) // if a node to delete is the head of the linked list
    {   node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node* current = head;
    while (current->next != nullptr && current->next->value != value)
    {
        current = current->next;
    }
    if (current->next == nullptr)
    {
        cout << "Value not found in the Linkedlist!\n";
        return;
    }
    node* temp = current->next;
    current->next = current->next->next;
    delete temp;
    return;
}

int main(){
    linkedlist list;
    list.appendVal(23);
    list.appendVal(24);
    list.appendVal(2);
    list.appendVal(21);
    list.appendVal(12);
    list.appendVal(15);
    list.appendVal(18);
    list.appendVal(19);
    list.display();
    list.delNode(12);
    list.display();

    return 0;
}