class solution {
public:
    Node* sortList(Node* head) {
        if (!head || !head->next) {
            return head;
        }

        // 1. Find the middle node using fast and slow pointers
        Node* slow = head;
        Node* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Split the list into two halves
        Node* mid = slow->next;
        slow->next = nullptr;

        // 3. Recursively sort both halves
        Node* left = sortList(head);
        Node* right = sortList(mid);

        // 4. Merge the two sorted halves
        return merge(left, right);
    }

private:
    Node* merge(Node* l1, Node* l2) {
        Node dummy(0);
        Node* tail = &dummy;

        while (l1 && l2) {
            if (l1->data < l2->data) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        tail->next = l1 ? l1 : l2;
        return dummy.next;
    }
};
