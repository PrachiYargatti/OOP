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
    Node* deletionAtHead(Node* head) {
        if(head == nullptr) return head;
        if(head->next == nullptr) {
            delete head;
            return nullptr;
        }
        Node* cur = head;
        head = head->next;
        head->prev = nullptr;
        cur->next = nullptr;
        delete cur;
        return head;
    }

};
