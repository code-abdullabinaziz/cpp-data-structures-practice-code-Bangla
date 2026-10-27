সি++ (C++) এ Variable (ভেরিয়েবল) হলো মেমোরির একটি নির্দিষ্ট জায়গার নাম, যেখানে  বিভিন্ন তথ্য বা ডেটা জমা রাখা হয়। 
সহজ কথায়, ভেরিয়েবল হলো একটি পাত্র বা কন্টেইনারের মতো, যার ভেতরে প্রয়োজনমতো তথ্য রাখা যায় এবং পরে তা পরিবর্তনও করা যায়।

C++-এ ভেরিয়েবলের নাম দেওয়ার জন্য কিছু নির্দিষ্ট নিয়ম আছে, যা অমান্য করলে কোডে এরর (Error) আসবে:

বৈধ ক্যারেক্টার: ভেরিয়েবলের নামের মধ্যে শুধুমাত্র ইংরেজি অক্ষর (a-z, A-Z), সংখ্যা (0-9) এবং আন্ডারস্কোর (_) ব্যবহার করা যাবে।

শুরুর নিয়ম: ভেরিয়েবলের নাম অবশ্যই কোনো অক্ষর বা আন্ডারস্কোর দিয়ে শুরু হতে হবে।
কোনো সংখ্যা দিয়ে শুরু করা যাবে না (যেমন: int 1stNumber; ভুল, কিন্তু int number1; সঠিক)।

স্পেস বা ফাঁকা জায়গা: ভেরিয়েবলের নামের মাঝখানে কোনো স্পেস দেওয়া যাবে না (যেমন: int my Age; ভুল)।

কীওয়ার্ড (Keywords): C++ এর নিজস্ব কিছু সংরক্ষিত শব্দ বা কীওয়ার্ড আছে (যেমন: int, float, if, for, return), এগুলোকে ভেরিয়েবলের নাম হিসেবে ব্যবহার করা যাবে না।


Camel, Pascal, Snake Case ব্যবহার করা যাবে

Camel Case (ক্যামেল কেস): প্রথম শব্দ ছোট হাতের, পরের শব্দগুলোর প্রথম অক্ষর বড় হাতের। (C++ এ ভেরিয়েবলের নামের জন্য এটি সবচেয়ে বেশি জনপ্রিয়)।

উদাহরণ: int studentAge;, double productPrice;

Snake Case (স্নেক কেস): সব শব্দ ছোট হাতের এবং মাঝে আন্ডারস্কোর (_) দিয়ে জোড়া দেওয়া।

উদাহরণ: int student_age;, double product_price;

Pascal Case (প্যাসকেল কেস): প্রতিটি শব্দের প্রথম অক্ষরই বড় হাতের। (C++ এ সাধারণত ভেরিয়েবলের জন্য এটি কম ব্যবহৃত হয়, 
তবে Class বা Struct এর নাম দেওয়ার জন্য এটি বেশি ব্যবহৃত হয়)।

উদাহরণ: class StudentInfo;, int StudentAge;
    

C++ একটি সম্পূর্ণ Case Sensitive ল্যাঙ্গুয়েজ। এর মানে হলো ছোট হাতের অক্ষর (Lowercase) 
এবং বড় হাতের অক্ষর (Uppercase) কে C++ সম্পূর্ণ আলাদা দুটি জিনিস হিসেবে গণ্য করে।

int age = 20;
int Age = 30;
int AGE = 40;


ডাটা টাইপ কি আগে বলে দেওয়া লাগবে
অবশ্যই আগে বলে দিতে হবে। C++ হলো একটি Statically Typed ল্যাঙ্গুয়েজ। 
এর মানে হলো কোনো ভেরিয়েবল তৈরি করার সময় কম্পাইলারকে আগেই গ্যারান্টি দিয়ে বলতে হবে 
যে এই ভেরিয়েবলের ভেতর কী ধরণের ডাটা (যেমন: পূর্ণসংখ্যা, দশমিক সংখ্যা, নাকি টেক্সট) রাখা হবে।



#include <iostream>
#include <string> // string ব্যবহারের জন্য এই হেডার ফাইল জরুরি

int main() {
    int myNumber = 10;    
    float height = 5.2f;
    double mySalary = 550.50;
    char myGrade = 'A';     
    std::string myName = "Mohammad";

    std::cout << "Number: " << myNumber << "\n";
    std::cout << "Height: " << height << " ft\n";
    std::cout << "Salary: " << mySalary << "\n";
    std::cout << "Grade: " << myGrade << "\n";
    std::cout << "Name: " << myName << "\n";

    return 0;
}




আধুনিক C++ ট্রিক (auto কিউওয়ার্ড):

C++11 ভার্সন থেকে একটি নতুন সুবিধা এসেছে। যদি ডাটা টাইপ সরাসরি লিখতে না চাওয়া হয়, তবে auto কিউওয়ার্ড ব্যবহার করা যাবে 
তখন কম্পাইলার ডান পাশের মান দেখে নিজে থেকেই ডাটা টাইপ বুঝে নেয়। তবে ভেরিয়েবল তৈরির সময়েই মান অ্যাসাইন করে দিতে হবে:


#include <iostream>
#include <string>

int main() {
    // Modern C++ Type Deduction (auto keyword)
    auto x = 100;           // কম্পাইলার নিজে থেকেই একে int বানিয়ে নেয়
    auto height = 5.211f;   // কম্পাইলার বুঝে নেয় এটি float
    auto grade = 'A';       // কম্পাইলার বুঝে নেয় এটি char
    auto text = "Abdullah"; // কম্পাইলার বুঝে নেয় এটি const char*

    // std::string এর জন্য স্পষ্টভাবে string লিখতে হয় অথবা s সাফিক্স ব্যবহার করা যায়
    std::string name = "Abdullah"; 

    std::cout << "Value of x: " << x << "\n";
    std::cout << "Name: " << name << "\n";

    return 0;
}



    
#include <iostream>
#include <string>

int main() {
    auto x = 10;        
    auto height = 5.211f; 
    auto grade = 'A';    
    auto name = "Abdullah"; 

    // std::cout এবং \n ব্যবহার করে প্রিন্ট করা হচ্ছে
    std::cout << "Number (x) : " << x << "\n";
    std::cout << "Height     : " << height << " ft\n";
    std::cout << "Grade      : " << grade << "\n";
    std::cout << "Name       : " << name << "\n";

    return 0;
}


কখন auto ব্যবহার করা বেশি সুবিধাজনক?
বড় বড় বা জটিল ডেটা টাইপের ক্ষেত্রে (যেমন এসটিএল ইটারেটর বা টেমপ্লেট) কোড ছোট ও পরিষ্কার রাখার জন্য auto আশীর্বাদের মতো কাজ করে। যেমন:


// auto না ব্যবহার করলে অনেক বড় টাইপ লিখতে হতো:
// std::vector<std::string>::iterator it = names.begin();

// auto ব্যবহার করলে খুব সহজ:
auto it = names.begin();

হেডার ফাইল হিসেবে <iostream> এবং <string> যুক্ত করা হয়েছে।

auto কিওয়ার্ডগুলোর কারণে কম্পাইলার নিজে থেকেই x-কে int, height-কে float, grade-কে char এবং name-কে string হিসেবে ধরে নিয়েছে।

cout এবং << অপারেটর ব্যবহার করে খুব সহজেই কনসোলে মানগুলো প্রিন্ট করা হয়েছে।




    #include <iostream>
#include <vector>
#include <string>

int main() {
    // ১. সাধারণ ভেরিয়েবলে auto-এর ব্যবহার
    auto x = 10;           // কম্পাইলার নিজে থেকে int ধরে নেয়
    auto height = 5.211f;  // কম্পাইলার নিজে থেকে float ধরে নেয়
    auto grade = 'A';      // কম্পাইলার নিজে থেকে char ধরে নেয়
    auto name = "Abdullah";// কম্পাইলার নিজে থেকে const char* ধরে নেয়

    std::cout << "Number (x) : " << x << "\n";
    std::cout << "Height     : " << height << " ft\n";
    std::cout << "Grade      : " << grade << "\n";
    std::cout << "Name       : " << name << "\n";
    std::cout << "------------------------------------\n";

    // ২. বড় এবং জটিল ডেটা টাইপে (যেমন: Vector Iterator) auto-এর আসল সুবিধা
    std::vector<std::string> names = {"Ali", "Hasan", "Abdullah", "Rahim"};

    std::cout << "Names in vector:\n";
    
    // auto না ব্যবহার করলে এত বড় টাইপ লিখতে হতো:
    // std::vector<std::string>::iterator it;
    // for (it = names.begin(); it != names.end(); ++it) { ... }

    // auto ব্যবহার করার কারণে কোড কত সহজ ও পরিষ্কার হয়েছে:
    for (auto it = names.begin(); it != names.end(); ++it) {
        std::cout << *it << "\n";
    }

    return 0;
}






C++ ল্যাঙ্গুয়েজে Token (টোকেন) হলো একটি প্রোগ্রামের সবচেয়ে ক্ষুদ্রতম একক (Smallest Individual Unit)।

C++ ল্যাঙ্গুয়েজে টোকেন মূলত ৬ প্রকার

১. Keywords (কীওয়ার্ড)
    
এগুলো হলো C++ ল্যাঙ্গুয়েজের নিজস্ব কিছু সংরক্ষিত শব্দ (Reserved Words), যেগুলোর নির্দিষ্ট অর্থ কম্পাইলারের কাছে আগে থেকেই ঠিক করা আছে।
এগুলোকে নিজের মতো বা ভেরিয়েবলের নাম হিসেবে ব্যবহার করতে পারবেন না।

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
#include <string> // string ব্যবহারের জন্য এই হেডার ফাইলটি আবশ্যিক

int main() {
    int age = 29;             // integer
    double price = 10.50;     // double number 
    char grade = 'A';         // character
    std::string name = "Abdullah"; // text
    bool myBoolean = true;    // bool (আউটপুটে 1 দেখাবে)

    // প্রফেশনাল স্ট্যান্ডার্ড (std::cout এবং \n) ব্যবহার করে প্রিন্ট করা হচ্ছে
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Price: " << price << "\n";
    std::cout << "Grade: " << grade << "\n";
    std::cout << "Boolean: " << myBoolean << "\n";

    return 0;
}




#include <iostream>
#include <string> // string ব্যবহারের জন্য এই হেডার ফাইলটি আবশ্যিক

int main() {
    std::string name = "Mohammad";
    int age = 30;
    float height = 5.2f; // float ডেটা টাইপের জন্য f সাফিক্স ব্যবহার করা শ্রেয়
    std::string village = "Changmary";
    
    // ভেরিয়েবল রিঅ্যাসাইনমেন্ট (আগের মান পরিবর্তন করে নতুন মান দেওয়া)
    name = "Abdullah"; 
    
    std::string subject = "programming";
    bool isPass = true;
    char grade = 'A';

    // প্রফেশনাল স্ট্যান্ডার্ড (std::cout এবং \n) অনুযায়ী প্রিন্ট করা হচ্ছে
    std::cout << "My name is: " << name << " My age is: " << age << " My height is: " << height << " My village is: " << village << "\n";
    std::cout << "My favourite subject is: " << subject << "\n";
    std::cout << "My grade is: " << grade << "\n";
    std::cout << "i am " << isPass << "\n";

    return 0;
}




#include <iostream>
#include <string>
#include <iomanip> // দশমিকের ঘর এবং ফরম্যাটিং এর জন্য

int main() {
    // --- ১. টেক্সট ডাটা (Strings) ---
    std::string name         = "Abdullah"; 
    std::string village      = "Changmary";
    std::string subject      = "Programming";
    std::string gmail        = "Programmeraziz216@gmail.com";
    std::string phoneNumber  = "01568451112";
    const std::string COUNTRY = "Bangladesh"; // কনস্ট্যান্ট ভেরিয়েবল

    // --- ২. পূর্ণসংখ্যা ও অক্ষর (Integer & Char) ---
    int age          = 30;
    char grade       = 'A';
    char bloodGroup  = '+'; // (যদি প্রয়োজন হয় ব্যবহার করা যাবে)

    // --- ৩. দশমিক সংখ্যা (Floating Points) ---
    float height            = 5.2f;
    double accountBalance   = 96.8965423589;

    // --- ৪. লজিক (Booleans) ---
    bool isPass      = true;
    bool isGraduated = false;

    // --- আউটপুট সেকশন ---
    std::cout << "--------------- Student Information -----------------\n";
    
    std::cout << "My name is           : " << name << "\n";
    std::cout << "My age is            : " << age << "\n";
    std::cout << "My height is         : " << height << " feet\n";
    std::cout << "My village is        : " << village << "\n";
    std::cout << "My country is        : " << COUNTRY << "\n";
    std::cout << "My subject is        : " << subject << "\n";
    std::cout << "Email                : " << gmail << "\n";
    std::cout << "Phone                : " << phoneNumber << "\n";
    std::cout << "My Grade is          : " << grade << "\n";
    
    // accountBalance সুন্দরভাবে দশমিকের পর নির্দিষ্ট ঘর দেখানোর জন্য fixed ও setprecision ব্যবহার করা যেতে পারে
    std::cout << "Account Balance      : " << std::fixed << std::setprecision(2) << accountBalance << "\n";

    // boolalpha দিলে 1/0 এর বদলে true/false দেখাবে
    std::cout << std::boolalpha;  
    std::cout << "I'am Passed          : " << isPass << "\n";
    std::cout << "I'am Graduated       : " << isGraduated << "\n";

    return 0;
}



// আসলে std::boolalpha কোনো টেক্সট হিসেবে প্রিন্ট হয় না। এটি একটি I/O Manipulator, 
// যার কাজ হলো এর পরবর্তী বুলিয়ান (bool) ভেরিয়েবলগুলোর আউটপুট কেমন হবে তা ঠিক করে দেওয়া।
// std::boolalpha ছাড়া: true হলে 1 এবং false হলে 0 প্রিন্ট হয়।
// std::boolalpha দিলে: true হলে সরাসরি true এবং false হলে false প্রিন্ট হয়।
// এটি স্ক্রিনে কিছু লিখে দেখাবে না, বরং পর্দার আড়ালে কাজ করে আউটপুট ফরম্যাট বদলে দেয়।

// সহজ কথায় বলতে গেলে, I/O Manipulator হলো এমন কিছু বিশেষ ফাংশন বা ইনস্ট্রাকশন 
// যা Input/Output (যেমন std::cout বা std::cin) এর আচরণ বা স্টাইল পরিবর্তন করতে ব্যবহৃত হয়।
// এটি কোনো ডেটা নয়, বরং ডেটাটি স্ক্রিনে কীভাবে দেখাবে তার একটি নির্দেশ।

bool isPass = true;

std::cout << isPass << "\n";            // আউটপুট আসবে: 1
std::cout << std::boolalpha;            // এখানে কিছুই প্রিন্ট হবে না, শুধু মোড পরিবর্তন হবে
std::cout << isPass << "\n";            // এখন আউটপুট আসবে: true

// আবার 1 এবং 0 তে ফিরে যেতে চাইলে std::noboolalpha ব্যবহার করতে হয়:
std::cout << std::boolalpha << true << "\n";    // আউটপুট: true
std::cout << std::noboolalpha << true << "\n"; // আউটপুট: 1

// দশমিকের পর ৫ ঘর পর্যন্ত ব্যালেন্স দেখাচ্ছি
std::cout << std::fixed << std::setprecision(5);
std::cout << "My account balance : $" << accountBalance << "\n";

// এটিও ঠিক std::boolalpha এর মতোই কাজ করে। std::fixed এবং std::setprecision 
// কোনো সাধারণ টেক্সট নয় যে তারা সরাসরি স্ক্রিনে প্রিন্ট হবে। এদের বলা হয় I/O Manipulators।
// এদের কাজ হলো কম্পিউটারকে ইনস্ট্রাকশন বা নির্দেশ দেওয়া যে, পরবর্তী সংখ্যাগুলো সে কীভাবে দেখাবে।
    
// std::fixed: এটি কম্পিউটারকে বলে, "দশমিক সংখ্যাটিকে বৈজ্ঞানিক ফরম্যাটে (যেমন 2.0e+01) না দেখিয়ে সাধারণ স্থির (Fixed) ফরম্যাটে দেখাও।"
// std::setprecision(5): এটি কম্পিউটারকে বলে, "দশমিকের পর ঠিক ৫টি ঘর দেখাও।"

// std::cout << std::fixed << std::setprecision(5); লিখলে স্ক্রিনে কিছু লেখা আসে না, 
// কিন্তু কম্পিউটার তার মেমরিতে সেট করে নেয় যে "এখন থেকে কোনো দশমিক সংখ্যা আসলে আমি ৫ ঘর দেখাবো"।
// একই লাইনে এভাবে লিখলে কোড আরও পরিষ্কার থাকে:
std::cout << "Balance : $" << std::fixed << std::setprecision(5) << accountBalance << "\n";

std::cout << "My blood group is  : " << bloodGroup << "\n";
std::cout << "My country is      : " << COUNTRY << "\n";
std::cout << "My gmail is        : " << gmail << "\n";
std::cout << "My phone number is : " << phoneNumber << "\n";

std::cout << "----------------------------------------------------\n";

return 0;
}







#include <iostream>
#include <string>  // string ব্যবহারের জন্য এটি রাখা ভালো প্র্যাকটিস
#include <iomanip> // দশমিকের পর ঘর নির্দিষ্ট করার জন্য

int main() {
    // ১. ভেরিয়েবল ডিক্লারেশন এবং ইনিশিয়ালাইজেশন
    std::string name = "Abdullah"; // সরাসরি আপডেট করা মানটিই শুরুতে দেওয়া যায়
    int age = 30;
    float height = 5.2f; // float এর ক্ষেত্রে শেষে 'f' দেওয়া ভালো
    std::string village = "Changmary";
    std::string subject = "Programming";
    bool isPassed = true;
    float cgpa = 3.50f;
    char grade = 'A';
    double accountBalance = 23.25698865;
    
    // একাধিক ভেরিয়েবল এক লাইনে ডিক্লেয়ার করা
    int num1 = 20, num2 = 30;

    // ২. আউটপুট ফরম্যাটিং
    std::cout << "---------- Personal Info ----------\n";
    std::cout << "Name      : " << name << "\n";
    std::cout << "Age       : " << age << " years\n";
    std::cout << "Height    : " << height << " feet\n";
    std::cout << "Village   : " << village << "\n";
    std::cout << "Subject   : " << subject << "\n";

    // ৩. বুলিয়ান মানকে 1/0 এর বদলে True/False দেখানো (std::boolalpha ব্যবহার করে)
    std::cout << std::boolalpha; 
    std::cout << "Passed    : " << isPassed << "\n"; 

    // ৪. দশমিকের পর ঘর নির্দিষ্ট করা (std::fixed এবং std::setprecision ব্যবহার করে)
    std::cout << "CGPA      : " << std::fixed << std::setprecision(2) << cgpa << "\n";
    std::cout << "Grade     : " << grade << "\n";
    std::cout << "Account Balance: " << std::fixed << std::setprecision(8) << accountBalance << "\n";
    
    std::cout << "-----------------------------------\n";
    std::cout << "Numbers   : Num1 = " << num1 << " | Num2 = " << num2 << "\n";

    return 0;
}



/* 
   === C++ Code Learning Notes ===

   1. #include <string>: 

      যদিও কিছু কম্পাইলারে এটি নিজে থেকে লোড হয়ে যায়, তবে প্রফেশনাল স্ট্যান্ডার্ড 
      বজায় রাখতে string ব্যবহার করার সময় এই হেডার ফাইলটি ইনক্লুড করা বাধ্যতামূলক।


   2. std::boolalpha এর ব্যবহার: 

      ডিফল্টভাবে C++ এ bool প্রিন্ট করলে 1 বা 0 আসে। std::boolalpha ব্যবহার 
      করলে সেটি সরাসরি true বা false প্রিন্ট করে, যা পড়তে সহজ হয়।


   3. দশমিক নিয়ন্ত্রণ (std::fixed ও std::setprecision): 

      যেমন: cgpa = 3.50, কিন্তু সাধারণ cout এ এটি শুধু 3.5 প্রিন্ট করে। 
      std::fixed এবং std::setprecision(2) ব্যবহার করলে এটি সবসময় দশমিকের পর 
      নির্দিষ্ট দুই ঘর (যেমন: 3.50) দেখায়। (নোট: এর জন্য #include <iomanip> জরুরি)।


   4. আলাইনমেন্ট (Alignment): 

      আউটপুটের কোলনগুলো (:) সোজাসুজি সাজালে কনসোল স্ক্রিন বা রিপোর্ট দেখতে 
      অনেক বেশি পরিচ্ছন্ন ও প্রফেশনাল মনে হয়।


   5. endl বনাম \n: 

      কোডে endl ব্যবহার করা গেলেও, বড় প্রজেক্ট বা ব্যাকএন্ডের পারফরম্যান্স 
      অপ্টিমাইজেশনের জন্য নিউলাইন (\n) ব্যবহার করা সবচেয়ে ভালো প্র্যাকটিস, 
      কারণ endl বারবার বাফার ফ্লাশ করে কোড স্লো করে দেয়।
*/




#include <iostream>
#include <iomanip> // setw এবং left/right ব্যবহারের জন্য এই হেডার ফাইল জরুরি

int main() {
    std::string name = "Abdullah"; 
    
    // std::left এবং std::setw ব্যবহার করে সুন্দর আলাইনমেন্ট তৈরি করা হচ্ছে
    std::cout << std::left << std::setw(10) << "Name" << ": " << name << "\n";

    return 0;
}

/* 
   C++ I/O Manipulators: setw() & left 

   এই কোডটিতে left এবং setw() হলো C++ এর <iomanip> লাইব্রেরির দুটি I/O Manipulator 
   (ইনপুট/আউটপুট ম্যানিপুলেটর)। এগুলো দিয়ে আউটপুটের ফরম্যাটিং বা ডিজাইন সুন্দর করা হয়।

   1. std::setw(10) কী এবং এটি কীভাবে কাজ করে?

   - setw কথাটির পূর্ণরূপ হলো Set Width (প্রস্থ নির্ধারণ করা)।
   - setw(10) দিয়ে কম্পাইলারকে বলা হয়: "এর ঠিক পরে যে লেখাটি প্রিন্ট হবে, 
     তার জন্য আউটপুট স্ক্রিনে মোট ১০ ঘর জায়গা বরাদ্দ করো।"
   - উদাহরণস্বরূপ: "Name" শব্দটিতে ৪টি বর্ণ আছে। setw(10) এর কারণে এটি ৪ ঘর 
     নিয়ে বসবে এবং বাকি ৬টি ঘর খালি স্পেস হিসেবে থাকবে।


   2. std::left কী কাজ করে?

   - ডিফল্টভাবে C++ এ setw() ব্যবহার করলে লেখাগুলো ডানদিকে চেপে বসে (Right-aligned)।
   - কিন্তু সামনে left লিখে দিলে আউটপুটটি বামে চেপে বসবে (Left-aligned) 
     এবং বাকি খালি স্পেসগুলো ডানে যোগ হবে (যেমন: "Name      : Abdullah")।
*/




/* 
   === C++ <iomanip> Header & I/O Manipulators ===

   C++ ল্যাঙ্গুয়েজে <iomanip> হলো একটি স্ট্যান্ডার্ড হেডার ফাইল (Header File)।
   এর পূর্ণরূপ হলো Input-Output Manipulators (ইনপুট-আউটপুট ম্যানিপুলেটরস)।
   সহজ কথায়, স্ক্রিনে বা কনসোলে আউটপুটকে সুন্দরভাবে সাজানো, ফরম্যাট করা বা ডিজাইন করার জন্য 
   যে বিশেষ ফাংশন বা ম্যানিপুলেটরগুলো ব্যবহার করা হয়, সেগুলো এই <iomanip> হেডার ফাইলের ভেতরে থাকে।

   <iomanip> কেন ব্যবহার করা হয়?
   - দশমিকের পর ঠিক কত ঘর দেখাবে তা নির্ধারণ করতে।
   - টেবিল বা কলাম আকারে সোজা করে ডাটা প্রিন্ট করতে।
   - খালি জায়গায় স্পেসের বদলে অন্য কোনো চিহ্ন (যেমন * বা .) বসাতে।
   - সংখ্যা ফরম্যাট বা বেস পরিবর্তন করতে।
*/

#include <iostream>
#include <iomanip> // <iomanip> হেডার ফাইল ইনক্লুড করা বাধ্যতামূলক

int main() {
    // ১. std::setw(n) (Set Width)
    // আউটপুটের জন্য নির্দিষ্ট সংখ্যক ঘর বা প্রস্থ (Width) খালি বরাদ্দ রাখে
    std::cout << std::setw(10) << "Code" << "\n"; // ১০ ঘরের জায়গায় "Code" প্রিন্ট হবে


    // ২. std::setprecision(n) (Set Precision)
    // দশমিক সংখ্যার ক্ষেত্রে দশমিকের পর মোট কত ঘর দেখাবে তা ঠিক করে দেয় (std::fixed এর সাথে ব্যবহৃত হয়)
    double pi = 3.14159265;
    std::cout << std::fixed << std::setprecision(2) << pi << "\n"; // আউটপুট দেখাবে: 3.14


    // ৩. std::setfill(ch) (Set Fill Character)
    // std::setw() দিয়ে তৈরি হওয়া খালি জায়গাগুলোতে স্পেসের বদলে অন্য কোনো ক্যারেক্টার বসায়
    std::cout << std::setfill('.') << std::setw(10) << "Age" << ": 25" << "\n";
    // আউটপুট: .......Age: 25 (লক্ষ্য করুন: setfill একবার সেট করলে পরবর্তী আউটপুটগুলোতেও এটি বজায় থাকে)


    // ৪. std::hex, std::dec, std::oct (Base Formatting)
    // সংখ্যার বেস পরিবর্তন করে (Hexadecimal, Decimal, Octal) দেখায়
    std::cout << std::hex << 255 << "\n"; // ২৫৫ কে হেক্সাডেসিমেলে "ff" হিসেবে প্রিন্ট করবে  

    return 0;
}



#include <iostream>
#include <string>
#include <iomanip> // setw, left, right, fixed, setprecision এর জন্য

int main() {
    // আধুনিক std::string এবং ভেরিয়েবল ডিক্লারেশন
    std::string name = "Abdullah";
    std::string address = "Gongachora, Rangpur";
    std::string subject = "Programming";
    char grade = 'A';
    std::string bloodGroup = "B+";
    int age = 30;
    bool married = false;
    float height = 5.211f;
    std::string language = "Bengali, English";
    double account_balance = 12.1234123;
    
    std::cout << "--------Student Information--------\n";
    
    // std::left, std::right এবং std::setw ব্যবহার করে টেবিল ফরম্যাটে প্রিন্ট করা হচ্ছে
    std::cout << std::left << std::setw(12) << "Name:" << " | " << std::right << std::setw(10) << name << "\n";
    std::cout << std::left << std::setw(12) << "Age:" << " | " << std::right << std::setw(10) << age << "\n";
    std::cout << std::left << std::setw(12) << "Height:" << " | " << std::right << std::setw(10) << std::fixed << std::setprecision(1) << height << "\n";
    std::cout << std::left << std::setw(12) << "Blood Group:" << " | " << std::right << std::setw(10) << bloodGroup << "\n";
    std::cout << std::left << std::setw(12) << "Address:" << " | " << std::right << std::setw(10) << address << "\n";
    std::cout << std::left << std::setw(12) << "Grade:" << " | " << std::right << std::setw(10) << grade << "\n";
    std::cout << std::left << std::setw(12) << "Subject:" << " | " << std::right << std::setw(10) << subject << "\n";
    std::cout << std::left << std::setw(12) << "Language:" << " | " << std::right << std::setw(10) << language << "\n";
    std::cout << std::left << std::setw(12) << "Account:" << " | " << std::right << std::setw(10) << std::fixed << std::setprecision(2) << account_balance << "\n";
    std::cout << std::left << std::setw(12) << "Married:" << " | " << std::right << std::setw(10) << (married ? "Yes" : "False") << "\n";
    
    return 0;
}





#include <iostream>
#include <iomanip> // setw এবং alignment এর জন্য
#include <string>  // string রিপিট করার জন্য (std::string(count, char))

int main(){
    std::string myName = "Abdullah";
    int age = 30;
    float height = 5.220f;
    double accountBalance = 12.124521142;
    char grade = 'A';
    std::string bloodGroup = "B+";
    std::string address = "Gongachora, Rangpur";
    std::string subject = "Programming";
    bool married = false;
    
    std::cout << std::string(35, '-') << "\n";
    std::cout << "      STUDENT INFORMATION      \n";
    std::cout << std::string(35, '-') << "\n"; // টাইটেলের নিচে একটি বর্ডার যোগ করা হলো

    std::cout << std::left << std::setw(14) << "Name:" << "|" << std::right << std::setw(15) << myName << "\n";
    std::cout << std::left << std::setw(14) << "Age:" << "|" << std::right << std::setw(15) << age << "\n";
    std::cout << std::left << std::setw(14) << "Height:" << "|" << std::right << std::setw(15) << std::fixed << std::setprecision(1) << height << "\n";
    std::cout << std::left << std::setw(14) << "Blood Group:" << "|" << std::right << std::setw(15) << bloodGroup << "\n";
    std::cout << std::left << std::setw(14) << "Address:" << "|" << std::right << std::setw(15) << address << "\n";
    std::cout << std::left << std::setw(14) << "Grade:" << "|" << std::right << std::setw(15) << grade << "\n";
    std::cout << std::left << std::setw(14) << "Subject:" << "|" << std::right << std::setw(15) << subject << "\n";
    std::cout << std::left << std::setw(14) << "Account:" << "|" << std::right << std::setw(15) << std::fixed << std::setprecision(2) << accountBalance << "\n";
    std::cout << std::left << std::setw(14) << "Married:" << "|" << std::right << std::setw(15) << (married ? "Yes" : "False") << "\n";
    
    std::cout << std::string(35, '-') << "\n"; // সবার নিচে শেষ বর্ডার

    return 0;
}
