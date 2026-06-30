#include <iostream>
using namespace std;
//لما احكي انو البيانات محفوظة عندي بمكان معين يعني بحكي عن داتا ستركتشر
// انسب طريقة لتحزين البيانات و عنا اكثر من نوع داتا ستركتشر لتخزين البيانات و لازم اعرف اختار احسن وحدة اخزن فيها و اول نوع من الداتا ستركتشر اخدناه اللي هو الارري
// اي نوع من انواع الداتا هو عبارة عن كونتينر شكل من اشكال تركيب البيانات 
// linear data structure --> شغلات متتابعة( تتابع بالداتا مو الادريس) ممكن اتعامل مع ادريس عشواىي
// nonlinear -->شغلات غير متتابعة و بنكون معظمها عبارة عن اشكال هرمية ,مافي تتابع بالداتا 
// 2 types of array ==> static array (allocation opera. in compile time)
// dynamic array (heap) (run time )==> لما نتعامل مع الهيب بصير اقدر ادخل السايز من المستحدم عكس الستاك 
// الارري هي fixed اشي ثابت حتى لو تعاملت مع الهيب ما رح يكون عندي عمليات تساعدني و برضو هي اشي منتهي و لكت محاسنها انها مرتبة حسب الاندكس 
// و حكينا اذا بدنا نوصل ل رقم صفر او ثلاث الوصول نفس الاشي لانو عمليات الوصول ثابتة عن طريق الاندكس يعني زمن الوصول للول عنصر نفسه زمن الوصول لاحر واحد
//عمليات الشفتنج لما بدي اضيف رقم بالنص هاد اشي سيء لانو بياخد وقت كبير بالذاكرة 

//---------------------------------------------------------------------------------

//arraylist==> اي نوع غير الارري بكون داينامك بتعامل مع الهيب يعني لازمه بوينتر 
// عنا مصطلحين لازك نعرف نفرق بينهم هون 
//size==>عدد العناصر الفعلية الموجودة عندي بالارري
//capicty==>اقصى عدد عناصر بقدر اخزنه 
//بقدر اضل اضيف طول ما السايز لا يساوي الكابستي طبعا هالشي بالارري العادية و لكن اجا حلها بالارري ليست وهي مصطلح ال expand
// فكرته كلما السايز يساوي الكابستي بروح بضاعف حجم المصفوفة capicty *2نفس الارري بس بضاعف حجمها 
// اي ارري ليست بدي اشتغل عليها بكون فيها السايز و الكابستي و الارري اللي بشتغل عليها
//و بوينتر باشر عالارري اللي بشتغل فيها اي نوع من انواع الداتا ستركتشر هو عبارة عن كلاس و هون كلاس الو سايز و كابستي 
//مشكلتي بالارري هي عمليات الشفتنج
//و مشكلتي بالارري لست هي expand 
//
//
//
//

class ArrayList {
	int size;
	int capicty;
	int* p;
public:
	ArrayList() {
		size = 0;
		capicty = 5;
		p = new int[capicty];
	}
	void expand() {
		capicty *= 2;
		//بعدها بدي اعمل مصفوفة حجمها ضعف الاولى
		int* arr2 = new int[capicty];
		for (int i = 0; i < size; i++) {
			arr2[i] = p[i];
		}
		delete p;//هاد البوينتر العام للجميع بقدر اشوف كلشي حلاله اما arr2 بس لوكال
		p = arr2;
	}

	void addToLast(int val) {
		if (size == capicty)
		{
			expand();
		}

		p[size] = val;//size بساوي رقم الاندكس اللي بدي اضيف عليه
		size++;
	}
	void print() {
		for (int i = 0; i < size; i++) {//بنمشي للسايز مو الكابستي لانو الكابستي ممكن تكون مش ملانة
			cout << p[i] << " " ;
		}
	}
	void deleteFromEnd() {
		//لازم اتاكد بالاول انو المصفوفة مش فاضية 
		if (size != 0) {
			size--;
		}
		else {
			cout << "emptyyy!";
		}
	}
	void addToFirst(int val) {
		//اي عملية اضافة لازم اتاكد انو السايز لا يساوي الكابستي
		if (size == capicty) {
			expand();
		}
		//و بهاي عملييية الشيفتنج لازم افضي اول مكان لما بدي اضيف بدي اعمل شيفتنج يعني لازم افضي اول مكان اذن لازم ازيح من الاحر 

		for (int i = size - 1; i >= 0; i--) {
			p[i + 1] = p[i];
		}
		p[0] = val;

	}
	void removeFromFirst() {
		if (size == 0) {
			return;
		}
		for (int i = 0; i < size-1; i++) {
			p[i] = p[i + 1];
		}
		size--;
	}
	void updateValue(int index, int val) {
		if (index >= 0 && index <= size) {
			p[index] = val;
		}
		else {
			cout << "invalid index";
		}
	}
	int getSize() {
		return size;
	}
	int getCapicty() {
		return capicty;
	}
	void removeByIndex(int index) {
		if (index >= 0 && index <= size) {
			for (int i = index; i < size - 1; i++) {
				p[i] = p[i + 1];
			}
			size--;
		else {
			cout << " invalid idx" << endl;
		}
		}
		bool search(int x) {
			if (size == 0) return;
			for (int i = 0; i < size; i++) {
				if (p[i] == x)
					return true;
			}
		}
		return false;
	}
	void clear() {// لما بدي احذف كل عناصر المصفوفة السايز بنخليه يساوي صفر 
		size = 0;//ولكن بالحقيقة احنا ما حذفناهن و لما ننرجع نضيف قيم احنا بنعدل عليهن 
	}
	int getValue(int index) {
		if (index >= 0 && index <= size) {
			return p[index];

		}
		else {
			return -1;//هون يعني الانديكس مش موجود 
		}
	}
	~ArrayList() {
		//لما اطلع من البرنامج مافي داعي تضل عندي هاي الارري بالبرنامج 
		delete[]p;
	}
	void shrinkToFit() {
		capicty = size;
		int* temp = new int[capicty];
		for (int i = 0; i < size; i++) {
			temp[i] = p[i];
		}
		delete[]p;
		p = temp;
	}

};




int main()
{

	ArrayList list;
	list.addToLast(7);
	list.addToLast(37);
	list.addToLast(57);
	list.addToLast(67);//عمليات الاضافة تعتمد عالسايزززز
	list.addToLast(78);
	list.addToLast(97);
	list.print();
	cout << endl ;
	cout << "===================";
	cout << endl;
	list.deleteFromEnd();
	list.print();
	cout << endl;
	cout << "=====================";
	cout << endl;
	list.addToFirst(9);
	list.print();
	cout << endl;
	cout << "=====================";
	cout << endl;
	list.removeFromFirst();
	list.print();
	cout << endl;
	cout << "=====================";
	cout << endl;
	list.updateValue(3, 100);
	list.print();
	cout << list.getSize() << endl;
	cout << list.getCapicty() << endl;
	cout << endl;
	cout << "=====================";
	cout << endl;
	list.removeByIndex(2);
	list.print();
	cout<<list.search(67)<<endl;
	cout << list.getValue(2) << endl;
	cout << list.getCapicty() << endl;
	list.shrinkToFit();
	cout << list.getCapicty() << endl;



}

