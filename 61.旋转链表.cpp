/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
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
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 0;
        ListNode* p = head;
        for( ; p; p=p->next, len++ );
        if( len == 0 )      return head;
        k %= len;
        ListNode* ans = new ListNode(0);
        ListNode* cur = ans;
        p = head;
        for( int i=0; i<len-k; i++, p=p->next );
        while(p)
        {
            cur->next = new ListNode(p->val);
            p = p->next;
            cur = cur->next;
        }
        p = head;
        for( int i=0; i<len-k; i++ )
        {
            cur->next = new ListNode(p->val);
            p = p->next;
            cur = cur->next;
        }
        return ans->next;
    }
};
// @lc code=end

