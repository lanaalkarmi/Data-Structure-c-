#include <iostream>
#include <vector>
using namespace std;


//vector --> الاشي الجاهز من الارري ليست و كل الميثودز اللي تخدناهم موجودين جوا احنا بس بنستدعيهم
// و لما حكيت انو اشي داهز كلاس داهز معناتو اشي لازم استدعيه
//كل داتا ستركتشر فيها الها اشي جاهز منها يعني لما بدي احل مش لازم اضل اعمل كلاسات 
//و يما انو الفيكتور كلاس اذا عشان استحدمه لازم اخد اوبجيكت 
//الداتا ستركتشر كلها حتكون مبينة ع template اللي اخدناها ب oop
//باللي انا ببنيها بكون في عندها مشاكل بالاوفر لودينج
//عندي بوينتر باشر ع اول مكان بالارري بساعدني اوصل لاول عنصر اسمه begin()
// هو عبارة عن ميثود برجعلي ادريس 
//بوينتر الداينامك( الهيب) بقدر احركه مش ثابت متل الستاك
// النوعين الوجيدين من الداتا ستركتشر اللي فبهم انديكس هم ارري و ارري ليست ف مش دايماا حيزبط عنا الطباعة ب لوب ف حنصير نستخدم شي اسمه 
//iterator







int main()
{
	vector<int>list;
	list.push_back(8);//add to last
	list.push_back(86);//و بينضافوا حسب الانديكس
	list.push_back(18);
	list.push_back(85);
	list.push_back(68);
	list.push_back(95);
	cout << list.size() << endl;//get size
	cout << list.capacity() << endl;//get capacity
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
	list.pop_back();//delete from last
	list.clear();
	cout << endl << "=================================" << endl;
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
	list.shrink_to_fit();
	cout << list.capacity() << endl;



	cout << endl << "=================================" << endl;

	//ممكن انا اجي اعطي الكابستي للفيكتور 
	vector<int>list(2);
	list[0] = 1;
	list[1] = 11;
	list[2] = 51;
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
	cout << list.capacity() << endl;// هوم ما رح يعمل اكسباند لانو المسؤول عن هاي العمليات هو ال push back
	// ف البش باك هي المسؤولة عن عمليات الاكسباند بدونها ما بصير اكسباند


	cout << endl << "=================================" << endl;

	vector<int>list = { 1,2,4 };
	vector<int>list1 = list;//copy
	cout << *(list.begin());
	list.insert(list.begin(), 50);
	list.insert(list.begin() + 2, 50);
	vector<int>::iterator it;// الايتيريتور هو عبارة عن اشي باشر ع بوينتر معين
	// اشي باشر ع بوينتر فهو بوينتر 
	for (it = list.begin(); it != list.end(); it++) {
		cout << *it << endl;
	}
	// end هون مش اخر عنصر انما هي انو تصير تاشر ع null



}
