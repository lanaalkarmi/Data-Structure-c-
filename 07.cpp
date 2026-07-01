#include <iostream>
#include <list>
using namespace std;
//list ==>الاشي الجاهز من اللينكد ليست
//وهو تطبيق للاشي الجاهز من النوع اللي الو ميزات اكتر وهو دبل لينكد لست
//
//
//
//
//class list{


//class it



int main()
{
	list<int>l;
	l.push_back(7);//add to last
	l.push_back(57);
	l.push_back(87);
	l.push_front(77);//add to first
	l.push_back(27);
	
	// لما ننيحي نطبع بالفيكتور كان سهل لانو انديكس بس هون ما عنا انديكس ف حنستخدم الiterator
	//وهاد خنستحدمه مع اي نوع من الداتا ستركتشر غير الفيكتور
	
	list<int>::iterator it;
	list<int>::iterator it=l.begin();

// advance ==> بساعدني اوصل لاي مكان بدي اياه 

	advance(it, 3);// 3 خطوات
	cout << *it<<endl;


	// و بقدر اخليه يرجع برجوع بما انو دبل لنكد ليست ف في عنا prev 

	advance(it, -2);
	cout << *it;

	// عنا ميقود بساعدني اجيب الفاليو اللي موجودة عنا بالبداية front()

	cout << l.front();// وبقدر من خلالها كمان اعدل القيمة
	cout << l.back();
	l.front() = 33;

	// في عنا اشي بيعرف يحدد الداتا تايب لحالها بدون ما انا احدد اسمها auto 
	// ( list<int>::iterator it ) = l.begin();
	// بتغنيني عن السطر اللي بين اقواس كله 
	auto it = l.begin();
	auto x = "lana";// هون بيفهم انو string 

	cout << *next(l.begin(), 2);//هون لو انا مش حابة اتعامل مع الاتريتور

	auto it = l.begin();
	advance(it, 2);
	*it = 200; //update
	// for print by  using for each
	// 

	for (auto i : l) { // تعال عندي ع كل عنصر )i)ب الليست تاغتي و استخدمت auto عشان لحاله يحدد نوع الداتا 
		cout << i << " ";
	}
	// وهاي الطريقة اذا ما بدي اتعامل مع iterator 



	auto it = find(l.begin(),l.end(),30);// هاد بوينتر بساعدني ادور عالقيمة اللي بدي اياها
	if (it != l.end()) {
		cout << "found";
	}

	cout << l.size();
	l.pop_front();
	for (auto i : l) {
		cout << i;
	}

	l.pop_back();
	//لوبدي احذف من النص 
	auto it = l.begin();
	advance(it, 5);
	l.erase(it);

	l.resize(10,-1);
	
	l.sort();
	l.reverse();


	for (it = l.begin(); it != l.end();it++) {//l.end() ==> نهاية الكونتينر مش اخر عنصر
		cout << *it << " ";

	}
	
	list<int>l2{ 7,9,6 };
	l.swap(l2);
	l1.merge(l2);


}
