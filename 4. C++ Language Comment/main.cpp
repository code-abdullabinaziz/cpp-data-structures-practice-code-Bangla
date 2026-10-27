 #include <iostream>

// ==========================================
// C++ Keywords & Basic Structure Note
// ==========================================

int main() {
    // 1. Standard Output Example (using \n instead of std::endl for performance)
    std::cout << "Hello world!\n";
    
    // Comments syntax:
    // - Single-line comment
    /* 
       - Multi-line comment 
    */

    // 2. Conditional Statement Example with Keywords (int, if, else, return)
    int age = 20; 

    if (age >= 18) {
        std::cout << "Adult\n";
    } else {
        std::cout << "Minor\n";
    }

    return 0;
}



# C++ Keywords (কিওয়ার্ড) ও বেসিক সিনট্যাক্স নোট

## কিওয়ার্ড কী?
সি++ ল্যাঙ্গুয়েজে **Keyword** হলো এমন কিছু নির্দিষ্ট শব্দ যা ওই ভাষার ব্যাকরণ বা সিনট্যাক্স তৈری করতে ব্যবহৃত হয়।
এগুলো কম্পাইলারের কাছে আগে থেকেই রিজার্ভ বা সংরক্ষিত থাকে। নিজের মতো করে এই শব্দগুলোর অর্থ বা কাজ পরিবর্তন করা যায় না।

### কিওয়ার্ডের মূল নিয়মসমূহ:
1. **ছোট হাতের অক্ষর:** সি++ এর সব কিউওয়ার্ড সবসময় ছোট হাতের অক্ষরে (Lowercase) লিখতে হয় (যেমন: `int`, `if`, `else`)।
2. **ভেরিয়েবলের নাম হিসেবে নিষিদ্ধ:** কোনো কিওয়ার্ডকে কখনোই ভেরিয়েবল, ফাংশন বা ক্লাসের নাম (`Identifier`) হিসেবে ব্যবহার করা যাবে না।

---

## কোডে কিওয়ার্ড চেনার উপায় (উদাহরণ):
```cpp
int age = 20; 

if (age >= 18) {
    std::cout << "Adult\n";
} else {
    std::cout << "Minor\n";
}



Keywords: int, if, else, return (এগুলোর কাজ কম্পাইলারের কাছে আগে থেকেই জানা)।




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


Modern C++ (C++11, C++17, C++20, C++23) — ৯৫টি পর্যন্ত কিওয়ার্ড 
    
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
