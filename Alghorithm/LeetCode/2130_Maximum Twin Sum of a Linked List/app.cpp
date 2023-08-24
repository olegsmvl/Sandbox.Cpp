#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *insert(ListNode *node, int value) {
  if (node == nullptr)
    return new ListNode(value);

  return new ListNode(value, node);
}

ListNode *createList(vector<int> &vec) {
  ListNode *first = nullptr;
  auto iter = vec.end();
  while (iter != vec.begin()) {
    iter--;
    first = insert(first, *iter);
  }
  return first;
}

void print_list(ListNode *list) {
  ListNode *node = list;

  while (node != nullptr) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
}

void print_node(ListNode *node, string name) {

  cout << name << " ";

  if (node == nullptr) {
    cout << "nullptr" << endl;
    return;
  }

  if (node->next == nullptr) {
    cout << "val:" << node->val << " next: nullptr" << endl;
    ;
    return;
  }

  cout << "val:" << node->val << " next:" << node->next->val << endl;
}

class Solution {
public:
  int pairSum(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = head;

    while (fast && fast->next )
    {
      prev = slow;
      slow = slow->next;
      fast = fast->next->next;
    }

    ListNode* medium = prev;

    ListNode* rev = reverse(medium->next);

    medium->next = rev;
    // reversed from center

    slow = head;
    fast = rev;

    int sum_max = 0;

    while (fast){
      sum_max = max(sum_max, slow->val + fast->val);
      slow = slow ->next;
      fast = fast-> next;
    }

    return sum_max;
  }

  ListNode* reverse(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next_node = nullptr;
    

    while (curr)
    {
      next_node = curr -> next;
      curr->next = prev;
      prev = curr;
      curr = next_node;
    }
    return prev;
  }
};

int main() {
  vector<int> vec_list{1, 1000};
  ListNode *list = createList(vec_list);
  print_list(list);

  Solution sol;
  auto res = sol.pairSum(list);

  cout << res << endl;

  return 0;
}
