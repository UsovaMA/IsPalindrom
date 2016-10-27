#include "palindrom.h"

bool isPalindrom(CNode *head) {
	int size = 0;
	CNode* node = head;

	while (node != 0) {
		size++;
		node = node->next;
	}

	/*int offset = size - 1;

	for (int i = 0; i < size / 2; ++i) {
	node = head;
	for (int j = 0; j < offset; ++j)
	node = node->next;

	if (node->data != head->data) {
	return false;
	}

	head = head->next;
	node = node->next;
	offset -= 2;
	}

	return true;
	*/

	node = head;
	CNode *mas = new CNode[size];
	int mid = size / 2;

	for (int i = 0; i < size; i++) {
		mas[i] = node->data;
		node = node->next;
	}

	for (int i = 0; i < mid; i++) {
		if (mas[i].data != mas[size - 1 - i].data)
			return false;
	}

	return true;
}