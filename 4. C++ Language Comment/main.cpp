#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //singal line //
    //multi-line */  */
    return 0;
}


সি++ (C++) ল্যাঙ্গুয়েজে Keyword (কিওয়ার্ড) হলো এমন কিছু নির্দিষ্ট শব্দ যা ওই ভাষার ব্যাকরণ বা সিনট্যাক্স তৈরিতে ব্যবহৃত হয়।

সহজ বাংলায় বলতে গেলে: সি++ ল্যাঙ্গুয়েজ যারা তৈরি করেছেন, 
তারা আগে থেকেই কিছু শব্দ কম্পিউটারের কাছে সুনির্দিষ্ট কোনো কাজের জন্য বুক বা রিজার্ভ (সংরক্ষিত) করে রেখেছেন। এগুলোকেই কিউওয়ার্ড বলে।

যেহেতু এগুলো আগে থেকেই সংরক্ষিত, তাই এদের Reserved Words-ও বলা হয়ে থাকে। চাইলে নিজের মতো করে এই শব্দগুলোর অর্থ বা কাজ পরিবর্তন করা যাবে না।

সি++ কিউওয়ার্ডের মূল নিয়মসমূহ (Rules):
১. ছোট হাতের অক্ষর: সি++ এর সব কিউওয়ার্ড সবসময় ছোট হাতের অক্ষরে (Lowercase) লিখতে হয়।
যেমন: int সঠিক, কিন্তু INT বা Int লিখলে তা কিউওয়ার্ড থাকবে না (এরর আসবে)।

২. ভেরিয়েবলের নাম হিসেবে নিষিদ্ধ: নিজের তৈরি কোনো ভেরিয়েবল, 
ফাংশন বা ক্লাসের নাম (Identifier) হিসেবে কোনো কিউওয়ার্ড ব্যবহার করতে পারবেন না। 
যেমন: int if = 5; লিখলে কোড রান করবে না, কারণ if একটি কিউওয়ার্ড।


C++ ল্যাঙ্গুয়েজে মূল সংরক্ষিত কিওয়ার্ড (Reserved Keywords) হলো ৯৫টি (C++20/C++23 Modern Standard)।

1. Traditional C++ (C++98 / C++03) — ৬৩টি কিওয়ার্ড
C++ এর একদম প্রাথমিক ভার্সনে C-এর মূল ৩২টি কিওয়ার্ড ধরে রাখা হয় এবং সাথে আরও ৩১টি নতুন কিওয়ার্ড যোগ করে মোট ৬৩টি কিওয়ার্ড নির্ধারণ করা হয়।

C++ এ যোগ হওয়া প্রধান বিষয়ভিত্তিক কিওয়ার্ডসমূহ:

বিষয়                    সংরক্ষিত কিওয়ার্ডসমূহ

Object-Oriented (OOP)	- class, public, private, protected, virtual, friend, this

Dynamic Memory	        - new, delete

Boolean Data Type	    - bool, true, false

Exception Handling      - try, catch, throw

Type Casting Operators	- static_cast, dynamic_cast, const_cast, reinterpret_cast

Templates & Namespaces	- template, typename, namespace, using


Modern C++ (C++11, C++17, C++20, C++23) — ৯৫টি পর্যন্ত কিওয়ার্
    ড
মডার্ন C++ এ আরও শক্তিশালী মেমোরি কন্ট্রোল ও টাইপ সেফটির জন্য নতুন নতুন কিওয়ার্ড যুক্ত করা হয়েছে:

C++11-এ যোগ হওয়া গুরুত্বপূর্ণ কিওয়ার্ড: auto (মডার্ন অর্থে), nullptr, constexpr, decltype, thread_local, noexcept, static_assert, enum class

C++20-এ যোগ হওয়া গুরুত্বপূর্ণ কিওয়ার্ড: concept, requires, co_yield, co_await, co_return, consteval, constinit



Classic C++: ৬৩টি কিওয়ার্ড (C++98)

Modern C++: ৯৫টি পর্যন্ত কিওয়ার্ড (C++20/23)


alignas          consteval        inline           register         true
alignof          cpp_constinit    int              reinterpret_cast try
and              continue         long             requires         typedef
and_eq           co_await         mutable          return           typeid
asm              co_return        namespace        short            typename
auto             co_yield         new              signed           union
bitand           decltype         noexcept         sizeof           unsigned
bitor            default          not              static           using
bool             delete           not_eq           static_assert    virtual
break            do               nullptr          static_cast      void
case             double           operator         struct           volatile
catch            dynamic_cast     or               switch           wchar_t
char             else             or_eq            template         while
char8_t          enum             private          this             xor
char16_t         explicit         protected        thread_local     xor_eq
char32_t         export           public           throw
class            extern           reflexpr         true
compl            false            register         try
concept          float            reinterpret_cast typeid
const            for              requires         typename
const_cast       friend           return           typedef
constexpr        goto             short            union


    
    

#include <iostream>
using namespace std;

int main() {
    int age = 20; 
    
    if (age >= 18) {
        cout << "Adult" << endl;
    } else {
        cout << "Minor" << endl;
    }
    
    return 0;
}


এই কোডের ভেতরে কিউওয়ার্ড কোনগুলো?
এখানে int, if, else, এবং return হলো Keywords। কারণ এগুলোর কাজ সি++ কম্পাইলারের কাছে আগে থেকেই মুখস্থ। 
আর age হলো Identifier (ভেরিয়েবল), কারণ এই নামটা নিজে দেওয়া হয়ছে।

