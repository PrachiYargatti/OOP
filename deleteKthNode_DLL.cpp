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
    Node* deleteKthNode(Node* head, int k) {
        if(head == nullptr) return nullptr;
        if(k == 0){
            if(head->next == nullptr){
                delete head;
                return nullptr;
            }
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            temp->next = nullptr;
            delete temp;
            return head;
        }
        
        Node* temp = head;
        int count = 0;
        
        while(temp!=nullptr){
            if(count == k) break;
            count++;
            temp = temp->next;
        }
        
        if(temp == nullptr){
            return head;
        }
        
        Node* back = temp->prev;
        back->next = temp->next;
        temp->next->prev = back;
        delete temp;
        return head;
    }

};
