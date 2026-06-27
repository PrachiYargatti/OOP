#include<bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
};
*/

class solution {
public:
    Node* insertionBeforeX(Node* head, int x, int data) {
        if(head == nullptr){
            return nullptr;
        }
        if(head->data == x){
            Node* n = new Node(data, head);
            return n;
        }
        Node* temp = head;
        while(temp != nullptr){
            if(temp->next->data == x){
                Node* n = new Node(data);
                n->next = temp->next;
                temp->next = n;
                break;
            }
            temp = temp->next;
        }
        return head;
    }

};
