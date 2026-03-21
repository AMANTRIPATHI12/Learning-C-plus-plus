#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this -> data = data;
            next = nullptr;
        }
};

int main(){
    cout << "Hello multiverse" << endl;
    Node n1(67);
    Node n2(41);
    n1.next = &n2;
    Node n3(69);
    n2.next = &n3;
    Node* temp = &n1;
    while (temp != nullptr){
        cout << temp->data << endl;
        temp->next;
    }
}

// Note - temp->next is equavalent to (*temp).data;