#include <iostream>
using namespace std;

//stack ==> في انواع من الداتا بتعتد ع نوع تاني و اول نوع هو الستاك و بطريقة بتلءها بتعتمد عالارري العادية و الارري ليست و اللينكد ليست و الارري ليست ما بدنا اياها عشان عمليات الاكسباند و نفسؤ الشي الارري لانها ثابتة 
//بتعتمد ع مبدا اسمه last input first output (LIFO)
//عمليات الاضافة تتم عالنهاية ع TOP و عمليات الحذف كذلك 
// PUSH ==> ADD 
//اهم بوينتر بالستاك هو التوب 
//DELETE ==> POP
//الستاك بتكون فاضية لما ما يكون في توب 
// بنستخدمه بالمتصفح و العمليات الرياضيةو الريكيرجن
// 
// 
//

class node {
public:
    int data;
    node* next;
};

class stack {
public:
    node* top;
    int size;

    stack() {
        size = 0;
        top = nullptr;

    }
    bool isempty() {
        return top == nullptr;
    }
    int getsize() {
        return size;
    }
    void push(int ele) {
        node* n = new node;
        n->data = ele;
        if (isempty()) {
            top = n;
            size++;
            return;
        }
        else {

            n->next = top;
            top = n;
            size++;

        }
    }
    int pop() {// 
        if (isempty())
            throw runtime_error("stack is empty");
        int pop = top->data;
        node* p = top;
        top = top->next;
        delete p;
        size--;
        return pop;
    }

    int top() {
        if (isempty()) {
            return -1;
        }
        return top->data;
    }
    ~stack() {
        if (!isempty())
        {
            pop();
        }
    }


};



int main()
{
    try {

        stack s;
        s.push(8);
    }
    catch (exception& e) {
        cout << e.what();
    }
    
}

