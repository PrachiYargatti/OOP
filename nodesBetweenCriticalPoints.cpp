/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next || !head->next->next){
            return {-1, -1};
        }

        ListNode* prev = head;
        ListNode* cur = head->next;
        ListNode* next = cur->next;

        // firstCP: Index of the first critical point (to calculate maxDistance).

        // prevCP: Index of the previous critical point (to calculate minDistance).
        int firstCP = -1, prevCP = -1;
        int minDistance = INT_MAX;
        int index = 1;

        while(next != nullptr){
            if ((cur->val < prev->val && cur->val < next->val) || 
                (cur->val > prev->val && cur->val > next->val)) {
                
                if (firstCP == -1) {
                    firstCP = index;
                } else {
                    minDistance = min(minDistance, index - prevCP);
                }
                prevCP = index;
            }

            prev = cur;
            cur = next;
            next = next->next;
            index++;
        }

        if (minDistance == INT_MAX) {
            return {-1, -1};
        }

        int maxDistance = prevCP - firstCP;
        return {minDistance, maxDistance};
    }
};
