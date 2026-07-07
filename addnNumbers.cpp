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
    Node *addNumbers(vector<Node*>& lists) {
        Node* dummy = new Node(0);
        Node* cur = dummy;
        int carry = 0;
        
        while(true){
            int sum = carry;
            bool nodesLeft = false;
            
            for(int i=0; i<lists.size(); i++){
                if(lists[i] != nullptr){
                    sum += lists[i]->data;
                    lists[i] = lists[i]->next;
                    nodesLeft = true;
                }
            }    
            
            if(!nodesLeft && sum == 0){
                break;
            }
            
            cur->next = new Node(sum%10);
            cur = cur->next;
            carry = sum/10;
        }
        
        return dummy->next;
    }    
};
