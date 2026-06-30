#include <iostream>
using namespace std;


//double linked list


//هون النود مقسمة ل 3 اقسام بوينتر prev  وو الداتا و بوينتر next 
// البوينتر بحجز عندي مساحة بالذاكرة و لكن كلما قللت البوينتر بكون افضل
// و الدبل بتحجز مساحة اكبر من السينجل بسبب وجود البوينترين
// 
//
//
//
//
//
//
//
//
class Node {
public:
	Node* prev;
	int data;
	Node* next;
};

class DLL {
public:
	Node* tail = nullptr;
	Node* head = nullptr;
	void add(int x) {
		Node* p = new Node;
		p->data = x;
		p->prev = nullptr;
		p->next = nullptr;
		if (head == nullptr) {
			head = tail = p;
		}
		else {
			tail->next = p;
			p->prev = tail->next;
			tail = p;
		}
	}
	void print() {
		Node* p = head;
		while (p != nullptr) {
			cout << p->data << " ";
			p = p->next;
		}
	}
	void printRev(){
		Node* p = tail;
		while (p != nullptr) {
			cout << p->data << " ";
			p = p->prev;
		}
	}
	void deleteElement(int x) {
		if (head->data == x) {
			Node* p = head;
			head = head->next;
			head->prev = nullptr;
			delete p;
		}
		else if (tail->data == x) {
			Node* p = tail;
			tail = tail->prev;
			tail->next = nullptr;
			delete p;
		}

	
		else {
			Node* p = head;
			while (p != nullptr) {
				if (p->data == x)
					p->prev->next = p->next;
				p->next->prev = p->prev;
				delete p;
				return;

			}

			p = p->next;

		}
	}
	bool isEmpty() {
		return head == nullptr;
	}

	void addFirst(int x) {

		Node* p = new Node;
		p->data = x;
		p->prev = nullptr;
		p->next = nullptr;
		if (head == nullptr) {
			head = tail = p;
		}
		else {
			p->next = head;
			head->prev = p;
			head = p;
		}
	}




};

int main()
{
   
}
