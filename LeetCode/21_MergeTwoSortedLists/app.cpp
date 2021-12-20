#include <iostream>
#include <vector>
using namespace std;

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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *first = nullptr;
        ListNode *iter3 = nullptr;

        ListNode *iter1 = list1;
        ListNode *iter2 = list2;

        if (iter1 == nullptr && iter2 == nullptr)
            return nullptr;

        if (iter1 == nullptr){
            first = iter2;
            iter2 = iter2->next;
        }

        else if (iter2 == nullptr){
            first = iter1;
            iter1 = iter1->next;
        }

        else if (iter1->val <= iter2->val)
        {
            first = iter1;
            iter1 = iter1->next;
        }
        else if (iter1->val > iter2->val)
        {
            first = iter2;
            iter2 = iter2->next;
        }
        first->next = nullptr;
        iter3 = first;

        while (iter1 != nullptr || iter2 != nullptr)
        {
            if (iter1 == nullptr){
                iter3->next = iter2;
                iter2 = iter2->next;
                iter3 = iter3->next;
                continue;
            }
            if (iter2 == nullptr){
                iter3->next = iter1;
                iter1 = iter1->next;
                iter3 = iter3->next;
                continue;
            }

            if (iter1->val <= iter2->val)
            {
                iter3->next = iter1;
                iter1 = iter1->next;
            }
            else{
                iter3->next = iter2;
                iter2 = iter2->next;
            }
            iter3 = iter3->next;
        }

        return first;
    }
};

ListNode *insert(ListNode *node, int value)
{
    if (node == nullptr)
        return new ListNode(value);

    return new ListNode(value, node);
}

ListNode *createList(vector<int> &vec)
{
    ListNode *first = nullptr;
    auto iter = vec.end();
    while (iter != vec.begin())
    {
        iter--;
        first = insert(first, *iter);
    }
    return first;
}

void print_list(ListNode *list)
{
    ListNode *node = list;

    while (node != nullptr)
    {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> vec_list1{1, 2, 4};
    vector<int> vec_list2{1, 3, 4};
    // ListNode *list1 = createList(vec_list1);
    ListNode *list1 = nullptr;
    ListNode *list2 = createList(vec_list2);
    print_list(list1);
    print_list(list2);
    Solution sol;
    ListNode *list3 = sol.mergeTwoLists(list1, list2);
    print_list(list3);

    return 0;
}
