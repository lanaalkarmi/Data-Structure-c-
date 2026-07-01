#include <iostream>
using namespace std;


// queue == fifo first in first out
//هون عنا بوينترين مهمين front , back
//البوينترين المهمين باللينكد ليست هم head , tail
// بنشوفها بخدمة العملاء و data buffering 
// عمليات الاضافة هون من الباك بس الحذف من الفرونت
// عمليات الاضافو عالبداية هون اسمها enqueue 
// و الحذف dequeue 
// و هون بقدرش امر ع اي عنصر اذا ما مرقت عن الفرونت و بالستاك اذا ما مرقت عن التوب
// عمليات الاضافة عالباك و الحذف من الفرونت
//
//
//
class node {
public:
    int data;
    node* next;
};


class queue {
public:
    node* back = nullptr;
    node* front = nullptr;

    bool isempty() {
        return front == nullptr;
    }
    void enqueue(int x) {
        node* n = new node;
        n->data = x;
        n->next = nullptr;
        if (isempty()) {
            front = back = n;
        }
        else {
            back->next = n;
            back = n;
        }
    }
    void dequeue() {
        if (isempty()) {
            return;
        }

        else if (front == back) {//ممكن يكون فيها بس عنصر واحد 
            node* p = front;
            front = back = nullptr;
            delete p;
        }
        else {
            node* p = front;
            front = front->next;
            delete p;
        }
    }
    int getfront() {
        return front->data;
    }
    int getback() {
        return back->data;
    }
    void display() {
        if (isempty())return;
        node* p = front;
        while (p != nullptr) {
            cout << p->data;
            p = p->next;
        }
        cout << endl;
    }






};







int main()
{
    std::cout << "Hello World!\n";
}
