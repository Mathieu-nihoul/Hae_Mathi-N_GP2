#include "pch.h"
#include "Node.hpp"

Node * Node::merge(Node * a0, Node * a1) {
	if (a0 == nullptr) return nullptr;
	if (a1 == nullptr) return a0;

	float val = a1->getMin();
	Node * cur = a0;
	cur = cur->heapify(val);
	Node * l = a1->left;
	Node * r = a1->right;
	a1->left = nullptr;
	a1->right = nullptr;

	delete a1;

	cur = merge(cur, l);
	cur = merge(cur, r);

	return cur;
}
