#include <bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* nextNode) : data(x), next(nextNode) {}
};
*/
class solution{
    public:
        Node* reverseList(Node* head){
            Node* prev = nullptr;
            Node* curr = head;
            
            while(curr){
                Node* nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }
            return prev;
        }
    
        Node* maximumToRight(Node* head) {
            if(!head) return nullptr;
            
            head = reverseList(head);
            
            Node* curr = head;
            int max_val = curr->data;
            
            while(curr && curr->next){
                if(curr->next->data < max_val){
                    curr->next = curr->next->next;
                }
                else{
                    max_val = curr->next->data;
                    curr = curr->next;
                }
            }
            
            return reverseList(head);
    }
};
