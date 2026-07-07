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
    public:
        Node(){
            data = 0;
            next = NULL;
        }
};
*/

class solution {
public:
   Node* addTwoNumbers(Node *head1, Node *head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        int carry = 0;
        Node* ans = new Node(-1);
        Node* cur = ans;
        
        while(temp1 || temp2){
            int sum = carry;
            if(temp1) sum += temp1->data;
            if(temp2) sum += temp2->data;
            
            cur->next = new Node(sum%10);
            carry = sum/10;
            
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
            
            cur = cur->next;
        }
        if(carry){
            cur->next = new Node(1);
        }
        
        return ans->next;
    }

};
