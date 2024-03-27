#include "iostream"
using namespace std;

class Node{
public:
    int value;
    Node *next;

    Node(){
        value = 0;
        next = NULL;
    }

    Node(int value){
        this->value=value;
        this->next=NULL;
    }

};

class LinkedList {
    Node *head{};
public:
    LinkedList() { head = NULL; }

    LinkedList(int val) { head = new Node(val); }

    void printAll() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }

    void insertBack(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) head = newNode;
        else {
            Node *temp = head;
            while (temp->next != NULL) { temp = temp->next; }
            temp->next = newNode;
        }
    }

    int Length(Node* temp){
        if(temp == NULL) return 0;
        return 1 + Length(temp->next);
    }

    int Length(){return Length(head);}
};

int main(){
    int n;
    LinkedList l;
    while(cin >> n) l.insertBack(n);
    cout << l.Length();
}