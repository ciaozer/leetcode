/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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
    ListNode* deleteDuplicates(ListNode* head) {
        if( !head || !head->next )      return head;
        int curval = head->val;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* p = head->next;
        ListNode* pre = head;
        ListNode* nex;
        ListNode* prepre = dummy;
        int flag = 0;
        while(p)
        {
            nex = p->next;
            if( curval == p->val )
            {
                prepre->next = p;
                pre->next = nullptr;
                flag = 1;
                p = nex;
                pre = p;
            }
            else
            {
                curval = p->val;
                if( flag == 1 )
                {
                    prepre->next = p;
                    pre->next = nullptr;
                    flag = 0;
                    p = nex;
                    pre = p;
                }
                else 
                {
                    p = nex;
                    pre = p;
                    prepre = pre;
                }
            }
        }
        return dummy->next;
    }
};
// @lc code=end

