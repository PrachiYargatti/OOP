#include <bits/stdc++.h>
using namespace std;

/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(NULL){}
};
*/

class solution {
public:
    Node* removeLoop(Node* head) {
        unordered_set<Node*> visited;
        Node* curr = head;
        Node* prev = nullptr;
        
        while(curr != nullptr){
            if(visited.count(curr)){
                prev->next = nullptr;
                break;
            }
            visited.insert(curr);
            prev = curr;
            curr = curr->next;
        }
        
        return head;
        
    }
};
