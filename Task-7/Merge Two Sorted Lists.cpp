// Submission: https://leetcode.com/problems/merge-two-sorted-lists/submissions/861053148/

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *merged = nullptr, *head = nullptr;
        
        if (list1 == nullptr || list2 == nullptr) {
            if (list1 != nullptr)
                merged = list1, list1 = list1->next;
            if (list2 != nullptr)
                merged = list2, list2 = list2->next;
        } else {
            if (list1->val < list2->val)
                merged = list1, list1 = list1->next;
            else
                merged = list2, list2 = list2->next;
        }

        head = merged;

        if (head == nullptr)
            return head;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                merged->next = list1;
                merged = merged->next;
                list1 = list1->next;
            } else {
                merged->next = list2;
                merged = merged->next;
                list2 = list2->next;
            }
        }

        while (list1 != nullptr) {
            merged->next = list1;
            merged = merged->next;
            list1 = list1->next;
        }
        
        while (list2 != nullptr) {
            merged->next = list2;
            merged = merged->next;
            list2 = list2->next;
        }

        return head;
    }
};
