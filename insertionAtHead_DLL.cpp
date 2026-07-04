#include<bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int value, Node* next_Address, Node* prev_Address){
            data = value; 
            next = next_Address; 
            prev = prev_Address;
        }
        Node(int value){
           data = value;
           next = nullptr;
           prev = nullptr;
        }
};
*/

class solution {
public:
    Node* insertionAtHead(Node* head, int a) {
        if(head == nullptr){
            return new Node(a);
        }
        Node* temp = new Node(a, head, nullptr);
        head->prev = temp;
        return temp;
    }

};
