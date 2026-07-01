#include <iostream>
using namespace std;


// TREE 


//nonlinear ds ==> tree وهي نوع خاث من اشي بسميه graph
//شكل هرميو و بكون الروت من فوق و التفرعات من تحت
// بناء التري رح اعتمد ع لنكد ليست مو ارري ليست
// بالتري كل نودة الها 3 شغلات الداتا و بوينتر الليفت و بوينتر الرايت
//النودة اللي بتكون ماسكة التري كلياتها هي الروت اذا ضاعت بتكون ضاعت التري كلها و هاد اهم بوينتر فيها
// ابناء الروت اسمها parent و 
// ابناء ال parent اسممهم child 
// و اخر نودز اللي ما الهم ابناء ولا تغرعات ولا شي اسمهم leaf
// اقصى عدد ابناء لاي نودة هو تنين و من هون بيجي مصطلح ال arity وهو اقصى عدد ابناء للنودة الوحدة 
// دراستنا للتري تعتمر ع binary search tree
// و عندي مصطلح اسمو depth بيعتمد ع level و ارقام الليفلز بتبلش من الروت من رقم 0
// left ==> 2n
// right ==>2n+1
// لما بدي اجي اعرف حجم الاري ==> 2^num of level 
// 2^numof levels -1
// traverse ==> امشي عالداتا اللي عندي لاطبعها
//عنا كذا طريقة للترافيرس 
// DEPTH FIRST SEARCH
// 1. DFS ==>( IN - ORDER ( LEFT ROOT RIGHT ) , PRE - ORDER (ROOT LEFT RIGHT ) , POST - ORDER ( LEFT RIGHT ROOT)
// لانو هون الداتا مش لينير مش متتابعة فما بقدر اوصلها بلوب عادي
// BFS ==> هاي برمجتها صعبة جدا و معقدة بتعتمد ع QUEUE
// 
//
//
//
//
class node{





int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
