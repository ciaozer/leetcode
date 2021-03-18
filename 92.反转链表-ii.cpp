/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *newleft, *newhead, *newtail, *newright, *p;
        p = dummy;
        for( int i=1; i<left; i++, p=p->next );
        newleft = p;
        p=p->next;
        newhead = p;
        for( int i=1; i<=right-left; i++, p=p->next );
        newtail = p;
        newright = newtail->next;
        newleft->next = nullptr;
        newtail->next = nullptr;
        revlist(newhead);
        newleft->next = newtail;
        newhead->next = newright;
        return dummy->next;
    }

    void revlist(ListNode* head)
    {
        ListNode* pre = nullptr;
        ListNode* cur = head;
        while(cur)
        {
            ListNode* nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        return ;        
    }
};
// @lc code=end

