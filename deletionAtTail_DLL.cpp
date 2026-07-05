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
    Node* deletionAtTail(Node* head) {
        if(head == nullptr) return head;
        if(head->next == nullptr) {
            delete head;
            return nullptr;
        }
        Node* temp = head;
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        Node* tail = temp->next;
        temp->next=nullptr;
        tail->prev=nullptr;
        delete tail;
        return head;
    }

};
