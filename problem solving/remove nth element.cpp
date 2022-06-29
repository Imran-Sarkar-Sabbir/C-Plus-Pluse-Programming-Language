
#include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{

    void remove_nth(ListNode *node, int &n)
    {
        if (node->next)
            remove_nth(node->next, n);
        if (n == 0)
        {
            ListNode *curr = node->next;
            if (curr)
                node->next = curr->next;
        }
        else
            n--;
    }

public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *new_list_node = new ListNode(0);
        new_list_node->next = head;
        int index = n + 1;
        remove_nth(new_list_node, index);
        return new_list_node->next;
    }
};

ListNode *insert(ListNode *list, int n)
{
    ListNode *new_node = new ListNode;
    new_node->val = n;
    new_node->next = nullptr;
    if (list)
        list->next = new_node;
    return new_node;
}

void print(ListNode *list)
{
    if (!list)
        return;
    cout << list->val << " ";
    print(list->next);
}

//[1,2,3,4,5], n = 2
int main()
{
    ListNode *head = insert(nullptr, 1);
    ListNode *curr = head;
    curr = insert(curr, 2);
    // curr = insert(curr, 3);
    // curr = insert(curr, 4);
    // curr = insert(curr, 5);

    Solution s;
    print(s.removeNthFromEnd(head, 1));

    system("pause");
    return 0;
}