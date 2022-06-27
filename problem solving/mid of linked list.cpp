#include <iostream>

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
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *curr = head;
        int count = 0, mid = 0;
        while (head)
        {
            if ((count / 2) != mid)
            {
                mid = count / 2;
                if (mid * 2 != count)
                    curr = curr->next;
                curr = curr->next;
            }
            head = head->next;
            count++;
        }
        return curr;
    }
};

void add(ListNode *list, int value) {}

int main()
{

    ListNode *my_list = nullptr;

    system("pause");
    return 0;
}