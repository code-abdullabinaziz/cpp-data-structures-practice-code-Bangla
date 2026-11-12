#include <iostream>
#include <climits>
#include <float.h>

using namespace std;

int main()
{
    cout << "--- Integer Limits ---" << endl;
    cout << "Int Max: " << INT_MAX << endl;
    cout << "Int Min: " << INT_MIN << endl;
    cout << "Unsigned Int Max: " << UINT_MAX << endl;
    cout << "Long Long Max: " << LLONG_MAX << endl;
    cout << "Long Long Min: " << LLONG_MIN << endl;
    cout << "\n--- Floating Point Limits ---" << endl;
    cout << "Float Max: " << FLT_MAX << endl;
    cout << "Double Max: " << DBL_MAX << endl;
    cout << "Long Double Max: " << LDBL_MAX << endl;
    cout << "\n--- Floating Point Minimum (Negative) ---" << endl;
    // ফ্লোটিং পয়েন্টে সবচেয়ে ছোট মান পেতে মাইনাস ব্যবহার করা হয়
    cout << "Float Min    : " << -FLT_MAX << endl;
    cout << "Double Min   : " << -DBL_MAX << endl;

    cout << "--- Maximum Limits ---" << endl;
    // Char এর সর্বোচ্চ সীমা
    cout << "Char Max      : " << SCHAR_MAX << endl;

    // Short এর সর্বোচ্চ সীমা
    cout << "Short Max     : " << SHRT_MAX << endl;

    cout << "\n--- Minimum Limits (Reference) ---" << endl;
    cout << "Char Min      : " << SCHAR_MIN << endl;
    cout << "Short Min     : " << SHRT_MIN << endl;
    return 0;
}







সি প্লাস প্লাস (C++) ল্যাঙ্গুয়েজে ইন্টিজার (Integer) এবং ফ্লোট (Float) ডেটা টাইপের লিমিট বা সীমা 
নিয়ে একদম বেসিক থেকে এডভান্সড লেভেলের সবকিছু নিচে আলোচনা করা হলো। কোডিং করার সময় ডেটা টাইপের এই লিমিটগুলো জানা অত্যন্ত জরুরি,
না হলে Overflow বা Underflow এর মতো মারাত্মক বাগ বা লজিক্যাল এরর হতে পারে।

১. ইন্টিজার (Integer) লিমিট কী এবং কেন জানা দরকার?
    
কম্পিউটারে মেমোরিতে প্রতিটি ডেটা টাইপের নির্দিষ্ট বাইট (Byte) সাইজ থাকে। সাইজের ওপর ভিত্তি করে সেই
ভেরিয়েবলটি সর্বনিম্ন কত থেকে সর্বোচ্চ কত পর্যন্ত মান (Value) রাখতে পারবে, তা নির্ধারিত হয়।

সি++ এ ইন্টিজার লিমিটগুলো নিখুঁতভাবে জানার জন্য <climits> হেডার ফাইল ব্যবহার করতে হয়।

বিভিন্ন ইন্টিজার টাইপ এবং তাদের সাধারণত সাইজ (কম্পিউটার আর্কিটেকচারের ওপর নির্ভর করে):
short int: সাধারণত ২ বাইট (১৬ বিট)।

int: সাধারণত ৪ বাইট (৩২ বিট)।

long long int: সাধারণত ৮ বাইট (৬৪ বিট)।

প্রতিটি টাইপের আবার Signed (পজিটিভ ও নেগেটিভ উভয় মান) এবং Unsigned (শুধুমাত্র পজিটিভ মান) রূপ থাকে।

কোডের মাধ্যমে ইন্টিজার লিমিট চেক করার উপায়:

#include <iostream>
#include <climits> // ইন্টিজার লিমিটের কনস্ট্যান্ট পাওয়ার জন্য

int main() {
    std::cout << "Minimum int value: " << INT_MIN << "\n";
    std::cout << "Maximum int value: " << INT_MAX << "\n";
    std::cout << "Maximum unsigned int value: " << UINT_MAX << "\n";
    
    std::cout << "Maximum long long value: " << LLONG_MAX << "\n";
    std::cout << "Minimum long long value: " << LLONG_MIN << "\n";
    
    return 0;
}

২. ফ্লোট ও ডাবল (Float & Double) লিমিট কী?
ফ্লোটিং পয়েন্ট বা দশমিক সংখ্যাগুলোর ক্ষেত্রে শুধু সর্বোচ্চ বা সর্বনিম্ন মান নয়, 
বরং দশমিকের পর কয় ঘর পর্যন্ত নিখুঁত মান (Precision) দিতে পারবে এবং তাদের রেঞ্জ কত—সেটি জানা গুরুত্বপূর্ণ।

ফ্লোট ও ডাবলের লিমিটগুলো পাওয়ার জন্য <cfloat> হেডার ফাইল ব্যবহার করতে হয়।

ফ্লোটিং পয়েন্ট টাইপসমূহ:
    
float: সাধারণত ৪ বাইট (Single Precision)। দশমিকের পর প্রায় ৬-৭ ঘর পর্যন্ত নিখুঁত মান দেয়।

double: সাধারণত ৮ বাইট (Double Precision)। দশমিকের পর প্রায় ১৫-১৬ ঘর পর্যন্ত নিখুঁত মান দেয়।

long double: আরও বড় পরিসরের ডেসিমেল মানের জন্য ব্যবহৃত হয়।

কোডের মাধ্যমে ফ্লোট/ডাবল লিমিট চেক করার উপায়:

#include <iostream>
#include <cfloat> // ফ্লোট ও ডাবলের লিমিট পাওয়ার জন্য

int main() {
    std::cout << "Minimum float value: " << FLT_MIN << "\n";
    std::cout << "Maximum float value: " << FLT_MAX << "\n";
    
    std::cout << "Minimum double value: " << DBL_MIN << "\n";
    std::cout << "Maximum double value: " << DBL_MAX << "\n";
    
    // প্রেিসিশন বা নিখুঁত ঘরের হিসাব
    std::cout << "Float precision digits: " << FLT_DIG << "\n";
    std::cout << "Double precision digits: " << DBL_DIG << "\n";
    
    return 0;
} 


৩. ওভারফ্লো (Overflow) এবং আন্ডারফ্লো (Underflow): সবচেয়ে বড় বিপদ
    
আপনি যখন কোনো ডেটা টাইপের লিমিট ক্রস করে ফেলবেন, তখন মেমোরিতে অদ্ভুত বা ভুল মান চলে আসে। একেই বলে ওভারফ্লো বা আন্ডারফ্লো।

ইন্টিজার ওভারফ্লো উদাহরণ:int এর সর্বোচ্চ সীমা সাধারণত 2,147,483,647 (INT_MAX)। যদি এর সাথে 1 যোগ করা হয় , 
    
তবে মানটি পজিটিভ না হয়ে হুট করে মাইনাস ফিগার বা সর্বনিম্ন মানে (INT_MIN) চলে যাবে!

কেন এটি সাইবার সিকিউরিটি ও সিস্টেম ডিজাইনে মারাত্মক?
    
বড় বড় সিস্টেম বা লো-লেভেল প্রোগ্রামিংয়ে (যেমন সি/সি++) যদি মেমোরি অ্যালোকেশন বা সাইজ ক্যালকুলেশনের সময়
    
ইন্টিজার ওভারফ্লো হ্যান্ডেল করা না হয়, তবে হ্যাকাররা এই সুযোগটি নিয়ে Buffer Overflow অ্যাটাক চালাতে পারে। 
    
তাই সিস্টেম প্রোগ্রামিংয়ে লিমি트 চেক করা অত্যন্ত জরুরি।

৪. আধুনিক সি++ (C++11 এবং তার পরের স্ট্যান্ডার্ড) এর সেরা অভ্যাস
    
মডার্ন সি++ এ ডেটা টাইপের সুনির্দিষ্ট সাইজ ও লিমিট নিয়ে কাজ করার জন্য <cstdint> হেডার ফাইল ব্যবহার করা সবচেয়ে নিরাপদ ও প্রফেশনাল স্ট্যান্ডার্ড। 
এর মাধ্যমে  একদম বাইট বা বিট ঠিক করে দেওয়া যাবে :

int32_t: ঠিক ৩২ বিটের (৪ বাইট) সাইনড ইন্টিজার।

int64_t: ঠিক ৬৪ বিটের (৮ বাইট) সাইনড ইন্টিজার।

uint32_t: আনসাইনড ৩২ বিট ইন্টিজার।

এর ফলে কোডটি যেকোনো কম্পিউটারে কম্পাইল করলেই একই লিমিট এবং মেমোরি বিহেভিয়ার নিশ্চিত করে,
যা ক্রসব্ল্যাটফর্ম বা সিস্টেম লেভেল ডেভলপমেন্টের জন্য অপরিহার্য।

সি++ এর এই লিমিটগুলো মাথায় রেখে কোড করলে আপনার লজিক হবে শতভাগ নিখুঁত এবং মেমোরি সেফ!
