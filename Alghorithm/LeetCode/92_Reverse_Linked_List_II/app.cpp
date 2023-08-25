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
  ListNode *reverseBetween(ListNode *head, int left, int right) {
    if (left == right) {
      return head;
    }

    auto l = head;
    auto r = head;
    ListNode *start = nullptr;
    ListNode *end = nullptr;
    ListNode *border_l = nullptr;
    ListNode *border_r = nullptr;

    ListNode *prev = nullptr;
    ListNode *nex = nullptr;

    if (left == 1) {
      start = head;
    }

    while (right > 1) {
      while (left > 1) {
        border_l = l;
        l = l->next;
        r = r->next;
        left--;
        right--;
        prev = border_l;
        start = l;
        end = l;
      }

      nex = r->next;
      r->next = prev;
      prev = r;
      r = nex;
      border_r = r->next;
      end = r;
      right--;
    }

    r->next = prev;

    print_node(border_l, "border_l");
    print_node(start, "start");
    print_node(end, "end");
    print_node(border_r, "border_r");

    start->next = border_r;

    if (border_l) {
      border_l->next = end;
    } else {
      head = end;
    }

    return head;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> vec_list{1, 2, 3, 4};
  ListNode *list = createList(vec_list);
  print_list(list);

  Solution sol;
  auto head = sol.reverseBetween(list, 1, 1);

  print_list(head);

  return 0;
}
