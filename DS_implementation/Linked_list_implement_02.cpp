// Program to implement singly linked list using C++ classes
#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class llist
{
    private:
        node * head;

    public:
        llist()
        {
            head = nullptr;
        }
        void insert_end(int val);
        void insert_front(int val);
        void insert_index(int val, int index);
        void traverse();
        void delete_node_end();
        void delete_node_front();
        void search_node(int target);
        ~llist()
            {
                while (head != nullptr)
                {
                    delete_node_front();
                }
                
            }
};
void llist :: insert_end(int val)
{
    node* new_node = new node(val);
    if ( head == nullptr)
    {
        head = new_node;
        return;
    }
    node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
void llist :: insert_front(int val)
{
    node* new_node = new node(val);
    if (head == nullptr)
    {
        head = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
    
}
void llist :: insert_index(int val, int index)
{
    node* new_node = new node(val);
    node* temp = head;
    if (index < 0)
    {
        cout << "Invalid index" << endl;
        return;
    }
    else if(index == 0)
    {
        insert_front(val);
        return;
    }
    int count = 0;
    while (count != index - 1 && temp != nullptr)
    {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr)
    {
        cout << "Index out of range!" << endl;
        delete new_node;
        return;
    }
    
    new_node->next = temp->next;
    temp->next = new_node;
}
void llist :: traverse()
{
    if (head == nullptr)
    {
        cout << "linked list is empty!" << endl;
        return;
    }
    node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;

    }
    cout << endl;
    
}
void llist :: delete_node_end()
{
    if (head == nullptr)
    {
        cout << "Linked list is empty!" << endl;
        return;

    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    
    node* temp;
    temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp->next;

    }
    delete temp->next;
    temp->next = nullptr;
}
void llist :: delete_node_front()
{
    if (head == nullptr)
    {
        cout << "Linked list is empty!" << endl;
        return;

    }
    node* temp;
    temp = head;
    head = head->next;
    delete temp;
}
void llist :: search_node(int target)
{
    if(head == nullptr)
    {
        cout << "Linked list is empty!" << endl;
        return;
    }
    node* temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        if (temp->data == target)
        {
            cout << "Element found at index" << count << endl;
            return;
        }
        temp = temp->next;
        count++;
    }
    cout << "Element not found in the linked list! " << endl;
    
}
int main()
{   

    return 0;
}