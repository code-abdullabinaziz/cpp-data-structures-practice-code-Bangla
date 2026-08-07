C++ এ ব্যবহারকারীর কাছ থেকে ইনপুট (User Input) নেওয়ার জন্য cin (Character Input) অবজেক্ট এবং >> (Extraction Operator) ব্যবহার করা হয়, যা <iostream> লাইব্রেরির অংশ। 
এটি কীবোর্ড থেকে তথ্য পড়ে এবং ভেরিয়েবলে সংরক্ষণ করে। 
সাধারণ ইনপুটের জন্য cin >> variable; এবং পূর্ণ লাইন বা স্পেসসহ টেক্সটের জন্য getline(cin, stringVariable); ব্যবহার করা হয়। 
সিনট্যাক্স ব্যাখ্যা:
cin (Character Input) হলো iostream হেডার ফাইলের একটি অংশ। এটি ব্যবহার করতে হয় Extraction Operator (>>) এর সাথে।

সীমাবদ্ধতা: এটি Space (ফাঁকা জায়গা) বা Enter পেলে ইনপুট নেওয়া বন্ধ করে দেয়। আপনি নাম দিতে চাইলেন "Mohammad Abdullah", কিন্তু cin শুধু "Mohammad" টুকু নিবে।
   
getline() এর ব্যবহার (পুরো লাইন ইনপুট)
যদি স্পেসসহ কোনো নাম বা বাক্য ইনপুট নিতে চাওয়া হয়, তবে getline() ব্যবহার করা বাধ্যতামূলক।


C++ এ একই লাইনে অনেকগুলো ইনপুট নেওয়া যায়। একে বলা হয় Cascading।
int age;
string city;
cout << "Enter age and city: ";
cin >> age >> city;


/*
#include <iostream>
using namespace std;
int main(){

   string name;
   cout << "Name: ";
   cin >> name;
   cout << "Your name is: " << name << endl;

   int age;
   cout << "Age: ";
   cin >> age;
   cout << "Your age is: " << age <<endl;

   char ch;
   cout << "Enter Character: ";
   cin >> ch;
   cout << "Your Character is: " << ch;
   return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    cout << "Enter your full-name: ";
    getline(cin, fullName);

    int age;
    cout << "Enter your age: ";
    cin >> age;

    float height;
    cout << "Enter your height: ";
    cin >> height;

    cin.ignore(); 

    string village;
    cout << "Enter your village: ";
    getline(cin, village);

    string subject;
    cout << "Enter your subject: ";
    getline(cin, subject);

    float cgpa;
    cout << "Enter your cgpa: ";
    cin >> cgpa;

    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    cout << "\n--- Output ---\n";

    cout << "Name: " << fullName << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Village: " << village << endl;
    cout << "Subject: " << subject << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}




#include <iostream>
#include <string>  // স্ট্রিং এর জন্য অবশ্যই লাগবে
#include <iomanip> // আউটপুট সুন্দর করার জন্য (ঐচ্ছিক)

using namespace std;

int main() {
    string fullName, village, subject;
    int age;
    float height, cgpa;
    char grade;
    bool isPassed;

    // নামের ইনপুট
    cout << "Enter your Full name: ";
    getline(cin, fullName);

    // বয়সের ইনপুট
    cout << "Enter your age: ";
    cin >> age;

    // হাইটের ইনপুট
    cout << "Enter your height: ";
    cin >> height;
    
    // cin এর পর getline ব্যবহার করার আগে বাফার ক্লিয়ার করা
    cin.ignore(); 

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your cgpa: ";
    cin >> cgpa;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Are you passed? (1 for Yes, 0 for No): ";
    cin >> isPassed;

    // আউটপুট সেকশন
    cout << "\n------- Your Output ----------" << endl;
    cout << "Name:    " << fullName << endl;
    cout << "Age:     " << age << " years" << endl;
    cout << "Height:  " << height << " feet" << endl;
    cout << "Village: " << village << endl;
    cout << "Subject: " << subject << endl;
    cout << "CGPA:    " << cgpa << endl;
    cout << "Grade:   " << grade << endl;
    
    // boolalpha দিলে 0/1 এর বদলে true/false দেখাবে
    cout << "Status:  " << boolalpha << isPassed << endl; 

    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    string name;
    string village;
    string subject;
    string gmail;
    string phoneNumber;
    const string COUNTRY = "Bangladesh";
    string bloodGroup;

    int age;
    char grade;
    float height;
    double accountBalance;

    bool isPassed;
    bool isGraduated;

    // User Input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    cout << "Are you passed (1 = yes, 0 = no): ";
    cin >> isPassed;

    cout << "Are you graduated (1 = yes, 0 = no): ";
    cin >> isGraduated;
   
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
   
    cout << endl;
    cout << "------------ Student Information ------------" << endl;

    cout << left << setw(20) << "Name:" << name << endl;
    cout << left << setw(20) << "Village:" << village << endl;
    cout << left << setw(20) << "Subject:" << subject << endl;
    cout << left << setw(20) << "Gmail:" << gmail << endl;
    cout << left << setw(20) << "Phone Number:" << phoneNumber << endl;
    cout << left << setw(20) << "Country:" << COUNTRY << endl;
    cout << left << setw(20) << "Blood Group:" << bloodGroup << endl;
    cout << left << setw(20) << "Age:" << age << endl;
    cout << left << setw(20) << "Grade:" << grade << endl;
    cout << left << setw(20) << "Height:" << height << endl;
    cout << left << setw(20) << "Account Balance:" <<fixed <<setprecision(10) << accountBalance << endl;
    cout << left << setw(20) << "Passed:" <<boolalpha << isPassed << endl;
    cout << left << setw(20) << "Graduated:" <<boolalpha << isGraduated << endl;

    return 0;
}

   
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main()
{

    string name;
    string village;
    string subject;
    string gmail;
    string phoneNumber;
    const string COUNTRY = "Bangladesh";
    string bloodGroup;

    int age;
    char grade;
    float height;
    double accountBalance;

    bool isPassed;
    bool isGraduated;

    // User Input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    cout << "Are you passed (1 = yes, 0 = no): ";
    cin >> isPassed;

    cout << "Are you graduated (1 = yes, 0 = no): ";
    cin >> isGraduated;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer

    cout << endl;
    cout << "------------ Student Information ------------" << endl;

    cout << fixed << setprecision(2);
    cout << boolalpha;

    cout << left << setw(20) << "Name:" << name << endl;
    cout << left << setw(20) << "Village:" << village << endl;
    cout << left << setw(20) << "Subject:" << subject << endl;
    cout << left << setw(20) << "Gmail:" << gmail << endl;
    cout << left << setw(20) << "Phone Number:" << phoneNumber << endl;
    cout << left << setw(20) << "Country:" << COUNTRY << endl;
    cout << left << setw(20) << "Blood Group:" << bloodGroup << endl;
    cout << left << setw(20) << "Age:" << age << endl;
    cout << left << setw(20) << "Grade:" << grade << endl;
    cout << left << setw(20) << "Height:" << height << endl;
    cout << left << setw(20) << "Account Balance:" << accountBalance << endl;
    cout << left << setw(20) << "Passed:" << isPassed << endl;
    cout << left << setw(20) << "Graduated:" << isGraduated << endl;

    return 0;
}

  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  numeric_limits<streamsize>::max() → buffer এর সব character ignore করবে
  '\n' → newline পর্যন্ত পরিষ্কার করবে 
  অর্থাৎ input buffer clean করে দেয়।
  cin.ignore() ব্যবহার করা হয় input buffer থেকে অবাঞ্ছিত character (বিশেষ করে newline \n) মুছে ফেলার জন্য।



--------------------------------------------------------------------------------------------------------------
১০০% প্রফেশনাল ভার্সন (C++):
#include <iostream>
#include <iomanip>  // formatting এর জন্য
#include <string>
#include <limits>   // ইনপুট বাফার পরিষ্কারের জন্য

using namespace std;

int main()
{
    // ভেরিয়েবল ডিক্লেয়ারেশন
    string name, village, subject, gmail, phoneNumber, bloodGroup;
    const string COUNTRY = "Bangladesh"; // কনস্ট্যান্ট বড় হাতের অক্ষরে লেখা স্ট্যান্ডার্ড
    
    int age;
    char grade;
    float height;
    double accountBalance;
    bool isPassed, isGraduated;

    // --- ইউজার ইনপুট অংশ ---
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    cout << "Are you passed (1 for true, 0 for false): ";
    cin >> isPassed;

    cout << "Are you graduated (1 for true, 0 for false): ";
    cin >> isGraduated;

    // ইনপুট বাফার পরিষ্কার করা (যাতে ভবিষ্যতে অন্য ইনপুট নিতে সমস্যা না হয়)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // --- আউটপুট প্রেজেন্টেশন ---
    cout << "\n" << string(45, '-') << endl;
    cout << setw(30) << right << "STUDENT INFORMATION" << endl;
    cout << string(45, '-') << endl;

    // ফরম্যাটিং সেটিংস
    cout << fixed << setprecision(2); // দশমিকের পর ২ ঘর
    cout << boolalpha;                // ১/০ এর বদলে true/false দেখাবে
    cout << left;                     // লেখাগুলো বাম দিকে সাজাবে

    // আউটপুটগুলো টেবিল আকারে সাজানো
    cout << setw(20) << "Name"            << ": " << name << endl;
    cout << setw(20) << "Village"         << ": " << village << endl;
    cout << setw(20) << "Subject"         << ": " << subject << endl;
    cout << setw(20) << "Gmail"           << ": " << gmail << endl;
    cout << setw(20) << "Phone Number"    << ": " << phoneNumber << endl;
    cout << setw(20) << "Country"         << ": " << COUNTRY << endl;
    cout << setw(20) << "Blood Group"     << ": " << bloodGroup << endl;
    cout << setw(20) << "Age"             << ": " << age << " years" << endl;
    cout << setw(20) << "Grade"           << ": " << grade << endl;
    cout << setw(20) << "Height"          << ": " << height << " ft" << endl;
    cout << setw(20) << "Account Balance" << ": $" << accountBalance << endl;
    cout << setw(20) << "Passed Status"   << ": " << isPassed << endl;
    cout << setw(20) << "Graduation"      << ": " << isGraduated << endl;
    
    cout << string(45, '-') << endl;

    return 0;
}


-------------------------------------------------------------------------------------------------------------------------------------------------------------------
int num1, num2;
cout<< "Enter two numbers: ";
cin>> num1 >> num2;
cout<< "Numbers are: " <<num1 <<num2;

cin>> >>num1 >> num2;***
সি++ এ cin >> >> num1 >> num2; কেন হবে না, তার পেছনে একটি শক্ত গাণিতিক এবং লজিক্যাল কারণ আছে।

সহজভাবে বলতে গেলে, >> হলো একটি অপারেটর (যাকে বলা হয় Extraction Operator), আর অপারেটর সবসময় দুটি জিনিসের মাঝখানে বসে কাজ করে।
১. অপারেটরের নিয়ম (Left and Right Side)
>> অপারেটর কাজ করার জন্য তার বাম পাশে একটি Source (উৎস) এবং ডান পাশে একটি Destination (গন্তব্য) চায়।

বাম পাশে: cin (যেখান থেকে ডাটা আসছে)।

ডান পাশে: ভেরিয়েবল যেমন num1 (যেখানে ডাটা জমা হবে)।

যখন cin >> >> num1 লিখা হয়, তখন প্রথম >> এর বাম পাশে cin আছে ঠিকই, কিন্তু তার ডান পাশে কোনো ভেরিয়েবল নেই (সেখানে আরেকটি >> বসে আছে)।
কম্পিউটার তখন বুঝতে পারে না সে ডাটা কোথায় রাখবে। 
এটি অনেকটা এমন যে কাওকে বলা হল, "আমার কাছ থেকে নাও নাও টাকা!" কিন্তু কার কাছে দেবে সেটা বলা হল না।

সি++ এ  একসাথে অনেকগুলো ইনপুট নেওয়া যায়, যাকে বলা হয় Operator Chaining।
cin >> num1 >> num2;
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
টেকনিক্যাল দিক থেকে দুটি কোডই সঠিক. কিন্তু তাদের ব্যবহারের ক্ষেত্র এবং কাজ করার ধরন আলাদা। তবে যদি "নিখুঁত" বা ১০০% রাইট পদ্ধতির কথা বলা হয়, 
তবে তা নির্ভর করবে ইউজারের কাছ থেকে ঠিক কী আশা করা  হসছে তার ওপর।
   
char ch;
cout<< "Enter your section: (A/B/C): ";
ch = cin.get();
cout<< "Your section: " <<ch <<endl;

ch = cin.get(); (সবচেয়ে শক্তিশালী)
এই পদ্ধতিটি ১০০% নিখুঁত তখন, যখন স্পেস (Space), ট্যাব (Tab) বা এন্টার (Enter) কি-কেও ইনপুট হিসেবে ধরার প্রয়োজন হয়।
   
কেন এটি ভালো: এটি কিবোর্ড থেকে আসা একদম প্রথম ক্যারেক্টারটিই ধরে ফেলে, সেটি অদৃশ্য কোনো স্পেস হলেও।
সমস্যা: এর আগে যদি অন্য কোনো cin >> ব্যবহার করা থাকে, তবে বাফারে থাকা পুরনো 'Enter' বা 'newline' এটি পড়ে ফেলতে পারে। ফলে ইনপুট না নিয়েই এটি পরের লাইনে চলে যেতে পারে।


   
char character;
cout<< "Enter any Character: ";
cin>> character;
cout<< "Your character: " <<character <<endl;

cin >> character; (সবচেয়ে সুবিধাজনক)
এই পদ্ধতিটি ১০০% নিখুঁত তখন, যখন ইউজার যাই টাইপ করুক (আগে কয়েকটা স্পেস দিলেও সমস্যা নেই), কম্পিউটার শুধু মূল অক্ষরটিই নেবে।
   
কেন এটি ভালো: এটি ইনপুট দেওয়ার আগে থাকা সব ধরণের হোয়াইটস্পেস (Space, Tab, Newline) অটোমেটিক এড়িয়ে যায় (Skip করে)। তাই এটি ব্যবহার করা অনেক বেশি নিরাপদ এবং সহজ।
সীমাবদ্ধতা: এটি কখনোই "স্পেস" কে ইনপুট হিসেবে নিতে পারে না।

যদি আপনার কোডে cin.get() ব্যবহার করতে চাওয়া হয়, তবে তার আগে অবশ্যই একটি cin.ignore() ব্যবহার করতে হবে যাতে আগের কোনো 'Enter' বাফারে জমা না থাকে।
   
char character;
cout << "Enter any Character: ";
cin >> ws; // এটি বাফারের সব ফাঁকা জায়গা পরিষ্কার করে দেয়
cin >> character; 
cout << "Your character: " << character << endl;

cin >> ws হলো সি++ এর একটি Input Manipulator। এর পূর্ণরূপ হলো "White Space"।
সহজ কথায়, এটি কিবোর্ড বা ইনপুট বাফারে পড়ে থাকা অপ্রয়োজনীয় Space (ফাঁকা জায়গা), Tab, এবং Newline (Enter) গুলোকে খুঁজে বের করে সেগুলো মুছে ফেলে বা এড়িয়ে যায়।

int id;
string name;

cout << "Enter ID: ";
cin >> id;

cout << "Enter Name: ";
cin >> ws;          // সব আগের জমানো স্পেস/এন্টার পরিষ্কার করে দিল
getline(cin, name); // এখন এটি সঠিকভাবে কাজ করবে

cin.ignore() বনাম cin >> ws
   
বৈশিষ্ট্য	                                                 cin.ignore()	                                          cin >> ws
কাজ	                                                 নির্দিষ্ট সংখ্যক ক্যারেক্টার মুছে ফেলে।	                        সব ধরণের হোয়াইটস্পেস মুছে ফেলে।
নির্ভুলতা	                                              মাঝে মাঝে সঠিক সংখ্যা না দিলে কাজ করে না।	               এটি অনেক বেশি স্মার্ট এবং নির্ভুল।
ব্যবহার	                                              cin.ignore(100, '\n');	                                 সরাসরি cin >> ws;


cin.ignore() -------vs-------- cin >> ws ---------vs ---------cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

cin.ignore();

এটি বাফার থেকে মাত্র ১টি ক্যারেক্টার মুছে ফেলে।

যখন নিশ্চিত যে বাফারে শুধু একটি 'Enter' (\n) পড়ে আছে। যেমন: একটি cin >> এর ঠিক পরে একটি cin.get() ব্যবহারের সময়।

প্রফেশনালিজম: এটি খুব একটা "সেফ" নয়, কারণ বাফারে যদি ভুল করে স্পেস বা অন্য কিছু থাকে, তবে এটি কাজ করবে না।

cin >> ws;

এটি বাফারে থাকা সকল হোয়াইটস্পেস (Space, Tab, Newline) ক্লিয়ার করে এবং পরবর্তী ডাটা ইনপুট নেওয়ার জন্য প্রস্তুত থাকে।

যখন  cin >> এর পরে getline() ব্যবহার করতে চাওয়া হসছে।

এটি অনেক বেশি ক্লিন এবং আধুনিক। এটি শুধু পুরনো ডাটা মুছেই ক্ষান্ত হয় না, বরং ইনপুট নেওয়ার আগ পর্যন্ত সব ফাঁকা জায়গা ঝেঁটিয়ে পরিষ্কার করে দেয়।

cin.ignore(numeric_limits<streamsize>::max(), '\n');

এটি বাফারের বর্তমান লাইনের সবকিছু মুছে ফেলে যতক্ষণ না একটি 'Enter' পাচ্ছে।

এটিই সবচেয়ে রোবাস্ট (Robust) বা শক্তিশালী পদ্ধতি। যখন ইউজার ভুল ইনপুট দেয় (যেমন: সংখ্যার জায়গায় বড় একটা প্যারাগ্রাফ লিখে দিল) এবং পুরো লাইনটি ডিলিট করে নতুন করে ইনপুট নিতে চাওয়া হয়।

হাই-লেভেল সফটওয়্যার বা কম্পিটিটিভ প্রোগ্রামিংয়ে একে "গোল্ড স্ট্যান্ডার্ড" ধরা হয় কারণ এটি বাফারকে পুরোপুরি ক্লিন করার গ্যারান্টি দেয়।



int age;
string name;

cout << "Age: ";
cin >> age; // এখানে এন্টার চাপলে বাফারে '\n' থেকে যায়

cin.ignore(); // শুধুমাত্র ওই একটি '\n' মুছে ফেলবে

cout << "Name: ";
getline(cin, name);



int roll;
string address;

cout << "Roll: ";
cin >> roll;

cout << "Address: ";
getline(cin >> ws, address); // ইনপুটের আগে যত স্পেস বা এন্টার থাকুক, সব পরিষ্কার করে ডাটা নিবে।


#include <limits>

int id;
string email;

cout << "Enter ID: ";
cin >> id; 

// ইউজার যদি "101 abc" লিখে দেয়, তবে 101 নেওয়ার পর বাকি সব ডিলিট করে দিবে
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

cout << "Enter Email: ";
getline(cin, email);


char grade;
string subject;

cout << "Grade: ";
cin >> grade;

// বাফার ক্লিয়ার করার জন্য ম্যানুয়াল লুপ
while (cin.get() != '\n'); 

cout << "Subject: ";
getline(cin, subject);





C++ এ কাজ: C++ এ cin >> age; নেওয়ার পর যে Enter-টি বাফারে জমে থাকে, তা পরিষ্কার করতে এই লাইনটি ব্যবহার করা হয়।
numeric_limits<streamsize>::max() লেখার অর্থ হলো—বাফারে যত বড় বা যত বেশি ময়লাই থাকুক না কেন, 
এটি সব স্কিপ করে বাফার ১০০% ক্লিন করে দেবে।



#include <iostream>
#include <string>
#include <limits>  // numeric_limits এর জন্য
#include <iomanip> // setw(), setprecision(), boolalpha এর জন্য

using namespace std;

int main() {
    // 1. Variable Declarations
    string name, village, subject, gmail, phoneNumber, bloodGroup;
    const string COUNTRY = "Bangladesh";

    int age;
    char grade;
    float height;
    double accountBalance;
    bool isPassed, isGraduated;

    // --- INPUT SECTION ---

    // ১. Name (স্পেসসহ স্ট্রিং, তাই straight getline)
    cout << "Enter Name: ";
    getline(cin, name);

    // ২. Age (cin >> ব্যবহার করা হচ্ছে)
    cout << "Enter Age: ";
    cin >> age;

    // [গুরুত্বপূর্ণ]: cin >> age এর পর নিচে Village নিতে getline() লাগবে। 
    // তাই বাফারে জমে থাকা Enter (\n) সাফ করতে cin.ignore ব্যবহার করতে হবে।
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // ৩. Village (স্পেসসহ স্ট্রিং)
    cout << "Enter Village: ";
    getline(cin, village);

    // ৪. Subject (স্পেসসহ স্ট্রিং)
    // আগে থেকেই getline ছিল, তাই এখানে cin.ignore লাগবে না
    cout << "Enter Subject: ";
    getline(cin, subject);

    // ৫. Height (cin >> ব্যবহার)
    cout << "Enter Height: ";
    cin >> height;

    // ৬. Account Balance (পরপর cin >> তাই মাঝে ignore লাগবে না)
    cout << "Enter Account Balance: ";
    cin >> accountBalance;

    // ৭. Grade (cin >>)
    cout << "Enter Grade: ";
    cin >> grade;

    // ৮. Is Passed? (cin >>)
    cout << "Is Passed? (1 for Yes, 0 for No): ";
    cin >> isPassed;

    // ৯. Is Graduated? (cin >>)
    cout << "Is Graduated? (1 for Yes, 0 for No): ";
    cin >> isGraduated;

    // [গুরুত্বপূর্ণ]: cin >> এর পর নিচে Gmail, Phone, Blood Group এগুলো নিতে 
    // আবার cin.ignore দিতে হবে যাতে বাফার ফ্রেশ হয়ে যায়।
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // ১০. Gmail (স্পেস ছাড়া স্ট্রিং, তাই getline/cin দুটোই নিরাপদ)
    cout << "Enter Gmail: ";
    getline(cin, gmail);

    // ১১. Phone Number
    cout << "Enter Phone Number: ";
    getline(cin, phoneNumber);

    // ১২. Blood Group (যেমন: A+)
    cout << "Enter Blood Group: ";
    getline(cin, bloodGroup);


    // --- OUTPUT SECTION ---
    cout << "\n================ STUDENT INFORMATION ================\n";
    cout << left << setw(18) << "Name" << ": " << name << endl;
    cout << left << setw(18) << "Age" << ": " << age << " years" << endl;
    cout << left << setw(18) << "Village" << ": " << village << endl;
    cout << left << setw(18) << "Subject" << ": " << subject << endl;
    cout << left << setw(18) << "Height" << ": " << height << " ft" << endl;
    cout << left << setw(18) << "Account Balance" << ": $" << fixed << setprecision(2) << accountBalance << endl;
    cout << left << setw(18) << "Grade" << ": " << grade << endl;
    cout << left << setw(18) << "Is Passed" << ": " << boolalpha << isPassed << endl;
    cout << left << setw(18) << "Is Graduated" << ": " << boolalpha << isGraduated << endl;
    cout << left << setw(18) << "Gmail" << ": " << gmail << endl;
    cout << left << setw(18) << "Phone Number" << ": " << phoneNumber << endl;
    cout << left << setw(18) << "Country" << ": " << COUNTRY << endl;
    cout << left << setw(18) << "Blood Group" << ": " << bloodGroup << endl;

    return 0;
}

কোথায় কোথায় cin.ignore() লাগলো এবং কেন?
cin >> age; এর পর:
ইউজার বয়স টাইপ করে যখন Enter চাপা হয়, তখন বয়স সেভ হয় কিন্তু Enter (\n) বাফারে থেকে যায়। এর পরের ইনপুট ছিল getline(cin, village);—যা স্পেসসহ পুরো লাইন পড়ে। 
এই getline() যেন আগের বাফারে থাকা Enter পড়ে স্কিপ না হয়ে যায়, তাই মাঝে cin.ignore(...) দেওয়া হয়েছে।

cin >> isGraduated; এর পর:
একটানা কয়েকটি cin >> নেওয়ার পর আবার যখন নিচে getline(cin, gmail); দিয়ে স্ট্রিং ইনপুট শুরু হচ্ছে, তখন আবার বাফার পরিষ্কার করার জন্য cin.ignore(...) দেওয়া হয়েছে।
