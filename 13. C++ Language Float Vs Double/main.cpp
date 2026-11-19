১. C++ এ float বনাম double এর মূল বিষয়
    
মেমোরি সাইজ: সাধারণত float নেয় ৪ বাইট (৩২ বিট) এবং double নেয় ৮ বাইট (৬৪ বিট)।

নির্ভুলতা (Precision):

float সাধারণত প্রায় ৬ থেকে ৭টি সিগনিফিক্যান্ট ডিজিট পর্যন্ত নির্ভুল মান ধরে রাখতে পারে।

double সাধারণত প্রায় ১৫ থেকে ১৬টি সিগনিফিক্যান্ট ডিজিট পর্যন্ত অনেক বেশি নির্ভুল মান ধরে রাখতে পারে।

ডিফল্ট লিটারেল নিয়ম (খুব গুরুত্বপূর্ণ!): C++ ভাষায় আপনি যখন কোনো দশমিক সংখ্যা কোনো সাফিক্স ছাড়া —যেমন 1.23 বা 10.0—তখন 
    
C++ কম্পাইলার সেটিকে ডিফল্টভাবে double হিসেবে ধরে। আর float লিটারেল বোঝাতে চাইলে শেষে f বা F দিতে হয় (যেমন: 1.23f)।

#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{   
    /*
    float num1 = 1.123456789f;
    double num2 = 1.123456789123456;
    cout << "Float value is: " << fixed << setprecision(10) << num1 << endl;
    cout << "Float value is: " << fixed << setprecision(5) << num1 << endl;

    cout << "Double value is: " << fixed << setprecision(20) << num2 << endl;
    cout << "Double value is: " << fixed << setprecision(15) << num2 << endl;
    */

    float num3 = 4.0;
    float num4 = 3;

    // float কে float দিয়ে ভাগ করলে উত্তর দশমিক (float) আসবে
    float result = num3 / num4;

    cout << "Result is: " << fixed << setprecision(2) << result << endl;
    return 0;
}


#include <iostream>
#include <iomanip>

int main() {
    float f = 1.23f;
    double d = 1.23;

    std::cout << "Size of float : " << sizeof(f) << " Bytes\n";
    std::cout << "Size of double: " << sizeof(d) << " Bytes\n\n";

    std::cout << std::fixed;
    std::cout << "float  (8 ghor) : " << std::setprecision(8) << f << "\n";
    std::cout << "double (8 ghor) : " << std::setprecision(8) << d << "\n\n";

    std::cout << "float  (15 ghor): " << std::setprecision(15) << f << "\n";
    std::cout << "double (15 ghor): " << std::setprecision(15) << d << "\n";

    return 0;
}

std::fixed এবং std::setprecision(n): C++-এ <iomanip> হেডার ব্যবহার করে দশমিকের পর ঠিক কত ঘর দেখাতে তা নিয়ন্ত্রণ করা হয়।
std::fixed না দিলে setprecision অনেক সময় মোট সিগনিফিক্যান্ট ডিজিট বা সায়েন্টিফিক নোটেশনে দেখাতে পারে।

৮ ঘর ও ১৫ ঘরের পার্থক্য: f-এর মান 1.23f হওয়ায় কম বিটে তা সংরক্ষিত হয়; ১৫ ঘর দেখালে শেষের ডিজিটগুলোতে বাইনারি রিপ্রেজেন্টেশনের সূক্ষ্ম গড়মিল ধরা পড়ে,
যেখানে d (double) অনেক বেশি ঘর পর্যন্ত নিখুঁত থাকে।

৩. C++ এ টাইপ কনভার্সন ও সতর্কতা

অপ্রত্যাশিত Narrowing / Warning: যদি double মান (1.23) কোনো float ভেরিয়েবলে রাখতে (float x = 1.23;),
    
তাহলে বড় টাইপ থেকে ছোট টাইপে মান যাচ্ছে বলে আধুনিক কম্পাইলার ওয়ার্নিং দিতে পারে। তাই float-এ মান রাখলে 1.23f লেখা পরিষ্কার অভ্যাস।

পূর্ণসংখ্যা ভাগ করার সময়: C++-এ দুটি int দিয়ে ভাগ করলে (10 / 3) পূর্ণসংখ্যা ভাগফল (3) আসে। দশমিকসহ উত্তর চাইলে static_cast<double>(10) / 3 বা 10.0 / 3 ব্যবহার করা হয়।

সাধারণ ব্যবহার: C++ প্রোগ্রামিংয়ে সুনির্দিষ্ট কোনো মেমোরি বা হার্ডওয়্যার সীমাবদ্ধতা না থাকলে দশমিক হিসাবের জন্য সাধারণত double ব্যবহার করাই বেশি নিরাপদ।
