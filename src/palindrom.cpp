#include "palindrom.h"

bool isPalindrom(CNode *head) {
  int size = 0;
  CNode* node = head;

  while (node != 0) {
    size++;
    node = node->next;
  }
  int mid = size / 2;
  for (int i = 0; i < mid; i++) {
    if (head[i].data != head[size - 1 - i].data)
      return false;
  }
  return true;
}
