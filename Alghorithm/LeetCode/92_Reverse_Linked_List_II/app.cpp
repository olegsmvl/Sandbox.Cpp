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
  ListNode *deleteDuplicates(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head->next;

    while (fast && fast->next) {

      while (fast != nullptr && fast->val == slow->val) {
        fast = fast->next;
      }

      slow->next = fast;
      slow = slow->next;

      print_node(fast, "fast");
      print_node(slow, "slow");
    }

    return head;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> vec_list{1, 1, 2, 3, 3};
  ListNode *list = createList(vec_list);
  print_list(list);

  Solution sol;
  sol.deleteDuplicates(list);

  print_list(list);

  return 0;
}
