#include <bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
        
        Node(): data(0), next(nullptr) {}
        Node(int data) : data(data), next(nullptr) {}
        Node(int data, Node* next) : data(data), next(next) {}
};
*/

class solution {
public:    
    Node* addTwoNumbers(Node* a, Node* b) {
        stack<int> s1, s2;
        
        while(a != nullptr){
            s1.push(a->data);
            a = a->next;
        }
        
        while(b != nullptr){
            s2.push(b->data);
            b = b->next;
        }
        
        int carry = 0;
        Node* head = nullptr;
        
        while(!s1.empty() || !s2.empty() || carry != 0){
            int sum = carry;
            if(!s1.empty()){
                sum += s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum += s2.top();
                s2.pop();
            }
            carry = sum/10;
            Node* newNode = new Node(sum%10);
            newNode->next = head;
            head = newNode;
        }
        
        while(head != nullptr && head->data == 0 && head->next != nullptr){
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        
        return head;
    }
};
