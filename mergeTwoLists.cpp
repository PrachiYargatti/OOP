#include <bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
        Node(int data, Node* next) : data(data), next(next) {}
        Node(int data) : data(data), next(nullptr) {}
};
*/

class solution {
public:
    Node* mergeTwoLists(Node* head1, Node* head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* dummy = new Node(0);
        Node* cur= dummy;
        
        while(temp1 && temp2){
            if(temp1->data <= temp2->data){
                cur->next = temp1;
                temp1= temp1->next;
                cur = cur->next;
            }
            else{
                cur->next = temp2;
                temp2 = temp2->next;
                cur = cur->next;
            }
        }
        if(temp1) cur->next = temp1;
        else cur->next = temp2;
        
        return dummy->next;
    }
};
