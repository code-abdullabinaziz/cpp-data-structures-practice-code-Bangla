সি++ (C++) এ Variable (ভেরিয়েবল) হলো মেমোরির একটি নির্দিষ্ট জায়গার নাম, যেখানে  বিভিন্ন তথ্য বা ডেটা জমা রাখা হয়। 
সহজ কথায়, ভেরিয়েবল হলো একটি পাত্র বা কন্টেইনারের মতো, যার ভেতরে প্রয়োজনমতো তথ্য রাখা যায় এবং পরে তা পরিবর্তনও করা যায়।

C++-এ ভেরিয়েবলের নাম দেওয়ার জন্য কিছু নির্দিষ্ট নিয়ম আছে, যা অমান্য করলে কোডে এরর (Error) আসবে:

বৈধ ক্যারেক্টার: ভেরিয়েবলের নামের মধ্যে শুধুমাত্র ইংরেজি অক্ষর (a-z, A-Z), সংখ্যা (0-9) এবং আন্ডারস্কোর (_) ব্যবহার করা যাবে।

শুরুর নিয়ম: ভেরিয়েবলের নাম অবশ্যই কোনো অক্ষর বা আন্ডারস্কোর দিয়ে শুরু হতে হবে। কোনো সংখ্যা দিয়ে শুরু করা যাবে না (যেমন: int 1stNumber; ভুল, কিন্তু int number1; সঠিক)।

স্পেস বা ফাঁকা জায়গা: ভেরিয়েবলের নামের মাঝখানে কোনো স্পেস দেওয়া যাবে না (যেমন: int my Age; ভুল)।

কীওয়ার্ড (Keywords): C++ এর নিজস্ব কিছু সংরক্ষিত শব্দ বা কীওয়ার্ড আছে (যেমন: int, float, if, for, return), এগুলোকে ভেরিয়েবলের নাম হিসেবে ব্যবহার করা যাবে না।


Camel, Pascal, Snake Case ব্যবহার করা যাবে

Camel Case (ক্যামেল কেস): প্রথম শব্দ ছোট হাতের, পরের শব্দগুলোর প্রথম অক্ষর বড় হাতের। (C++ এ ভেরিয়েবলের নামের জন্য এটি সবচেয়ে বেশি জনপ্রিয়)।

উদাহরণ: int studentAge;, double productPrice;

Snake Case (স্নেক কেস): সব শব্দ ছোট হাতের এবং মাঝে আন্ডারস্কোর (_) দিয়ে জোড়া দেওয়া।

উদাহরণ: int student_age;, double product_price;

Pascal Case (প্যাসকেল কেস): প্রতিটি শব্দের প্রথম অক্ষরই বড় হাতের। (C++ এ সাধারণত ভেরিয়েবলের জন্য এটি কম ব্যবহৃত হয়, তবে Class বা Struct এর নাম দেওয়ার জন্য এটি বেশি ব্যবহৃত হয়)।

উদাহরণ: class StudentInfo;, int StudentAge;
    

C++ একটি সম্পূর্ণ Case Sensitive ল্যাঙ্গুয়েজ। এর মানে হলো ছোট হাতের অক্ষর (Lowercase) এবং বড় হাতের অক্ষর (Uppercase) কে C++ সম্পূর্ণ আলাদা দুটি জিনিস হিসেবে গণ্য করে।

int age = 20;
int Age = 30;
int AGE = 40;


ডাটা টাইপ কি আগে বলে দেওয়া লাগবে
অবশ্যই আগে বলে দিতে হবে। C++ হলো একটি Statically Typed ল্যাঙ্গুয়েজ। এর মানে হলো কোনো ভেরিয়েবল তৈরি করার সময় কম্পাইলারকে আগেই গ্যারান্টি দিয়ে বলতে হবে 
যে এই ভেরিয়েবলের ভেতর কী ধরণের ডাটা (যেমন: পূর্ণসংখ্যা, দশমিক সংখ্যা, নাকি টেক্সট) রাখা হবে।

int myNumber = 10;       // পূর্ণসংখ্যার জন্য int
double mySalary = 550.50; // দশমিকের জন্য double
char myGrade = 'A';       // একটি অক্ষরের জন্য char
string myName = "Mohammad"; // টেক্সটের জন্য string


আধুনিক C++ ট্রিক (auto কিউওয়ার্ড):

C++11 ভার্সন থেকে একটি নতুন সুবিধা এসেছে। যদি ডাটা টাইপ সরাসরি লিখতে না চাওয়া হয়, তবে auto কিউওয়ার্ড ব্যবহার করা যাবে 
তখন কম্পাইলার ডান পাশের মান দেখে নিজে থেকেই ডাটা টাইপ বুঝে নেয়। তবে ভেরিয়েবল তৈরির সময়েই মান অ্যাসাইন করে দিতে হবে:

auto x = 100;      // কম্পাইলার নিজে থেকেই একে int বানিয়ে নেবে
auto y = "Hello";  // কম্পাইলার নিজে থেকেই একে string বানিয়ে নেবে







C++ ল্যাঙ্গুয়েজে Token (টোকেন) হলো একটি প্রোগ্রামের সবচেয়ে ক্ষুদ্রতম একক (Smallest Individual Unit)।

C++ ল্যাঙ্গুয়েজে টোকেন মূলত ৬ প্রকার

১. Keywords (কীওয়ার্ড)
এগুলো হলো C++ ল্যাঙ্গুয়েজের নিজস্ব কিছু সংরক্ষিত শব্দ (Reserved Words), যেগুলোর নির্দিষ্ট অর্থ কম্পাইলারের কাছে আগে থেকেই ঠিক করা আছে। এগুলোকে নিজের মতো বা ভেরিয়েবলের নাম হিসেবে ব্যবহার করতে পারবেন না।

উদাহরণ: int, float, if, else, for, while, return, class, public ইত্যাদি।



২. Identifiers (আইডেন্টিফায়ার)
ইউজার বা প্রোগ্রামার নিজে কোড লেখার সময় ভেরিয়েবল, ফাংশন, অ্যারে বা ক্লাসের যে নামগুলো দেয়, সেগুলোকে আইডেন্টিফায়ার বলে।

উদাহরণ: int studentAge; — এখানে studentAge হলো একটি আইডেন্টিফায়ার।

নিয়ম: এটি শুধু অক্ষর, সংখ্যা এবং আন্ডারস্কোর (_) দিয়ে তৈরি হতে পারে এবং সংখ্যা দিয়ে শুরু হতে পারবে না।



৩. Constants / Literals (কনস্ট্যান্ট বা লিটারেলস)
প্রোগ্রামে ব্যবহৃত যে মানগুলো ফিক্সড বা অপরিবর্তনশীল, সেগুলোকে কনস্ট্যান্ট বলে।

Integer Constant: 10, 500

Floating-point Constant: 3.1416, 99.99

Character Constant: 'A', 'z' (সিঙ্গেল কোটেশনের ভেতরে থাকে)


৪. Strings (স্ট্রিং)
ডাবল কোটেশন ("") চিহ্নের ভেতরে থাকা এক বা একাধিক অক্ষরের সমষ্টিকে স্ট্রিং টোকেন বলা হয়।

উদাহরণ: "Mohammad", "Hello World", "C++ Programming" ইত্যাদি।

string str = "He said, \"C++ is awesome!\"\nLet's learn it.";
cout << str << endl;

string str = R"delimiter(He said, "C++ is awesome!" )"delimiter";
cout << str << endl;


৫. Operators (অপারেটর)
গাণিতিক বা লজিক্যাল হিসাব-নিকাশ করার জন্য যেসব বিশেষ চিহ্ন বা সিম্বল ব্যবহার করা হয়, সেগুলোকে অপারেটর বলে।

Arithmetic: +, -, *, /, %

Relational: <, >, ==, !=

Assignment: =, +=
    


৬. Special Chars / Punctuators (বিশেষ চিহ্ন)
কোডের গঠন ঠিক রাখতে এবং বিভিন্ন স্টেটমেন্ট বা ব্লককে আলাদা করতে যেসব চিহ্ন ব্যবহৃত হয়।

[ ] (Brackets): অ্যারের সাইজ বোঝাতে।

( ) (Parentheses): ফাংশন বা কন্ডিশনের জন্য।

{ } (Braces): কোডের ব্লক বা সীমানা বোঝাতে।

; (Semicolon): স্টেটমেন্ট শেষ করতে (যা আমরা আগেই জেনেছি)।

, (Comma): একাধিক ভেরিয়েবল আলাদা করতে।


int total = score + 50;

এখানে কম্পাইলার কোডটিকে এভাবে ভেঙে টোকেন হিসেবে দেখবে:
১. int  Keyword
২. total Identifier
৩. =  Operator
৪. score  Identifier
৫. +  Operator
৬. 50  Constant
৭. ;  Punctuator

    

#include <iostream>
using namespace std;

int main()

{
    int age = 29;          // integer
    double price = 10.50;   // float number 
    char grade = 'A';      // character
    string name = "Abdullah"; // text
    bool myBoolean = true;  //bool
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    return 0;

}

#include <iostream>
using namespace std;
int main(){
   string name = "Mohammad";
   int age = 30;
   float height = 5.2;
   string village = "Changmary";
   name = "Abdullah";
   string subject = "programming";
   bool isPass = true;
   char grade = 'A';
   cout << "My name is: " <<name << " My age is: " <<age << " My height is: " <<height << " My village is: " <<village <<endl;
   cout << "My favourite subject is: " <<subject <<endl;
   cout << "My grade is: " <<grade <<endl;
   cout << "i am " <<isPass <<endl;
   return 0;
}



#include <iostream>
#include <string>
#include <iomanip> // দশমিকের ঘর এবং ফরম্যাটিং এর জন্য

using namespace std;

int main() {
    // --- ১. টেক্সট ডাটা (Strings) ---
    string name        = "Abdullah"; // সরাসরি আপডেট করা নাম
    string village     = "Changmary";
    string subject     = "Programming";
    string gmail       = "Programmeraziz216@gmail.com";
    string phoneNumber = "01568451112";
    const string COUNTRY = "Bangladesh"; // দেশের নাম কনস্ট্যান্ট রাখা ভালো

    // --- ২. পূর্ণসংখ্যা ও অক্ষর (Integer & Char) ---
    int age          = 30;
    char grade       = 'A';
    char bloodGroup  = '+';

    // --- ৩. দশমিক সংখ্যা (Floating Points) ---
    float height          = 5.2f;
    double accountBalance = 96.8965423589;

    // --- ৪. লজিক (Booleans) ---
    bool isPass      = true;
    bool isGraduated = false;

    // --- আউটপুট সেকশন ---
    cout << "--------------- Student Information -----------------" << endl;
    
    cout << "My name is         : " << name << endl;
    cout << "My age is          : " << age << endl;
    cout << "My height is       : " << height << " feet" << endl;
    cout << "My village is      : " << village << endl;
    cout << "My subject is      : " << subject << endl;
    cout << "My Grade is        : " << grade << endl;

    // boolalpha দিলে 1/0 এর বদলে true/false দেখাবে
    cout << boolalpha; 
    cout << "I'am Passed        : " << isPass << endl;
    cout << "I'am Graduated     : " << isGraduated << endl;

    আসলে boolalpha কোনো টেক্সট হিসেবে প্রিন্ট হয় না। এটি একটি I/O Manipulator, যার কাজ হলো এর পরবর্তী বুলিয়ান (bool) ভেরিয়েবলগুলোর আউটপুট কেমন হবে তা ঠিক করে দেওয়া।
    boolalpha ছাড়া: true হলে 1 এবং false হলে 0 প্রিন্ট হয়।
    boolalpha দিলে: true হলে সরাসরি true এবং false হলে false প্রিন্ট হয়।
    এটি স্ক্রিনে কিছু লিখে দেখাবে না, বরং পর্দার আড়ালে কাজ করে আউটপুট ফরম্যাট বদলে দেয়।

   সহজ কথায় বলতে গেলে, I/O Manipulator হলো এমন কিছু বিশেষ ফাংশন বা ইনস্ট্রাকশন যা Input/Output (যেমন cout বা cin) এর আচরণ বা স্টাইল পরিবর্তন করতে ব্যবহৃত হয়।
   এটি কোনো ডেটা নয়, বরং ডেটাটি স্ক্রিনে কিভাবে দেখাবে তার একটি নির্দেশ।

    bool isPass = true;

    cout << isPass;            // আউটপুট আসবে: 1
    cout << boolalpha;         // এখানে কিছুই প্রিন্ট হবে না, শুধু মোড পরিবর্তন হবে
    cout << isPass;            // এখন আউটপুট আসবে: true

    আবার 1 এবং 0 তে ফিরে যেতে

    cout << boolalpha << true << endl;   // আউটপুট: true
    cout << noboolalpha << true << endl; // আউটপুট: 1

    // দশমিকের পর ৫ ঘর পর্যন্ত ব্যালেন্স দেখাচ্ছি
    cout << fixed << setprecision(5);
    cout << "My account balance : $" << accountBalance << endl;

    এটিও ঠিক boolalpha এর মতোই কাজ করে। fixed এবং setprecision কোনো সাধারণ টেক্সট নয় যে তারা সরাসরি স্ক্রিনে প্রিন্ট হবে। এদের বলা হয় I/O Manipulators।
    এদের কাজ হলো কম্পিউটারকে ইনস্ট্রাকশন বা নির্দেশ দেওয়া যে, পরবর্তী সংখ্যাগুলো সে কীভাবে দেখাবে।
    fixed: এটি কম্পিউটারকে বলে, "দশমিক সংখ্যাটিকে বৈজ্ঞানিক ফরমেটে (যেমন 2.0e+01) না দেখিয়ে সাধারণ স্থির (Fixed) ফরমেটে দেখাও।
    "setprecision(5): এটি কম্পিউটারকে বলে, "দশমিকের পর ঠিক ৫টি ঘর দেখাও।"

    cout << fixed << setprecision(5);
   তখন স্ক্রিনে কিছু লেখা আসে না, কিন্তু কম্পিউটার তার মেমরিতে সেট করে নেয় যে "এখন থেকে কোনো দশমিক সংখ্যা আসলে আমি ৫ ঘর দেখাবো"।
   একই লাইনে এভাবে লিখলে কোড আরও পরিষ্কার থাকে:
   cout << "Balance : $" << fixed << setprecision(5) << accountBalance << endl;

    cout << "My blood group is  : " << bloodGroup << endl;
    cout << "My country is      : " << COUNTRY << endl;
    cout << "My gmail is        : " << gmail << endl;
    cout << "My phone number is : " << phoneNumber << endl;

    cout << "----------------------------------------------------" << endl;

    return 0;
}






#include <iostream>
#include <string> // string ব্যবহারের জন্য এটি রাখা ভালো প্র্যাকটিস
#include <iomanip> // দশমিকের পর ঘর নির্দিষ্ট করার জন্য

using namespace std;

int main() {
    // ১. ভেরিয়েবল ডিক্লারেশন এবং ইনিশিয়ালাইজেশন
    string name = "Abdullah"; // সরাসরি আপডেট করা মানটিই শুরুতে দেওয়া যায়
    int age = 30;
    float height = 5.2f; // float এর ক্ষেত্রে শেষে 'f' দেওয়া ভালো
    string village = "Changmary";
    string subject = "Programming";
    bool isPassed = true;
    float cgpa = 3.50f;
    char grade = 'A';
    double accountBalance = 23.25698865;
    // একাধিক ভেরিয়েবল এক লাইনে ডিক্লেয়ার করা
    int num1 = 20, num2 = 30;

    // ২. আউটপুট ফরম্যাটিং
    cout << "---------- Personal Info ----------" << endl;
    cout << "Name      : " << name << endl;
    cout << "Age       : " << age << " years" << endl;
    cout << "Height    : " << height << " feet" << endl;
    cout << "Village   : " << village << endl;
    cout << "Subject   : " << subject << endl;

    // ৩. বুলিয়ান মানকে 1/0 এর বদলে True/False দেখানো
    cout << "Passed    : " << boolalpha << isPassed << endl; 

    // ৪. দশমিকের পর ২ ঘর নির্দিষ্ট করা
    cout << "CGPA      : " << fixed << setprecision(2) << cgpa << endl;
    cout << "Grade     : " << grade << endl;
    cout << "Account Balance: " << fixed << setprecision(8) << accountBalance << endl;
    
    cout << "-----------------------------------" << endl;
    cout << "Numbers   : Num1 = " << num1 << " | Num2 = " << num2 << endl;

    return 0;
}

১. #include <string>: যদিও অনেক কম্পাইলারে শুধু iostream দিলেই কাজ করে, কিন্তু string ব্যবহার করলে এই হেডার ফাইলটি ইনক্লুড করা স্ট্যান্ডার্ড নিয়ম।

২. boolalpha এর ব্যবহার: ডিফল্টভাবে C++ এ bool প্রিন্ট করলে 1 বা 0 আসে। boolalpha ব্যবহার করলে সেটি সরাসরি true বা false লেখা দেখাবে, যা পড়তে সুবিধা হয়।

৩. দশমিক নিয়ন্ত্রণ (fixed ও setprecision) cgpa = 3.50 , কিন্তু সাধারণ cout এ এটি শুধু 3.5 দেখাবে। setprecision(2) ব্যবহার করলে এটি সব সময় দশমিকের পর দুই ঘর (যেমন: 3.50) দেখাবে।

৪. আলাইনমেন্ট (Alignment): আমি কোলনগুলো (:) একই লাইনে সাজিয়েছি। এতে আউটপুটটি দেখতে অনেক বেশি পরিচ্ছন্ন এবং টেবিলের মতো মনে হয়।

৫. endl এর ব্যবহার: এক লাইনে অনেকগুলো endl , যা ঠিক আছে। তবে অনেক বড় প্রোগ্রামে \n ব্যবহার করা দ্রুত কাজ করে। এখানে স্টাইলটি সুন্দর আছে।

#include <iomanip> না দাও, তবে কোড রান করবে কিন্তু নিচের সুবিধাগুলো পাবো না:

setprecision(2) কাজ করবে না।

fixed কাজ করবে না।

setw(10) কাজ করবে না।

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string name = "Abdullah";
    cout << left << setw(10) << "Name" << ": " << name << endl;
    return 0;
} 

এই কোডটিতে left এবং setw() হলো C++ এর <iomanip> লাইব্রেরির দুটি I/O Manipulator (ইনপুট/আউটপুট ম্যানিপুলেটর)। এগুলো দিয়ে আউটপুটের ফরম্যাটিং বা ডিজাইন সুন্দর করা হয়।

১. setw(10) কী এবং এটি কীভাবে কাজ করে?

setw কথাটির পূর্ণরূপ হলো Set Width (প্রস্থ নির্ধারণ করা)।

setw(10) দিয়ে কম্পাইলারকে বলা হয়: "এর ঠিক পরে যে লেখাটি প্রিন্ট হবে, তার জন্য আউটপুট স্ক্রিনে মোট ১০ ঘর জায়গা বরাদ্দ করো।"

১০ ঘরের হিসাবটি যেভাবে কাজ করবে:

প্রিন্ট "Name" শব্দটি।

"Name" শব্দটিতে মোট ৪টি ক্যারেক্টার বা বর্ণ রয়েছে (N, a, m, e)।

 জায়গা নির্ধারণ  ১০ ঘরের (setw(10))।

সুতরাং, "Name" বসবে ৪টি ঘরে এবং বাকি ৬টি ঘর স্পেস (খালি জায়গা) হিসেবে থাকবে।

২. left কী কাজ করে?

ডিফল্টভাবে C++ এ setw() ব্যবহার করলে লেখাগুলো ডানদিকে চেপে বসে (Right-aligned)।

কিন্তু সামনে left লিখে দিলে আউটপুটটি বামে চেপে বসবে (Left-aligned) এবং বাকি খালি স্পেসগুলো ডানে যোগ হবে।

Name      : Abdullah

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // ১. স্ট্রিং এবং ক্যারেক্টার (Text & Symbols)
    string userName = "Abdullah"; 
    string village = "Changmary";
    string subject = "Computer Science";
    char userGrade = 'A';
    char bloodGroup = '+'; // এক্সট্রা ক্যারেক্টার ডাটা

    // ২. পূর্ণসংখ্যা (Integers)
    int userAge = 29;
    int rollNumber = 101;
    long long nationalID = 1234567890123LL; // খুব বড় সংখ্যার জন্য long long

    // ৩. দশমিক সংখ্যা (Floating Points)
    float productPrice = 10.50f; 
    float height = 5.8f;
    double accountBalance = 20.896458358;
    double cgpa = 3.85;

    // ৪. বুলিয়ান (Logic)
    bool isAccountActive = true; 
    bool hasScholarship = false;
    bool married = true;

    // ৫. কনস্ট্যান্ট (মান পরিবর্তন করা যাবে না)
    const string COUNTRY = "Bangladesh";

    // --- আউটপুট ডিজাইন ---
    cout << "========================================" << endl;
    cout << "        FULL USER DATA PROFILE          " << endl;
    cout << "========================================" << endl;

    cout << left << setw(18) << "Name"           << ": " << userName << endl;
    cout << left << setw(18) << "Age"            << ": " << userAge << " years" << endl;
    cout << left << setw(18) << "National ID"    << ": " << nationalID << endl;
    cout << left << setw(18) << "Village"        << ": " << village << endl;
    cout << left << setw(18) << "Subject"        << ": " << subject << endl;
    cout << left << setw(18) << "Blood Group"    << ": B" << bloodGroup << endl;
    
    cout << "----------------------------------------" << endl;
    
    cout << left << setw(18) << "Height"         << ": " << height << " feet" << endl;
    cout << left << setw(18) << "Product Price"  << ": $" << fixed << setprecision(2) << productPrice << endl;
    cout << left << setw(18) << "CGPA"           << ": " << cgpa << endl;
    cout << left << setw(18) << "Grade"          << ": " << userGrade << endl;
    
    // ৫ ঘর পর্যন্ত ব্যালেন্স
    cout << left << setw(18) << "Account Balance"<< ": $" << fixed << setprecision(5) << accountBalance << endl;

    cout << "----------------------------------------" << endl;
    
    // boolalpha দিয়ে true/false দেখানো
    cout << boolalpha; 
    cout << left << setw(18) << "Account Status" << ": " << isAccountActive << endl;
    cout << left << setw(18) << "Scholarship"    << ": " << hasScholarship << endl;
    cout << left << setw(18) << "Country"        << ": " << COUNTRY << endl;
     cout << left << setw(18) << "Married" << ":" << " " << (married ? "Yes" : "No") << endl;

    cout << "========================================" << endl;

    return 0;
} 


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // ১. টেক্সট এবং অক্ষর (Text & Character)
    string name = "Abdullah";      // অনেকগুলো অক্ষর বা বাক্য
    char grade = 'A';              // একটি মাত্র অক্ষর (Single Quote)
    string village = "Changmary";  // আরও একটি টেক্সট ডাটা

    // ২. পূর্ণসংখ্যা (Integers)
    int age = 29;                  // সাধারণ পূর্ণসংখ্যা
    long long phone = 88017000000; // অনেক বড় সংখ্যার জন্য long long
    short roomNumber = 101;        // ছোট সংখ্যার জন্য (মেমোরি কম নেয়)

    // ৩. দশমিক সংখ্যা (Floating Points)
    float height = 5.8f;           // সাধারণ দশমিক (শেষে f দিতে হয়)
    double balance = 20.896458358; // অনেক বড় এবং নিখুঁত দশমিক সংখ্যা
    float price = 10.50f;          // পণ্যের দাম

    // ৪. লজিক (Boolean)
    bool isStudent = true;         // শুধু true (১) অথবা false (০)
    bool isGraduated = false;

    // ৫. কনস্ট্যান্ট (মান যা আর বদলানো যাবে না)
    const double PI = 3.14159;

    // --- আউটপুট ---
    cout << "===== All Data Types Profile =====" << endl;
    
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << " years" << endl;
    cout << "Phone       : " << phone << endl;
    cout << "Village     : " << village << endl;
    
    cout << "Height      : " << height << " feet" << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Price       : $" << price << endl;

    // ব্যালেন্স ৫ ঘর পর্যন্ত দেখাচ্ছি
    cout << "Balance     : $" << fixed << setprecision(5) << balance << endl;

    // true/false সরাসরি দেখানোর জন্য boolalpha
    cout << boolalpha; 
    cout << "Is Student  : " << isStudent << endl;
    cout << "Graduated   : " << isGraduated << endl;
    
    cout << "Constant PI : " << PI << endl;
    cout << "==================================" << endl;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 যখন << " " << "years old" লিখা হয়, তখন কম্পাইলারকে বারবার << অপারেটর কল করতে হয়। তার চেয়ে " years old" (শুরুতে একটি স্পেস দিয়ে) লেখা বেশি দক্ষ।
 যদি অনেকগুলো লাইন এমন থাকে, তবে বারবার left << setw(15) না লিখে একটি কনস্ট্যান্ট ভেরিয়েবল ব্যবহার করা যেতে পারে:


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // কিছু স্যাম্পল ডাটা
    string name = "Mohammad Abdullah";
    int age = 22;
    float height = 5.8f;
    string university = "BUET";
    string dept = "CSE";
    string city = "Dhaka";
    string hobby = "Coding";

    const int w = 18; // এখানে এক জায়গায় মান পরিবর্তন করলে সব লাইনে কাজ করবে

    cout << "           STUDENT PROFILE               " << endl;
    cout << "==========================================" << endl;

    cout << left << setw(w) << "Full Name"     << ": " << name << endl;
    cout << left << setw(w) << "Age"           << ": " << age << " years old" << endl;
    cout << left << setw(w) << "Height"        << ": " << fixed << setprecision(1) << height << " feet" << endl;
    cout << left << setw(w) << "University"    << ": " << university << endl;
    cout << left << setw(w) << "Department"    << ": " << dept << endl;
    cout << left << setw(w) << "Current City"  << ": " << city << endl;
    cout << left << setw(w) << "Favorite Hobby" << ": " << hobby << endl;
    return 0;
}

এখানে int এবং const int এর কাজ সম্পূর্ণ আলাদা।
int হলো একটি ডাটা টাইপের নাম (যেমন: পূর্ণসংখ্যা)। এটি প্রোগ্রামে হাজার বার ব্যবহার করা যাবে, 
যতক্ষণ ভেরিয়েবলের নামগুলো (যেমন: num1, width, age) আলাদা থাকছে।

int num1: এটি একটি সাধারণ ভেরিয়েবল যার মান চাইলে পরে পরিবর্তন করা যাবে।

const int width: এটি একটি "ধ্রুবক" বা Constant। const যুক্ত করার মানে হলো, 
কম্পিউটারকে বলা হসছে যে width এর মান পুরো প্রোগ্রামে সব সময় ১৫-ই থাকবে, এটি কেউ ভুল করেও পরিবর্তন করতে পারবে না।
