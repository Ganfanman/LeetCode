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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list{nullptr};
        if(list1 == nullptr || list2 == nullptr)
        {
            list = (list1==nullptr)?list2:list1;
        }
        else
        {
            if(list1->val > list2->val)
            {
                ListNode* temp{list1};
                list1 = list2;
                list2 = temp;
            }
            list = list1;
            ListNode* current = list1;
            ListNode* current2 = current;
            while(current->next != nullptr)
            {
                current = current->next;
            }
            current->next = list2;
            current = list;
            while(current != nullptr)
            {
                current2 = current;
                while(current2 != nullptr)
                {
                    if(current2->val < current->val)
                    {
                        int temp = current->val;
                        current->val = current2->val;
                        current2->val = temp;
                    }
                    current2 = current2->next;
                }
                current = current->next;
            }
        }
        return list;
    }
};
