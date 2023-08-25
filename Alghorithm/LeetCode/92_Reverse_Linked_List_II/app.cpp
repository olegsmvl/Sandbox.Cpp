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

    if ( right - left == 1){
      int l_st = left;
       auto l = head;
       ListNode* pr = nullptr;
      while (l_st > 1){
        pr = l;
        l=l->next;
        l_st --;
      }
      auto r = l->next;
      auto nex = l->next->next;
      
     
      
      r->next = l;
      l->next = nex;

      if (pr){
        pr->next = r;
        return head;
      }

      return r;
    }

    ListNode *l = head;
    ListNode *r = head;
    ListNode *prev_l = nullptr;
    ListNode *prev_r = nullptr;
    ListNode *next_l = head->next;
    ListNode *next_r = head->next;

    if (left == 1) {
      next_l = l->next;
    }

    while (right > 1) {
      right--;

      if (left > 1) {
        prev_l = l;
        l = l->next;
        next_l = l->next;
        left--;
      }

      prev_r = r;
      r = r->next;
      next_r = r->next;
    }

    // print_node(l, "l");
    // print_node(r, "r");
    // print_node(next_l, "next_l");
    // print_node(next_r, "next_r");
    // print_node(prev_l, "prev_l");
    // print_node(prev_r, "prev_r");
    // print_node(head, "head");

    // print_list(head);

    // cout << "==============" << endl;

    l->next = next_r;

    r->next = next_l;

    if (prev_l) {
      prev_l->next = r;
    } else {
      head = r;
    }

    if (prev_r) {
      prev_r->next = l;
    }

    cout << "==============" << endl;

    print_node(l, "l");
    print_node(r, "r");
    print_node(next_l, "next_l");
    print_node(next_r, "next_r");
    print_node(prev_l, "prev_l");
    print_node(prev_r, "prev_r");
    print_node(head, "head");

    return head;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> vec_list{1, 2, 3, 4};
  ListNode *list = createList(vec_list);
  print_list(list);

  Solution sol;
  auto head = sol.reverseBetween(list, 1, 4);

  print_list(head);

  return 0;
}
