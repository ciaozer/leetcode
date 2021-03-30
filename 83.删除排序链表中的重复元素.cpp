/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
        if( !head || !head->next )    return head;
        int curval = head->val;
        ListNode* p = head->next;
        ListNode* pre = head;
        ListNode* nex;
        while(p)
        {
            nex = p->next;
            if( p->val == curval )
            {
                pre->next = p->next;
                p->next = nullptr;
                p = nex;
            }
            else
            {
                curval = p->val;
                p = nex;
                pre = pre->next;
            }
        }
        return head;
    }
};
// @lc code=end

