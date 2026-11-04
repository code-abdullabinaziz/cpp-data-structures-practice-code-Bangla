C++ এ ডাটা টাইপ (Data Type) মানে হলো কম্পিউটারকে এটা বোঝানো যে, মেমোরিতে কী ধরণের তথ্য জমা রাখা হসছে এবং সেটি কতটুকু জায়গা নেবে।
C++ একটি Statically Typed ল্যাঙ্গুয়েজ, অর্থাৎ ভেরিয়েবল ব্যবহারের আগেই তার টাইপ বলে দিতে হয়।

C++ এর ডাটা টাইপগুলোকে প্রধানত ৩টি ভাগে ভাগ করা যায়:

১. Built-in (Primitive) Data Types

সি++ (C++) ল্যাঙ্গুয়েজেও Built-in Data Types বা Primitive Data Types-এর মূল ধারণাটি সি (C) ল্যাঙ্গুয়েজের মতোই—অর্থাৎ 
এগুলো হলো ল্যাঙ্গুয়েজের একদম নিজস্ব, বিল্ট-ইন এবং মৌলিক ডাটা টাইপ যা কম্পাইলার সরাসরি চিনতে পারে।
তবে সি++ ল্যাঙ্গুয়েজ যেহেতু সি-এর চেয়ে কিছুটা আধুনিক, তাই এখানে প্রাইমিটিভ ডাটা টাইপের সংখ্যা সি-এর চেয়ে
বেশি এবং এর কাজের পরিধিও কিছুটা বড়। সি++-এ কোনো এক্সট্রা হেডার ফাইল ছাড়াই এই মৌলিক টাইপগুলো সরাসরি ব্যবহার করা যায়।


১. Integer Type (পূর্ণসংখ্যা)
দশমিক ছাড়া যেকোনো পজিটিভ বা নেগেটিভ সংখ্যা রাখার জন্য এগুলো ব্যবহৃত হয়।
int: সাধারণ পূর্ণসংখ্যা রাখার জন্য। (সাইজ: 4 Bytes) int score = 95;
short: ছোট সাইজের পূর্ণসংখ্যা রাখার জন্য। (সাইজ: 2 Bytes)
long: বড় পূর্ণসংখ্যা রাখার জন্য। (সাইজ: 4 or 8 Bytes)
long long: বিশাল বড় পূর্ণসংখ্যা রাখার জন্য সি++ এ এটি ব্যবহার করা হয়। (সাইজ: 8 Bytes)



২. Floating-Point Type (দশমিক সংখ্যা)
যেকোনো ভগ্নাংশ বা দশমিক সংখ্যা মেমোরিতে সেভ করার জন্য এগুলো লাগে।

float: সাধারণ দশমিক সংখ্যা (দশমিকের পর ৭ ঘর পর্যন্ত নিখুঁত)। (সাইজ: 4 Bytes)  float weight = 65.5;
double: বড় এবং বেশি নিখুঁত দশমিক সংখ্যা (দশমিকের পর ১৫ ঘর পর্যন্ত)। (সাইজ: 8 Bytes) double price = 1299.99;
long double: আরও নিখুঁত গাণিতিক হিসাবের জন্য। (সাইজ: 12 or 16 Bytes)


৩. Character Type (অক্ষর)

char: যেকোনো একটি একক অক্ষর, চিহ্ন বা নম্বরকে সিঙ্গেল কোটেশনের (' ') মধ্যে রাখার জন্য। (সাইজ: 1 Byte)  char ch = 'Z';

wchar_t (Wide Character): এটি সি++ এর একটি স্পেশাল টাইপ। সাধারণ char দিয়ে শুধু ইংরেজি বা ASCII ক্যারেক্টার রাখা যায়। কিন্তু 
আন্তর্জাতিক অন্যান্য ভাষা বা ইউনিকোড (Unicode) ক্যারেক্টার সাপোর্ট করার জন্য wchar_t ব্যবহার করা হয়। (সাইজ: 2 or 4 Bytes)


৪. Boolean Type (সত্য/মিথ্যা)

bool: এটি সি++ এর অন্যতম বড় সুবিধা। সি ল্যাঙ্গুয়েজের মতো কোনো হেডার ফাইল ছাড়াই সি++ এ সরাসরি bool টাইপ ব্যবহার করা যায়।
এটি কেবল দুটি মান নেয়: true (১) অথবা false (০)। (সাইজ: 1 Byte) bool isCodingFun = true;



   
এগুলো সবচেয়ে বেশি ব্যবহৃত হয়।

টাইপ                           কাজ                                 সাইজ (প্রায়)         উদাহরণ
int	                         পূর্ণসংখ্যা (Integer)	                 4 Bytes	          int age = 25;
float	                         দশমিক সংখ্যা (Single Precision)	     4 Bytes	          float price = 10.5f;
double	                      নিখুঁত দশমিক সংখ্যা (Double Precision) 8 Bytes	          double pi = 3.14159265;
char	                         একটি ক্যারেক্টার বা অক্ষর	              1 Byte	             char grade = 'A';
bool	                         সত্য বা মিথ্যা (Boolean)	              1 Byte	             bool isCodingFun = true;
void                           কোনো মান নেই (Valueless)-                               ফাংশনের রিটার্ন টাইপ হিসেবে ব্যবহৃত হয়।


২. Derived Data Types
মৌলিক ডাটা টাইপগুলো ব্যবহার করে যখন নতুন কিছু তৈরি করা হয়, তখন তাকে Derived Data Type বলে।

Array: একই ধরণের অনেকগুলো ডাটা একসাথে রাখা। (যেমন: int marks[5];)

Pointer: যা অন্য কোনো ভেরিয়েবলের মেমোরি অ্যাড্রেস জমা রাখে। (যেমন: int* ptr;)

Reference: একটি ভেরিয়েবলের বিকল্প নাম।

Function: নির্দিষ্ট কাজ সম্পন্ন করার জন্য কোড ব্লক।


৩. User-defined Data Types
প্রোগ্রামার নিজের প্রয়োজন অনুযায়ী এই টাইপগুলো তৈরি করে নিতে পারেন।

Struct (Structure): ভিন্ন ভিন্ন ডাটা টাইপকে একসাথে রাখার জন্য।

Union: স্ট্রাকচারের মতো কিন্তু এটি মেমোরি শেয়ার করে।

Enum (Enumeration): নির্দিষ্ট কিছু নামকে সংখ্যা দিয়ে ডিফাইন করা।

Class: এটি সি++ এর প্রাণ (Object Oriented Programming-এর মূল ভিত্তি)।


Data Type Modifiers (অ্যাডভান্সড কন্ট্রোল
ডাটা টাইপগুলোর সাইজ বা রেঞ্জ ছোট-বড় করার জন্য কিছু মডিফায়ার ব্যবহার করা হয়:

signed: পজিটিভ ও নেগেটিভ উভয় সংখ্যা (ডিফল্ট)।

unsigned: শুধুমাত্র পজিটিভ সংখ্যা (রেঞ্জ দ্বিগুণ হয়ে যায়)।

short: ছোট সংখ্যার জন্য (মেমোরি বাঁচায়)।

long: বড় সংখ্যার জন্য। (যেমন: long long int বিশাল সংখ্যার জন্য ব্যবহৃত হয়)।

১. যখন মেমোরি নিয়ে খুব বেশি চিন্তা করার দরকার নেই, তখন দশমিকের জন্য double ব্যবহার করাই সবচেয়ে নিরাপদ।
২. যদি জানা হয় যে কোনো মান কখনোই নেগেটিভ হবে না (যেমন: বয়স বা রোল নম্বর), তবে unsigned int ব্যবহার করা বুদ্ধিমানের কাজ।


সি++ এ ভ্যারিয়েবলের প্রকারভেদ
   
সি++ এ বিভিন্ন ধরনের ভ্যারিয়েবল এবং ডেটা টাইপ রয়েছে:

প্রাথমিক ডেটা টাইপ:

int: পূর্ণসংখ্যা (যেমন: 5, -10)
   
float: দশমিক সংখ্যা (যেমন: 3.14)
   
double: দ্বিগুণ সঠিকতা সম্পন্ন দশমিক সংখ্যা

char: একটি অক্ষর (যেমন: 'A')
   
bool: সত্য বা মিথ্যা (true/false) মান ধারণ করে
   
কম্পোজিট ডেটা টাইপ:

string: অক্ষরের একটি সেট (যেমন: "Hello, World!")
   
array: একই ধরনের ভ্যালুগুলোর একটি সংগ্রহ (যেমন: int numbers[5] = {1, 2, 3, 4, 5};)

structure: বিভিন্ন ডেটা টাইপ একত্রে ধারণ করে।

ডাইনামিক ভ্যারিয়েবল:

ডাইনামিক মেমোরি এলোকেশনের মাধ্যমে ভ্যারিয়েবল তৈরি করা হয়, যেমন new এবং delete ব্যবহার করে।

Copied from SATT ACADEMY. Visit us at: https://sattacademy.com




   
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Size of char: " << sizeof(char) << " byte" << endl;
//     cout << "Size of int: " << sizeof(int) << " byte" << endl;
//     cout << "Size of float: " << sizeof(float) << " byte" << endl;
//     cout << "Size of double: " << sizeof(double) << " byte" << endl;
//     cout << "Size of short: " << sizeof(short) << " byte" << endl;
//     cout << "Size of long: " << sizeof(long) << " byte" << endl;
//     cout << "Size of long double: " << sizeof(long double) << " byte" << endl;
//     cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
//     cout << "Size of long long: " << sizeof(long long) << " byte" << endl;
//     return 0;
// }



#include <iostream>
int main()
{
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " byte" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " byte" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " byte" << std::endl;
    std::cout << "Size of short: " << sizeof(short) << " byte" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " byte" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " byte" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " byte" << std::endl;
    
    return 0;
}



#include <iostream>

int main()
{
    std::cout << "Size of char: " << sizeof(char) << " byte\n";
    std::cout << "Size of int: " << sizeof(int) << " byte\n";
    std::cout << "Size of float: " << sizeof(float) << " byte\n";
    std::cout << "Size of double: " << sizeof(double) << " byte\n";
    std::cout << "Size of short: " << sizeof(short) << " byte\n";
    std::cout << "Size of long: " << sizeof(long) << " byte\n";
    std::cout << "Size of long double: " << sizeof(long double) << " byte\n";
    std::cout << "Size of bool: " << sizeof(bool) << " byte\n";
    std::cout << "Size of long long: " << sizeof(long long) << " byte\n";
    
    return 0;
}


// #include <iostream>
// #include <iomanip> 
// using namespace std;
// int main()
// {
   
// cout << left << setw(20) << "Data Type" << "Size (in bytes)" << endl;
// cout << "------------------------------------------" << endl;
// cout << setw(20) << "char" << sizeof(char) << " byte" << endl;
// cout << setw(20) << "bool" << sizeof(bool) << " byte" << endl;
// cout << setw(20) << "short" << sizeof(short) << " bytes" << endl;
// cout << setw(20) << "int" << sizeof(int) << " bytes" << endl;
// cout << setw(20) << "float" << sizeof(float) << " bytes" << endl;
// cout << setw(20) << "long" << sizeof(long) << " bytes" << endl;
// cout << setw(20) << "double" << sizeof(double) << " bytes" << endl;
// cout << setw(20) << "long long" << sizeof(long long) << " bytes" << endl;
// cout << setw(20) << "long double" << sizeof(long double) << " bytes" << endl;
// return 0;
// }

Data Type           Size (in bytes)
------------------------------------------
char                1 byte
short               2 bytes
int                 4 bytes
long long           8 bytes
float               4 bytes
double              8 bytes
bool                1 byte


#include <iostream>
#include <iomanip>  

int main()
{
    std::cout << std::left << std::setw(20) << "Data Type" << "Size (in bytes)\n";
    std::cout << "------------------------------------------\n";
    std::cout << std::setw(20) << "char" << sizeof(char) << " byte\n";
    std::cout << std::setw(20) << "bool" << sizeof(bool) << " byte\n";
    std::cout << std::setw(20) << "short" << sizeof(short) << " bytes\n";
    std::cout << std::setw(20) << "int" << sizeof(int) << " bytes\n";
    std::cout << std::setw(20) << "float" << sizeof(float) << " bytes\n";
    std::cout << std::setw(20) << "long" << sizeof(long) << " bytes\n";
    std::cout << std::setw(20) << "double" << sizeof(double) << " bytes\n";
    std::cout << std::setw(20) << "long long" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(20) << "long double" << sizeof(long double) << " bytes\n";
    
    return 0;
}




------------------------------------------



// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;

// int main() {
//     cout << left << setw(10) << "Name" << left << setw(10) << "ID" << "Number" <<endl;
//     cout << left << setw(10) << "Abdullah" << setw(10) << 2389 << "01745677826" <<endl;
//     cout << left << setw(10) << "Aziz" << setw(10) << 2395 << "01745677826" <<endl;
//     cout << left << setw(10) << "Ebny" << setw(10) << 2958 << "01745677826" <<endl;
//     cout << left << setw(10) << "Arman" << setw(10) << 2354 << "01745677826" <<endl;
//     return 0;
// }


#include <iostream>
#include <iomanip>
#include <string>

int main() {
  std::cout << std::left << std::setw(10) << "Name" << std::left << std::setw(10) << "ID" << "Number\n";
  std::cout << std::left << std::setw(10) << "Abdullah" << std::setw(10) << 2389 << "01745677826\n";
  std::cout << std::left << std::setw(10) << "Aziz" << std::setw(10) << 2395 << "01745677826\n";
  std::cout << std::left << std::setw(10) << "Ebny" << std::setw(10) << 2958 << "01745677826\n";
  std::cout << std::left << std::setw(10) << "Arman" << std::setw(10) << 2354 << "01745677826\n";
  std::cout << std::left << std::setw(10) << "Rifat" << std::setw(10) << 2395 << "01745677826\n";
  return 0;
}

   

৪টি ঘর ব্যবহার হয়েছে "Name" অক্ষরগুলোর জন্য।

৬টি ঘর খালি (Space) রয়ে গেছে।

মোট ১০টি ঘরই কিন্তু "Name" এর কলামের জন্য বরাদ্দ।

যখন setw(10) লিখেছ, তখন কম্পিউটার স্ক্রিনে ১০টি অদৃশ্য ক্যারেক্টার বক্স তৈরি করেছে:
[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ] (মোট ১০টি খালি ঘর)

যখন left এবং "Name" ব্যবহার করেছ, তখন সেই ১০টি ঘরের বাম দিক থেকে "Name" বসানো শুরু হয়েছে:
[N][a][m][e][ ][ ][ ][ ][ ][ ]

সি++ এ setw(n) শুধুমাত্র তার পরবর্তী একটি আইটেমকে নিয়ন্ত্রণ করে। একবার সেই আইটেমটি প্রিন্ট হয়ে গেলে setw এর ক্ষমতা শেষ হয়ে যায়। 
তাই পরবর্তী স্ট্রিং বা ডাটাকে যদি  আবার নির্দিষ্ট দূরত্বে পাঠাতে, তবে নতুন করে আবার setw() লিখতে হবে।

cout << left << setw(10) << "Name" 
     << left << setw(10) << "ID" 
     << "Number" << endl;

"Name" এর জন্য ১০ ঘর বরাদ্দ।

"ID" এর জন্য ১০ ঘর বরাদ্দ।

"Number" এর জন্য কোনো নির্দিষ্ট ঘর বরাদ্দ নেই, সে শুধু লেখাটি প্রিন্ট করে লাইন শেষ করে দিচ্ছে।





#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Name বাঁ-পাশে (left), ID এবং Number ডান-পাশে (right) অ্যালাইন করা হলো
    std::cout << std::left << std::setw(12) << "Name" 
              << std::right << std::setw(8) << "ID" 
              << std::right << std::setw(15) << "Number\n";
              
    std::cout << std::left << std::setw(12) << "Abdullah" 
              << std::right << std::setw(8) << 2389 
              << std::right << std::setw(15) << "01745677826\n";
              
    std::cout << std::left << std::setw(12) << "Aziz" 
              << std::right << std::setw(8) << 2395 
              << std::right << std::setw(15) << "01745677826\n";
              
    std::cout << std::left << std::setw(12) << "Ebny" 
              << std::right << std::setw(8) << 2958 
              << std::right << std::setw(15) << "01745677826\n";
              
    std::cout << std::left << std::setw(12) << "Arman" 
              << std::right << std::setw(8) << 2354 
              << std::right << std::setw(15) << "01745677826\n";
              
    return 0;
}


#include <iostream>
#include <string>
#include <limits> // std::numeric_limits ব্যবহারের জন্য

int main() {
    int id;
    std::string name;

    // ১. আইডি ইনপুট নেওয়া (ইংরেজিতে)
    std::cout << "Enter your ID: ";
    std::cin >> id;

    // ⚠️ ইনপুট বাফার পরিষ্কার (Buffer Clear) করা
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // ২. পূর্ণ নাম ইনপুট নেওয়া (ইংরেজিতে)
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    // ৩. ফলাফল প্রিন্ট করা (ইংরেজিতে)
    std::cout << "\n--- Input Information ---\n";
    std::cout << "ID: " << id << "\n";
    std::cout << "Name: " << name << "\n";

    return 0;
}

কেন এই std::cin.ignore(...) ব্যবহার করা জরুরি? (ড্রায় রান ও মেকানিক্স)
   
১. সমস্যাটি কোথায় হয়?

যখন std::cin >> id; লিখে কিবোর্ডে আপনার আইডি (যেমন: 2389) টাইপ করে Enter চাপেন, তখন কম্পিউটার 2389 সংখ্যাটি id ভেরিয়েবলে রেখে দেয়।

কিন্তু  যে Enter কী প্রেস করা হবে, সেটির রিপ্রেজেন্টেশন হিসেবে একটি নিউলাইন ক্যারেক্টার (\n) ইনপুট বাফারে রয়ে যায়।

২. বাফার পরিষ্কার না করলে কী হতো?

যদি std::cin.ignore না দেওয়া হত, তবে পরবর্তী std::getline(std::cin, name); 
   
লাইনটি রান হওয়ামাত্র বাফারে পড়ে থাকা ওই ফেলে দেওয়া \n (Enter) ক্যারেক্টারটিকে ধরে নিত।

ফলে প্রোগ্রাম মনে করত ইউজার বুঝি কিছু না লিখে শুধু এন্টার চাপছে, এবং নাম নেওয়ার সুযোগ না দিয়েই ফাঁকা রেখেই সামনে চলে যেত!

৩. std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); কোডটি আসলে কী করে?

এটি কম্পিউটারকে নির্দেশ দেয়: "বাফারের ভেতরে যত জঞ্জাল বা নিউলাইন (\n) ক্যারেক্টার জমে আছে,
তার সর্বোচ্চ সাইজ (max) পর্যন্ত সব মুছে বা স্কিপ করে একদম বাফার পরিষ্কার করে ফেলো, যতক্ষণ না নতুন লাইনের (\n) দেখা পাচ্ছো।"


   
এখানে cin বলতে C++ ল্যাঙ্গুয়েজের ইনপুট অবজেক্টকে বোঝানো হয়েছে।

cin কী?
   
cin এর পূর্ণরূপ হলো "character input"। এটি C++ এর <iostream> স্ট্যান্ডার্ড লাইব্রেরির একটি প্রি-ডিফাইন্ড অবজেক্ট (Predefined Object),
যা মূলত কিবোর্ড থেকে ইউজারের দেওয়া ইনপুট গ্রহণ করার জন্য ব্যবহার করা হয়।

C++ এ আউটপুট দেখানোর জন্য যেমন cout ব্যবহার করা হয়, ঠিক তেমনি ইনপুট নেওয়ার জন্য cin ব্যবহার করা হয়।

এটি সাধারণত Extraction Operator (>>)-এর সাথে কাজ করে।



#include <iostream>
#include <iomanip> // setw, left, right, fixed, setprecision এর জন্য
#include <string>
#include <limits>  // std::numeric_limits ব্যবহারের জন্য (buffer clear করতে লাগবে)

int main() {
    int id;
    std::string name, gmail, bloodGroup;
    bool isMarried;
    double accountBalance;
    float cgpa, height;

    // ১. প্রথমে cin >> দিয়ে কিছু সংখ্যা বা ডেটা ইনপুট নেওয়া
    std::cout << "Enter ID: ";
    std::cin >> id;

    std::cout << "Enter Account Balance: ";
    std::cin >> accountBalance;

    std::cout << "Enter CGPA: ";
    std::cin >> cgpa;

    std::cout << "Are you married? (1 for true, 0 for false): ";
    std::cin >> isMarried;

    // ⚠️ অত্যন্ত গুরুত্বপূর্ণ: cin >> ব্যবহারের পর যখনই std::getline দিয়ে নাম ইনপুট নিতে হবে,
    // ঠিক তার আগে এই লাইনটি দিয়ে ইনপুট বাফার পরিষ্কার করতে হবে!
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // ২. এবার getline দিয়ে স্পেসসহ নাম ইনপুট নেওয়া
    std::cout << "Enter Full Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Gmail: ";
    std::cin >> gmail;

    std::cout << "Enter Blood Group: ";
    std::cin >> bloodGroup;

    std::cout << "Enter Height: ";
    std::cin >> height;

    // ৩. ফরম্যাটেড আউটপুট সেকশন (left, right, setw, fixed ব্যবহার করে)
    std::cout << "\n\n";
    std::cout << "------------USER INFORMATION------------- \n";


    // টেবিলের হেডার
    std::cout << std::left << std::setw(18) << "Field Name" 
              << std::right << std::setw(20) << "Details\n";
    std::cout << "----------------------------------------\n";

    // ডেটাগুলো প্রিন্ট করা
    std::cout << std::left << std::setw(18) << "ID" 
              << std::right << std::setw(20) << id << "\n";

    std::cout << std::left << std::setw(18) << "Name" 
              << std::right << std::setw(20) << name << "\n";

    std::cout << std::left << std::setw(18) << "Gmail" 
              << std::right << std::setw(20) << gmail << "\n";

    std::cout << std::left << std::setw(18) << "Blood Group" 
              << std::right << std::setw(20) << bloodGroup << "\n";

    std::cout << std::left << std::setw(18) << "Is Married" 
              << std::right << std::setw(20) << (isMarried ? "Yes" : "No") << "\n";

    std::cout << std::left << std::setw(18) << "Account Balance" 
              << std::right << std::fixed << std::setprecision(2) << std::setw(20) << accountBalance << "\n";

    std::cout << std::left << std::setw(18) << "CGPA" 
              << std::right << std::fixed << std::setprecision(2) << std::setw(20) << cgpa << "\n";

    std::cout << std::left << std::setw(18) << "Height" 
              << std::right << std::fixed << std::setprecision(2) << std::setw(20) << height << "\n";

    std::cout << "========================================\n";

    return 0;
}



   

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>   // numeric_limits এর জন্য

using namespace std;

int main()
{
    string name1, name2;
    int id1, id2;
    string phone1, phone2;

    // ---------- প্রথম ব্যক্তির ইনপুট ----------
    cout << "Enter first person's Name: ";
    getline(cin, name1);

    cout << "Enter ID: ";
    cin >> id1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // বাফার পরিষ্কার

    cout << "Enter Phone Number: ";
    getline(cin, phone1);

    cout << "\n---------------------------\n";

    // ---------- দ্বিতীয় ব্যক্তির ইনপুট ----------
    cout << "Enter second person's Name: ";
    getline(cin, name2);

    cout << "Enter ID: ";
    cin >> id2;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // আবার বাফার পরিষ্কার

    cout << "Enter Phone Number: ";
    getline(cin, phone2);

    cout << "\n\nFinal Output Table:\n";

    // ---------- টেবিল হেডার ----------
    cout << left << setw(15) << "Name"
         << left << setw(10) << "ID"
         << "Number" << endl;

    cout << "------------------------------------------" << endl;

    // ---------- ডাটা আউটপুট ----------
    cout << left << setw(15) << name1
         << left << setw(10) << id1
         << phone1 << endl;

    cout << left << setw(15) << name2
         << left << setw(10) << id2
         << phone2 << endl;

    return 0;
}


Advanced---------------------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string name1, name2, phone1, phone2;
    int id1, id2;

    // প্রথম ব্যক্তির ইনপুট
    cout << "Enter first person name: ";
    getline(cin, name1); 
    cout << "Enter first person id: ";
    cin >> id1;
    cout << "Enter first person phone number: ";
    cin >> phone1;

    // বাফার ক্লিয়ার করা (খুবই গুরুত্বপূর্ণ!)
    cin.ignore(); 

    // দ্বিতীয় ব্যক্তির ইনপুট
    cout << "\nEnter second person name: ";
    getline(cin, name2); 
    cout << "Enter second person id: ";
    cin >> id2;
    cout << "Enter second person phone number: ";
    cin >> phone2;

    // সব আউটপুট একসাথে একটি টেবিলে দেখানো
    cout << "\n\n" << left << setw(40) << setfill('=') << "" << setfill(' ') << endl;
    cout << left << setw(20) << "Name" << setw(15) << "ID" << "Phone Number" << endl;
    cout << left << setw(40) << setfill('-') << "" << setfill(' ') << endl;

    cout << left << setw(20) << name1 << setw(15) << id1 << phone1 << endl;
    cout << left << setw(20) << name2 << setw(15) << id2 << phone2 << endl;

    return 0;
}

    cout << "\n\n"
    << left << setw(40) << setfill('=') << "" << setfill(' ') << endl;
    cout << left << setw(20) << "Name" << setw(15) << "ID" << "Phone Number" << endl;
    cout << left << setw(40) << setfill('-') << "" << setfill(' ') << endl;

লাইন ১: cout << "\n\n"
\n\n: এটি দুটি নতুন লাইন (New Line) তৈরি করে। এর ফলে আগের ইনপুটগুলোর নিচে কিছুটা ফাঁকা জায়গা তৈরি হবে, যা আউটপুটকে পরিষ্কার দেখাবে।
   

লাইন ২: << left << setw(40) << setfill('=') << "" << setfill(' ') << endl;
এই লাইনটি একটি লম্বা সমান চিহ্ন (================) দিয়ে বর্ডার তৈরি করে।

left: এটি নির্দেশ দেয় যে পরের অংশটি বাম দিক থেকে শুরু হবে।

setw(40): এটি ৪০টি ক্যারেক্টার বা ঘরের সমান জায়গা বরাদ্দ করে।

setfill('='): এটি বলে দেয় যে, setw(40) দিয়ে তৈরি করা ৪০টি খালি ঘর = চিহ্ন দিয়ে ভরাট করতে হবে।

<< "": এটি একটি খালি স্ট্রিং। যেহেতু setw() এর পরে কিছু একটা প্রিন্ট করতে হয়, আমরা খালি স্ট্রিং দিয়েছি যাতে পুরো ৪০টি ঘরই = দিয়ে ভরে যায়।

setfill(' '): এটি খুব গুরুত্বপূর্ণ! এর কাজ হলো setfill-কে আবার ডিফল্ট অবস্থায় অর্থাৎ স্পেস (Space)-এ ফিরিয়ে আনা।
এটি না করলে পরের লাইনগুলোতেও সব ফাঁকা জায়গায় = চলে আসতো।
   

লাইন ৩: cout << left << setw(20) << "Name" << setw(15) << "ID" << "Phone Number" << endl;
এটি টেবিলের হেডিং (Heading) বা শিরোনাম তৈরি করে।

setw(20) << "Name": "Name" কলামের জন্য ২০টি ঘর নেয়। "Name" লেখাটি বামে থাকে এবং ডানে ফাঁকা জায়গা থাকে।

setw(15) << "ID": "ID" কলামের জন্য ১৫টি ঘর নেয়।

"Phone Number": এটি শেষ কলাম। এর জন্য আলাদা করে setw() দেওয়া হয়নি কারণ এরপরে আর কোনো কলাম নেই।


লাইন ৪: cout << left << setw(40) << setfill('-') << "" << setfill(' ') << endl;
এই লাইনটি হেডিং-এর নিচে একটি ড্যাশ বর্ডার (----------------) তৈরি করে।

এটি ঠিক লাইন ২-এর মতোই কাজ করে, শুধু এখানে = এর জায়গায় - (ড্যাশ) ব্যবহার করা হয়েছে।

এখানেও ৪০টি ঘর ড্যাশ দিয়ে পূরণ করা হয়েছে এবং শেষে আবার setfill(' ') দিয়ে স্পেস ফিরিয়ে আনা হয়েছে।

ভিজ্যুয়াল আউটপুট কেমন হবে?
কোডটি রান করলে আপনার স্ক্রিনে ঠিক এমন একটি সুন্দর টেবিল হেড তৈরি হবে:

Plaintext
========================================
Name                ID             Phone Number
----------------------------------------

