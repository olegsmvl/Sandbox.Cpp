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
        ListNode* first = nullptr;
        
        ListNode* iter1 = list1;
        ListNode* iter2 = list2;

        if(iter1->val <= iter2->val)
            first = iter1;

        return list1;
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

void print_list(ListNode* list){
    ListNode* node = list;
    
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
    ListNode *list1 = createList(vec_list1);
    ListNode *list2 = createList(vec_list2);
    Solution sol;
    sol.mergeTwoLists(list1, list2);

    print_list(list1);
    print_list(list2);
    return 0;
}
