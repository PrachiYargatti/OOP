#include<bits/stdc++.h>
using namespace std;

/*
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    public:
        Node(int value, Node* next_address, Node* prev_address){
            data = value;
            next = next_address;
            prev = prev_address;
        }
    public:
        Node(int value){
            data = value;
            next = nullptr;
            prev = nullptr;
        }
};
*/

class solution {
public:
   Node* reverseDLL(Node* head) {
       if(head == nullptr || head->next == nullptr){
           return head;
       }
        Node* current = head;
        Node* last = nullptr;
        
        while(current != nullptr){
            last = current->prev;
            current->prev = current->next;
            current->next = last;
            
            current = current->prev;
        }
        
        return last->prev;
    }

};
