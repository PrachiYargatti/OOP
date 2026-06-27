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
    Node* insertionAtTail(Node* head, int a) {
        if(head == nullptr){
            Node* n = new Node(a);
            return n;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        Node* n = new Node(a);
        temp->next = n;
        return head;
    }

};
