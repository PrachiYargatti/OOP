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
        if (!head || !head->next) return head;

        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect Cycle
        bool hasLoop = false;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                hasLoop = true;
                break;
            }
        }

        // If no loop exists, return head as is
        if (!hasLoop) return head;

        // Step 2 & 3: Handle Edge Case (Loop starts at the head itself)
        if (slow == head) {
            while (fast->next != head) {
                fast = fast->next;
            }
            fast->next = nullptr;
            return head;
        }

        // Step 2 & 3: Find loop start and remove loop
        slow = head;
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        // Break the loop
        fast->next = nullptr;

        return head;
        
        // unordered_set<Node*> visited;
        // Node* curr = head;
        // Node* prev = nullptr;
        
        // while(curr != nullptr){
        //     if(visited.count(curr)){
        //         prev->next = nullptr;
        //         break;
        //     }
        //     visited.insert(curr);
        //     prev = curr;
        //     curr = curr->next;
        // }
        
        // return head;
        
    }
};
