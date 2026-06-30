#include <iostream>
using namespace std;

//linked list==> single linked list , double linked list 
// dynamic يعني كلشي بتم بالهيب و عمليات الالوكيشن بالرن تايم 
//لازم كل الداتا تكون من نفس النوع 
//الادريس كله بكون عشوائي بينما الداتا متتابعة
// الوحدة الاساسية لبناء اللينكد ليست هي node و مكوناتها تعتمد ع نوع اللينكد ليست
// كل نودة الها مكونين الداتا ( ممكن int , string , double )و البوينتر 
//البوينتر بخزن ادريس
// و هاد البوينتر بنسميه next 
// اللينكد ليست هي عبارة عن مجموعة من النودز
// و بوينتر النيكست بخزن ادريس للنودة الكاملة اللي وراه يعني عشان اربط نودتين سوا بربطهم من خلال بوينتر النيكست بخلي البوينتر ياشر ع نودة كاملة
// و هاد البوينتز خزنا جواه ادريس النودة اللي بعدها و بما انو صار معهنا الادريس تبعها اذن صرنا نقدر نوصل لكل محتوياتها من الداتا او اي اشي تاني دوا هاي النودة
// هاد بالنسبة للنودة و البوينتر المهم فيها 
// بينما اللينكد ليست كلياتها في عندي بوينترين جدا مهمين فيها اول واحد خهو head هاد ما بقدر احرررركهههه ابدااا الا بشروط معينة واذا بحركه بتضيييعععع كل الليست اللي معي
// تاني بوينتر هو tail و هدول بقدرش احركهم الابشروط
// سميناها سنجل لنكد ليست لاني بس بقدر امشي باتجاه واحد ما بقدر ارجع برجوع 
// 
// 
// 
//

class Node {
public:
	int data;
	Node *next;

};
class SLL {
public:
	Node* head = nullptr;
	Node* tail = nullptr;
	void addToLast(int val) {
		// قبل ما اضيف لازم اتاكد انها مش فاضية و يونتا بتكون فاضية لما الهيد و التيل باشروا ع نل
		// و كلما اضيف بدي اعمل نودة جديدة
		Node* p = new Node;
		p->data = val;
		p->next = nullptr;
		if (head == nullptr)
		{
			head = p;
			tail = p;

		}
		else {

			Node* n = head;
			while (n->next != nullptr) {
				n = n->next;
				//بربط بعدها بكسر 
			}
			p->next = n;
			tail = n;
		}
	}
	void print() {
		if (head == nullptr) {
			cout << " empty !";
		}
		else {
			Node* p = head; //لانو بوينتر الهيد ما بنقدر نحركه
			while (p != nullptr) {
				cout << p->data << " ";
				p = p->next;
			}
		}
		cout << endl << " ============================= " << endl;
	}
	bool isEmpty() {// لما الهيد يساوي نل 
		return head == nullptr;
	}
	void addToFirst(int val) {
		// مدام اضافة اذن لازم نودة جديدة
		Node* n = new Node;
		n->data = val;
		n->next = nullptr;
		if (isEmpty()) {
			head = n;
			tail = n;
		}
		else {
			//بربط بعدها بكسر 
			n->next = head;
			head = n;
		}
	}
	void deleteFromFirst() {
		if (isEmpty()) {
			return;
		}
		else {
			Node* p = head;
			head = head->next;
			delete p;


		}
	}
	void deleteFromEnd() {
		if (isEmoty())
			return;

		else {// بدنا بوينترين واحد باشر ع اخر نودة و التاني عالنودة اللي قبل الاخيرة
			Node* del = head;
			Node* ptr = nullptr;
			while (del->next != nullptr) {
				ptr = del; // حتكون متاخرة عن بوينتر ال del ب نودة عشان نخليها تاشر عالنودة اللي قبل الاحيرة اللي بدنا نحذفها 
				del = del->next;
			}
			ptr->next = nullptr;
			delete del;
		}
	}
	Node* search(int val) {// اخنا معنيين برجعلنا الادريس لهاي النودة اللي بتدور عليها
		// و مدام بدي ادور ع قيمة معينة بدي اعمل بوينتر ياشر ع نفس المكان اللي باشر عليه الهيد
		Node* z = head;
		Node* target = nullptr;
		while (p != nullptr) {
			if (p->data == val) {
				target = p;// مجرد ما القى النودة اللي بدور عليها بخلي التارجيت باشر عليها و بعمل بريك لانو خلص فش داعي اضل امشي 
				break;
			}
			p = p->next;
		}
		return target;// احنا بدنا ادريس من نوع نود و التارجيت عرفناه نوعه نود ف بنرجع التارجيت
	}
	void addAfterElement(int x, int y) {

		// هون بدنا نعرف اني لنودة اللي بدو يضيف بعدها و شو القيمة اللي بدو يضيفها
		Node* n = new Node;
		n->data = y;
		n->next = nullptr;
		Node* p = head;
		while (p != nullptr) {
			if (p->data == x) {
				// ما بصير احكي p->next = n لانو اذا عملت هيك رح يضيف اللي بعد p->next كلو لاني ما ربطنه
				n->next = p->next;
				p->next = n;
				break;
			}
			p = p->next;
		}
	}
	void addBeforeElement(int x, int y) {
		// حيستقبل القيمة اللي بدي اضيف قيلها و القيمة اللي بدي اضيفها
		Node* n = new Node;
		n->data = y;
		n->next = nullptr;
		Node* p = search(x);
		if (p == nullptr) {
			cout << " not found";
		}
		else if (p == head) {
			// ممكن القيمة اللي بدي ضيف قبلها تكون الهيد
			n->next = head;
			head = n;
		}

		else {
			Node* prev = head;
			while (prev->next != p) {
				prev = prev->next;
			}
			n->next = p;
			prev->next = n;
		}
	}
	void deleteElement(int x) {
		//قبل ما احذف لازم اعمل عمليات سيرتش عالاشي اللي بدي احذفه
		Node* p = search(x);
		if (p == nullptr) {
			cout << " not found ";
		}
		else if (p == head) {
			head = head->next;
			delete p;
		}
		else {

			Node* prev = head;
			while (prev->next != p) {
				prev = prev->next;
			}
			prev->next = p->next;
			delete p;
		}
	}

	~SLL() {
		while (!isEmpty()) {
			deleteFromFirst();
		}
	}

	


};



int main()
{
  
}
