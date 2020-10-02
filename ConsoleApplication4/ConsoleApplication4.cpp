// ConsoleApplication4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "Node.hpp"
#include "DynArr.hpp"
#include <functional>

using namespace std;

void SubFonction() {
	Node* root = new Node(10);
	root = root->heapify(9);
	root = root->heapify(12);
	root = root->heapify(11);
	root = root->heapify(14);
	root = root->heapify(16);
	root = root->heapify(21);

	root = root->remove(14);

}

DynArr<float> * doHeapSort(float* tab, int tabSize) {
	DynArr<float>* f = new DynArr<float>(tabSize);
	Node* root = Node::FromTabRec(tab, tabSize);
	int idx = 0;
	while (root) {
		float val = root->getMin();
		f->Set(idx, root->getMin());
		root = root->deleteMin();
		idx++;
	}
	return f;
}
void SubFonction1() 
{
	DynArr<float>* tab = new DynArr<float>(0);


}

void heapSort() {
	float tf[4] = { 1.0,15.0,-1.0,25.0 };
	DynArr<float>* tab = doHeapSort(tf, 4);

	for (int i = 0; i < 4; i++) {
		cout << tab->Get(i) << "\n";
	}
	cout << endl;
}

int main()
{
	heapSort();
	std::cout << "Hello World!\n";
	cout << endl;
}
