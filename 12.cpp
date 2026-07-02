#include <iostream>
using namespace std;

//binary search tree==> اهم نوع من انواع التري بتساعدني كتير بعمليات البحث و بتقلل التايم
//عنا شروط لازم بتحققوا عشان احكي انو هاي بايناري سيرش تري 
// 1- لازم تكون بايناري يعني الها ابنين او ابن او ولا ابن بس توبها ابنين
// 2- كل القيم اللي عاليسار لازم اقل من الروت و كل القيم اللي عالرايت اكبر من الروت
// 3- ممنوووع تكرار القيم
// و تتبع قاعدة log n
// 
//
//
//

class node {
public:
    int data;
    node* left;
    node* right;
    node() {
        this->data = 0;
        this->left = nullptr;
        this->right = nullptr;
    }
    node(int data, node* left, node* right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
class BST {
    //اهم بوينتر هون هو الروت
    node* root;
public:
    BST() {
        root = nullptr;
    }

    bool search(int value) {
        node* p = root;
        while (p != nullptr) {
            if (value == p->data)
                return true;
            if (value > p->data) {
                p = p->right;
            }
            else
                p = p->left;
        }
        return false;
    }

    bool isempty() {
        return root == nullptr;
    }

    void add(int val) {
        if (search(val)) return;

        node* n = new node(val, nullptr, nullptr);
        if (isempty())
            root = n;
        else {
            node* p = root;
            // هون انا ما بعرف لحد وين انا بدي اوقف يعني بدي اضل امشي و ابحث اذا لقيت مكان مناسب بضيف فيه
            while (1) {
                if (val > p->data) {
                    // بدنا نتاكد اذا الرايت تاعها كان فاضي او لا
                    if (p->right == nullptr) break;// عشان بس اطلع من اللوب اضيف
                    p = p->right;

                }
                else {
                    if (p->left == nullptr) break;
                    p = p->left;

                }
                if (val > p->data) {
                    p->right = n;
                }
                else {
                    p->left = n;
                }
            }

        }
    }
    int getMin() {
        node* p = root;
        while (p->left != nullptr) {
            p = p->left;
        }
        return p->data;
    }
    int getMax() {
        node* p = root;
        while (p->right != nullptr) {
            p = p->right;
        }
        return p->data;
    }

    };







int main()
{
    BST b;
    b.add(6);
    b.add(61);
    b.add(34);
    b.add(62);

}

