#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int value){
            this->value= value;
            next = nullptr;
        }
};

class Linkedlist{
    private:
        Node*head;
        Node*tail;
        int length;
    public:
        Linkedlist(int value){
            Node* newNode = new Node(value);\
            head = newNode;
            tail = newNode;
            length = 1;    
        }

        void printList(){
            Node* temp = head;
            while (temp) //while temp != nullptr
            {
                cout<< temp->value << endl;
                temp = temp->next;
            }
            
        }
        void getHead() {
            cout<<"head:" << head->value <<endl;
        }
        void getTail(){
            cout<<"Tail:" << tail->value<<endl;
        }
        void getLength(){
            cout<<"Length:" <<length <<endl;
        }

};


int main()
{
    Linkedlist* myLinkedList = new Linkedlist(4);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    myLinkedList->printList();

 return 0;
}