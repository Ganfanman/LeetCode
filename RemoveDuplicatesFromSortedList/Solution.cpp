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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head != nullptr)
        {
            ListNode* cursor{head};
            ListNode* next{nullptr};
            while(cursor->next != nullptr)
            {
                next = cursor->next;
                if(next->val == cursor->val)
                {
                    cursor->next = next->next;
                }
                else
                {
                    cursor = cursor->next;
                }
            }
        }
        return head;
    }
};
