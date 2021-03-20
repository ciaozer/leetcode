/*
 * @lc app=leetcode.cn id=138 lang=cpp
 *
 * [138] 复制带随机指针的链表
 */

// @lc code=start

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* p = head;
        Node* ans = new Node(0);
        Node* anshead = ans;
        while(p)
        {
            ans->next = new Node(p->val);
            p = p->next;
            ans = ans->next;
        }
        p = head;
        ans = anshead->next;
        while(p)
        {
            
        }
    }
};
// @lc code=end

