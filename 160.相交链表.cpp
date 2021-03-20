/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start

//Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pa = headA;
        ListNode* pb = headB;
        while(1)
        {
            if(!pa && !pb)      return nullptr;
            if(!pa)             pa = headB;
            if(!pb)             pb = headA;
            if(pa == pb)        return pa;
            pa = pa->next;
            pb = pb->next;
        }
    }
};
// @lc code=end

