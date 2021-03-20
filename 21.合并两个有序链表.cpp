/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start

//Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode;
        ListNode* head = ans;
        while( l1 || l2 )
        {
            if( !l1 )
            {
                ans->next = new ListNode(l2->val);
                l2 = l2->next;
                ans = ans->next;
            }
            else if( !l2 )
            {
                ans->next = new ListNode(l1->val);
                l1 = l1->next;
                ans = ans->next;
            }
            else
            {
                if( l1->val < l2->val )
                {
                    ans->next = new ListNode(l1->val);
                    l1 = l1->next;
                    ans = ans->next;
                }
                else
                {
                    ans->next = new ListNode(l2->val);
                    l2 = l2->next;
                    ans = ans->next;
                }
            }
        }
        return head->next;
    }
};
// @lc code=end

