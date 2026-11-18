#include <iostream>
#include <string> // string ব্যবহারের জন্য এটি জরুরি
using namespace std;

int main() {

   int num;
   cout << "Enter Your Number: ";
   cin >> num;
   cout << "You entered: " << num << endl;



   
   int a, b, sum;
   cout << "Type a Number: ";
   cin >> a;
   cout << "Type another Number: ";
   cin >> b;
   sum = a + b;
   cout << "Sum is: " << sum << endl;



   
   // cin >> এর পর getline আসার কারণে বাফার পরিষ্কার করার জন্য এটি আবশ্যক
   cin.ignore(); 



   
   string name;
   int age;
   cout << "Enter Your Name: ";
   getline(cin, name);
   cout << "Enter Your Age: ";
   cin >> age;
   cout << "Hello " << name << ", your age is " << age << endl;



   
   int length, width;
   cout << "Enter your length: ";
   cin >> length;
   cout << "Enter your width: ";
   cin >> width;
   cout << "Area = " << length * width << endl;



   
   // আগের a, b আবার নতুন করে ডিক্লেয়ার না করে শুধু c ডিক্লেয়ার করা হলো (এরর এড়াতে)
   
    int a, b, c;
    
    cout << "1st Person: ";
    cin >> a;
    
    cout << "2nd Person: ";
    cin >> b;
    
    cout << "3rd Person: ";
    cin >> c;
    
    float average = (a + b + c) / 3.0;
    cout << "Average = " << average << endl;




   
   bool isRaining;
   cout << "Is it raining ? (1 Yes, 0 No): ";
   cin >> isRaining;
   cout << "Is it raining: " << isRaining << endl;

   return 0;
}




#include <iostream>
#include <iomanip> // দশমিকের পর নির্দিষ্ট ঘর দেখানোর জন্য

int main() {
    // ১. প্রতিটি ভেরিয়েবল আলাদা লাইনে ডিক্লেয়ারেশন
    int firstPerson;
    int secondPerson;
    int thirdPerson;
    double average; // নিখুঁত দশমিক হিসাবের জন্য double ব্যবহার করা উত্তম

    // ২. ইউজার ইনপুট সেকশন
    std::cout << "1st Person: ";
    std::cin >> firstPerson;

    std::cout << "2nd Person: ";
    std::cin >> secondPerson;

    std::cout << "3rd Person: ";
    std::cin >> thirdPerson;

    // ৩. গড় নির্ণয় (টাইপ কাস্টিং ব্যবহার করে)
    average = static_cast<double>(firstPerson + secondPerson + thirdPerson) / 3.0;

    // ৪. আউটপুট (দশমিকের পর ২ ঘর পর্যন্ত নিখুঁত ফলাফল)
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Average = " << average << "\n";

    return 0;
}


static_cast<double> কী?
   
সহজ ভাষায়, এটি হলো মডার্ন C++-এর Explicit Type Casting বা জোরপূর্বক ডেটা টাইপ রূপান্তর করার নিরাপদ পদ্ধতি।

কেন এটি দরকার?

 firstPerson, secondPerson, এবং thirdPerson—এই তিনটি ভেরিয়েবলই পূর্ণসংখ্যা (int)। যখন তিনটি int যোগ করা হয়, 
তখন কম্পাইলার মেমোরিতে একটি int ফলাফলই তৈরি করে।

static_cast<double>(...) লেখার মাধ্যমে আপনি কম্পাইলারকে স্পষ্টভাবে নির্দেশ দিচ্ছেন: "ভেতরের এই পূর্ণসংখ্যা যোগফলটিকে এখন একটি দশমিক সংখ্যা (double)-এ রূপান্তর করো,
যাতে ভাগ করার সময় দশমিকের পরের কোনো মান হারিয়ে না যায়।"

আগে কীভাবে লেখা হতো?
পুরনো C বা C++ স্টাইলে আমরা লিখতাম (double)(a + b + c)। কিন্তু বড় প্রজেক্টে বা মডার্ন C++-এ (double) ব্যবহার করা অনিরাপদ ধরা হয়,
কারণ এটি যেকোনো ভুল কনভার্সনকেও জোর করে করে ফেলে। পক্ষান্তরে, static_cast<double> 
কম্পাইল করার সময়ই চেক করে যে রূপান্তরটি বৈধ কি না—তাই এটি শতভাগ টাইপ-সেফ এবং ইন্ডাস্ট্রি স্ট্যান্ডার্ড।

average = static_cast<double>(firstPerson + secondPerson + thirdPerson) / 3.0;

যোগফল: ব্র্যাকেটের ভেতরের তিনটি int যোগ হয়: 10 + 20 + 25 = 55 (এটি এখনো int)।

রূপান্তর (static_cast<double>): 55 সংখ্যাটি রূপান্তরিত হয়ে 55.0 (double)-এ পরিণত হয়।

ভাগ: 55.0 / 3.0 ভাগ হয়ে ফলাফল আসে 18.333333333333332, যা average ভেরিয়েবলে স্টোর হয়।




#include <iostream>
#include <string>
#include <limits>

// ইনপুট বাফার পরিষ্কার করার প্রফেশনাল ফাংশন
void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    // ১. সিঙ্গেল নাম্বার ইনপুট
    int number;
    std::cout << "Enter Your Number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << "\n\n";

    // ২. দুটি সংখ্যার যোগফল (ভেরিয়েবলের নাম ইউনিক করা হয়েছে)
    int firstNum;
    int secondNum;
    int sum;
    
    std::cout << "Type a Number: ";
    std::cin >> firstNum;
    std::cout << "Type another Number: ";
    std::cin >> secondNum;
    
    sum = firstNum + secondNum;
    std::cout << "Sum is: " << sum << "\n\n";

    // `cin >>` এর পর `getline` ব্যবহারের আগে অবশ্যই বাফার পরিষ্কার করতে হবে
    clearInputBuffer();

    // ৩. নাম এবং বয়স ইনপুট (getline ব্যবহার)
    std::string name;
    int age;
    
    std::cout << "Enter Your Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Your Age: ";
    std::cin >> age;
    std::cout << "Hello " << name << ", your age is " << age << "\n\n";

    // ৪. আয়তক্ষেত্রের ক্ষেত্রফল নির্ণয়
    int length;
    int width;
    
    std::cout << "Enter your length: ";
    std::cin >> length;
    std::cout << "Enter your width: ";
    std::cin >> width;
    std::cout << "Area = " << length * width << "\n\n";

    // ৫. তিন জনের গড় নির্ণয় (ভেরিয়েবল রী-ডিক্লেয়রেশন এরর ঠিক করা হয়েছে)
    int p1;
    int p2;
    int p3;
    double average; // আধুনিক প্র্যাকটিসে float এর বদলে double ব্যবহার করা ভালো
    
    std::cout << "1st Person: ";
    std::cin >> p1;
    std::cout << "2nd Person: ";
    std::cin >> p2;
    std::cout << "3rd Person: ";
    std::cin >> p3;
    
    // সঠিক ফলাফল পাওয়ার জন্য static_cast ব্যবহার করা হয়েছে
    average = static_cast<double>(p1 + p2 + p3) / 3.0;
    std::cout << "Average = " << average << "\n\n";
    
    // ৬. বুলিয়ান ইনপুট
    bool isRaining;
    std::cout << "Is it raining? (1 Yes, 0 No): ";
    std::cin >> isRaining;
    
    // 0/1 এর বদলে true/false দেখানোর জন্য std::boolalpha ব্যবহার
    std::cout << std::boolalpha;
    std::cout << "Is it raining: " << isRaining << "\n";

    return 0;
}











#include <iostream>
using namespace std;
int main()
{
    int x, y, sum;
    cout<< "Type a number: ";
    cin>> x;
    cout<< "Type another number: ";
    cin>> y;
    sum = x + y;
    cout<< "Type first number: " << x <<endl << "And Type second number: " << y <<endl << "Sum is: " << sum <<endl;
    return 0;
}




#include <iostream>

int main()
{
    int x, y, sum;
    
    std::cout << "Type a number: ";
    std::cin >> x;
    
    std::cout << "Type another number: ";
    std::cin >> y;
    
    sum = x + y;
    
    // std::endl এর বদলে \n ব্যবহার করা হয়েছে (যা দ্রুততর এবং প্রফেশনাল)
    std::cout << "Type first number: " << x << "\n" 
              << "And Type second number: " << y << "\n" 
              << "Sum is: " << sum << "\n";
              
    return 0;
}












#include <iostream>
#include <string>
using namespace std;
int main(){
     int num1, num2;
     cout<< "Enter first integer number: ";
     cin>> num1;
     cout << "Enter second integer number: ";
     cin>> num2;
     cout << "Numbers are: " << "Num1 "  <<num1 << " And Num2 " <<num2 <<endl;
     return 0;
}



#include <iostream>
#include <string>

int main() {
    int num1, num2;
    
    std::cout << "Enter first integer number: ";
    std::cin >> num1;
    
    std::cout << "Enter second integer number: ";
    std::cin >> num2;
    
    std::cout << "Numbers are: " << "Num1 " << num1 << " And Num2 " << num2 << std::endl;
    
    return 0;
}




#include <iostream>
#include <string>
using namespace std;
int main(){
     int num1, num2;
     cout<< "Enter two integer number (space): ";
     cin>> num1 >> num2;
     cout << "Numbers are: " << "Num1 "  <<num1 << " And Num2 " <<num2 <<endl;
     return 0;
}


#include <iostream>
#include <string>

int main() {
     int num1, num2;
     
     std::cout << "Enter two integer number (space): ";
     std::cin >> num1 >> num2;
     
     std::cout << "Numbers are: " << "Num1 " << num1 << " And Num2 " << num2 << std::endl;
     
     return 0;
}





#include <iostream>
#include <string>
using namespace std;
int main(){
     int num1, num2, sum;

     cout<< "Enter first integer number: ";
     cin>> num1;

     cout << "Enter second integer number: ";
     cin >> num2;

     sum = num1 + num2;

     cout << "Num1 is: " <<num1 << " And Num2 is: " <<num2 << " Total is: " <<sum <<endl;
     return 0;
}


#include <iostream>
#include <string>

int main() {
     int num1, num2, sum;

     std::cout << "Enter first integer number: ";
     std::cin >> num1;

     std::cout << "Enter second integer number: ";
     std::cin >> num2;

     sum = num1 + num2;

     std::cout << "Num1 is: " << num1 << " And Num2 is: " << num2 << " Total is: " << sum << "\n";
               
     return 0;
}


----
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

// প্রফেশনাল উইডথ ম্যানেজমেন্ট
const int COL_WIDTH = 25;

// ইনপুট বাফার এবং এরর স্টেট পরিষ্কার করার ফাংশন
void clearInputBuffer() {
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    // ভেরিয়েবল ডিক্লেয়ারেশন
    string name, village, subject, gmail, phoneNumber, bloodGroup;
    const string COUNTRY = "Bangladesh";

    int age;
    char grade;
    double height; 
    double accountBalance;
    bool isPassed, isGraduated, married;

    // --- ইউজার ইনপুট অংশ ---

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height: ";
    cin >> height;

    // cin >> এর পর getline থাকলে বাফার ক্লিয়ার করা বাধ্যতামূলক
    clearInputBuffer();

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    clearInputBuffer();

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Are you married (1 for Yes, 0 for No): ";
    cin >> married;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Are you passed (1 for true, 0 for false): ";
    cin >> isPassed;

    cout << "Are you graduated (1 for true, 0 for false): ";
    cin >> isGraduated;

    clearInputBuffer();

    // --- আউটপুট প্রেজেন্টেশন ---
    cout << endl;
    cout << "------------ Student Information ------------" << endl;

    // গ্লোবাল আউটপুট ফরম্যাটিং
    cout << left << boolalpha;

    cout << setw(COL_WIDTH) << "Name"              << ": " << name << endl;
    cout << setw(COL_WIDTH) << "Age"               << ": " << age << " Years" << endl;
    cout << setw(COL_WIDTH) << "Height"            << ": " << fixed << setprecision(1) << height << " ft" << endl;
    cout << setw(COL_WIDTH) << "Village"           << ": " << village << endl;
    cout << setw(COL_WIDTH) << "Subject"           << ": " << subject << endl;
    cout << setw(COL_WIDTH) << "Account Balance"    << ": $" << fixed << setprecision(2) << accountBalance << endl;
    cout << setw(COL_WIDTH) << "Gmail"             << ": " << gmail << endl;
    cout << setw(COL_WIDTH) << "Phone Number"      << ": " << phoneNumber << endl;
    cout << setw(COL_WIDTH) << "Country"           << ": " << COUNTRY << endl;
    cout << setw(COL_WIDTH) << "Blood Group"       << ": " << bloodGroup << endl;
    cout << setw(COL_WIDTH) << "Married Status"    << ": " << (married ? "Yes" : "No") << endl;
    cout << setw(COL_WIDTH) << "Grade"             << ": " << grade << endl;
    cout << setw(COL_WIDTH) << "Passed Status"     << ": " << isPassed << endl;
    cout << setw(COL_WIDTH) << "Graduation Status" << ": " << isGraduated << endl;
    cout << "---------------------------------------------" << endl;

    return 0;
}



#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

// প্রফেশনাল উইডথ ম্যানেজমেন্ট
const int COL_WIDTH = 25;

// ইনপুট বাফার এবং এরর স্টেট পরিষ্কার করার ফাংশন
void clearInputBuffer() {
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    // ভেরিয়েবল ডিক্লেয়ারেশন (std:: ব্যবহার করে)
    std::string name, village, subject, gmail, phoneNumber, bloodGroup;
    const std::string COUNTRY = "Bangladesh";

    int age;
    char grade;
    double height; 
    double accountBalance;
    bool isPassed, isGraduated, married;

    // --- ইউজার ইনপুট অংশ ---

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;
    // cin >> এর ঠিক পরেই getline থাকায় বাফার ক্লিয়ার করা হলো
    clearInputBuffer();

    std::cout << "Enter your height: ";
    std::cin >> height;
    // cin >> এর ঠিক পরেই getline থাকায় বাফার ক্লিয়ার করা হলো
    clearInputBuffer();

    std::cout << "Enter your village: ";
    std::getline(std::cin, village);

    std::cout << "Enter your subject: ";
    std::getline(std::cin, subject);

    std::cout << "Enter your account balance: ";
    std::cin >> accountBalance;
    // cin >> এর ঠিক পরেই getline থাকায় বাফার ক্লিয়ার করা হলো
    clearInputBuffer();

    std::cout << "Enter your gmail: ";
    std::getline(std::cin, gmail);

    std::cout << "Enter your phone number: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "Enter your blood group: ";
    std::getline(std::cin, bloodGroup);

    std::cout << "Are you married (1 for Yes, 0 for No): ";
    std::cin >> married;

    std::cout << "Enter your grade: ";
    std::cin >> grade;

    std::cout << "Are you passed (1 for true, 0 for false): ";
    std::cin >> isPassed;

    std::cout << "Are you graduated (1 for true, 0 for false): ";
    std::cin >> isGraduated;

    // কোডের শেষে বাফার পরিষ্কার রাখা ভালো অভ্যাস
    clearInputBuffer();

    // --- আউটপুট প্রেজেন্টেশন ---
    std::cout << std::endl;
    std::cout << "------------ Student Information ------------" << std::endl;

    // গ্লোবাল আউটপুট ফরম্যাটিং
    std::cout << std::left << std::boolalpha;

    std::cout << std::setw(COL_WIDTH) << "Name"              << ": " << name << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Age"               << ": " << age << " Years" << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Height"            << ": " << std::fixed << std::setprecision(1) << height << " ft" << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Village"           << ": " << village << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Subject"           << ": " << subject << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Account Balance"     << ": $" << std::fixed << std::setprecision(2) << accountBalance << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Gmail"             << ": " << gmail << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Phone Number"      << ": " << phoneNumber << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Country"           << ": " << COUNTRY << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Blood Group"       << ": " << bloodGroup << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Married Status"    << ": " << (married ? "Yes" : "No") << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Grade"             << ": " << grade << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Passed Status"     << ": " << isPassed << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Graduation Status" << ": " << isGraduated << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    return 0;
}






#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;
// প্রফেশনাল উইডথ ম্যানেজমেন্ট
const int COL_WIDTH = 25;

// ইনপুট বাফার এবং এরর স্টেট পরিষ্কার করার স্ট্যান্ডার্ড ফাংশন
void clearInputBuffer() {
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    // ভেরিয়েবল ডিক্লেয়ারেশন
    string name, village, subject, gmail, phoneNumber, bloodGroup;
    const string COUNTRY = "Bangladesh";

    int age;
    char grade;
    double height; 
    double accountBalance;
    bool isPassed, isGraduated, married;

    // --- ইউজার ইনপুট অংশ ---

    cout << "Enter your name: ";
    getline(cin, name);

    // বয়স ইনপুট ভ্যালিডেশন
    cout << "Enter your age: ";
    while (!(cin >> age)) { 
        cout << "Invalid input! Please enter a numeric age: ";
        clearInputBuffer();
    }

    cout << "Enter your height: ";
    while (!(cin >> height)) {
        cout << "Invalid input! Please enter height in numbers: ";
        clearInputBuffer();
    }

    // getline এর আগে বাফার ক্লিয়ার করা বাধ্যতামূলক
    clearInputBuffer();

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your account balance: ";
    while (!(cin >> accountBalance)) {
        cout << "Invalid input! Please enter balance in numbers: ";
        clearInputBuffer();
    }

    clearInputBuffer();

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Are you married (1 for Yes, 0 for No): ";
    while (!(cin >> married)) {
        cout << "Invalid! Enter 1 for Yes or 0 for No: ";
        clearInputBuffer();
    }

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Are you passed (1 for true, 0 for false): ";
    cin >> isPassed;

    cout << "Are you graduated (1 for true, 0 for false): ";
    cin >> isGraduated;

    clearInputBuffer();

  
    cout << endl;
    cout << "------------ Student Information ------------" << endl;

    cout << left << boolalpha;

    cout << setw(COL_WIDTH) << "Name"              << ": " << name << endl;
    cout << setw(COL_WIDTH) << "Age"               << ": " << age << " Years" << endl;
    cout << setw(COL_WIDTH) << "Height"            << ": " << fixed << setprecision(1) << height << " ft" << endl;
    cout << setw(COL_WIDTH) << "Village"           << ": " << village << endl;
    cout << setw(COL_WIDTH) << "Subject"           << ": " << subject << endl;
    cout << setw(COL_WIDTH) << "Account Balance"    << ": $" << fixed << setprecision(2) << accountBalance << endl;
    cout << setw(COL_WIDTH) << "Gmail"             << ": " << gmail << endl;
    cout << setw(COL_WIDTH) << "Phone Number"      << ": " << phoneNumber << endl;
    cout << setw(COL_WIDTH) << "Country"           << ": " << COUNTRY << endl;
    cout << setw(COL_WIDTH) << "Blood Group"       << ": " << bloodGroup << endl;
    cout << setw(COL_WIDTH) << "Married Status"    << ": " << (married ? "Yes" : "No") << endl;
    cout << setw(COL_WIDTH) << "Grade"             << ": " << grade << endl;
    cout << setw(COL_WIDTH) << "Passed Status"     << ": " << isPassed << endl;
    cout << setw(COL_WIDTH) << "Graduation Status" << ": " << isGraduated << endl;
    cout << "---------------------------------------------" << endl;

    return 0;
}


void clearInputBuffer() {
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}  
এই ফাংশনটি C++ প্রোগ্রামিংয়ের একটি অত্যন্ত গুরুত্বপূর্ণ অংশ, বিশেষ করে যখন  cin >> এবং getline() একই প্রোগ্রামে ব্যবহার করা হয়।
   
যখন আপনি cin >> age; লিখে এন্টার চাপা হয়, তখন বাফারে (মেমরিতে) দেওয়া সংখ্যাটি তো যায়ই, সাথে ওই এন্টার (Enter/New line) ক্যারেক্টারটিও থেকে যায়। 
   
পরবর্তীতে যখন  getline() ব্যবহার করা হয়, তখন সে বাফারে থাকা ওই পুরোনো 'এন্টার' দেখে মনে করে  ইনপুট দিয়ে ফেলে হয়েছে, 
ফলে সে কোনো ইনপুট না নিয়েই পরের লাইনে চলে যায়। এই সমস্যা বা Input Skip সমস্যা সমাধানের জন্যই clearInputBuffer() ব্যবহার করা হয়।

cin.clear();
এটি ইনপুট স্ট্রিমের Error Flags পরিষ্কার করে।
কোড একটি সংখ্যা (int) চাইছে কিন্তু ইউজার ভুল করে একটি অক্ষর (abc) টাইপ করেছে। তখন সি++ এর ইনপুট সিস্টেম একটি "Fail State"-এ চলে যায় এবং এরপর আর কোনো ইনপুট নিতে চায় না।
cin.clear() ওই এরর স্টেটটি মুছে ফেলে সিস্টেমকে আবার সচল করে।

cin.ignore(numeric_limits<streamsize>::max(), '\n');
এই লাইনটি বাফারে জমে থাকা সব আবর্জনা পরিষ্কার করে। এর দুটি অংশ আছে:
numeric_limits<streamsize>::max(): এটি একটি বিশাল বড় সংখ্যা (প্রায় অসীম)। এর মানে হলো "যতক্ষণ পর্যন্ত পারো ইগনোর বা মুছতে থাকো"। এটি <limits> হেডার ফাইল থেকে আসে।
'\n': এটি হলো স্টপ সিগন্যাল। অর্থাৎ, "সবকিছু মুছতে থাকো যতক্ষণ না একটি নিউ-লাইন বা এন্টার পাচ্ছো"।


প্রফেশনাল এবং স্ট্যান্ডার্ড নিয়ম অনুযায়ী যেকোনো ফাংশন int main() এর উপরে রাখা উচিত।

১. (The "Top-Down" Logic)
C++ এ কম্পাইলার উপর থেকে নিচে কোড পড়ে। যদি ফাংশনটি int main() এর নিচে লিখা হয় এবং main() এর ভেতর থেকে তাকে (call করা হয়), 
তবে কম্পাইলার তাকে চিনতে পারবে না এবং এরর (Error) দিবে। 
কারণ কম্পাইলার যখন main এর ভেতর ওই ফাংশনটিকে পাবে, তখন সে তার সংজ্ঞা আগে কোথাও খুঁজে পাবে না।

২. এটি প্রফেশনাল?
যেকোনো বড় প্রজেক্টে গ্লোবাল কনস্ট্যান্ট (যেমন  COL_WIDTH) এবং ইউটিলিটি ফাংশন (যেমন clearInputBuffer) সবার উপরে রাখা হয়। 
এতে কোড অনেক বেশি গোছানো থাকে এবং অন্য কোনো ফাংশন থেকেও চাইলে সেটিকে ব্যবহার করা যায়।



#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

// প্রফেশনাল উইডথ ম্যানেজমেন্ট
const int COL_WIDTH = 25;

// ইনপুট বাফার এবং এরর স্টেট পরিষ্কার করার স্ট্যান্ডার্ড ফাংশন
void clearInputBuffer() {
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    // ভেরিয়েবল ডিক্লেয়ারেশন
    std::string name, village, subject, gmail, phoneNumber, bloodGroup;
    const std::string COUNTRY = "Bangladesh";

    int age;
    char grade;
    double height; 
    double accountBalance;
    bool isPassed, isGraduated, married;

    // --- ইউজার ইনপুট অংশ ---

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // বয়স ইনপুট ভ্যালিডেশন
    std::cout << "Enter your age: ";
    while (!(std::cin >> age)) { 
        std::cout << "Invalid input! Please enter a numeric age: ";
        clearInputBuffer();
    }

    std::cout << "Enter your height: ";
    while (!(std::cin >> height)) {
        std::cout << "Invalid input! Please enter height in numbers: ";
        clearInputBuffer();
    }

    // getline এর আগে বাফার ক্লিয়ার করা বাধ্যতামূলক
    clearInputBuffer();

    std::cout << "Enter your village: ";
    std::getline(std::cin, village);

    std::cout << "Enter your subject: ";
    std::getline(std::cin, subject);

    std::cout << "Enter your account balance: ";
    while (!(std::cin >> accountBalance)) {
        std::cout << "Invalid input! Please enter balance in numbers: ";
        clearInputBuffer();
    }

    clearInputBuffer();

    std::cout << "Enter your gmail: ";
    std::getline(std::cin, gmail);

    std::cout << "Enter your phone number: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "Enter your blood group: ";
    std::getline(std::cin, bloodGroup);

    std::cout << "Are you married (1 for Yes, 0 for No): ";
    while (!(std::cin >> married)) {
        std::cout << "Invalid! Enter 1 for Yes or 0 for No: ";
        clearInputBuffer();
    }

    std::cout << "Enter your grade: ";
    std::cin >> grade;

    std::cout << "Are you passed (1 for true, 0 for false): ";
    std::cin >> isPassed;

    std::cout << "Are you graduated (1 for true, 0 for false): ";
    std::cin >> isGraduated;

    clearInputBuffer();
  
    std::cout << std::endl;
    std::cout << "------------ Student Information ------------" << std::endl;

    std::cout << std::left << std::boolalpha;

    std::cout << std::setw(COL_WIDTH) << "Name"              << ": " << name << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Age"               << ": " << age << " Years" << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Height"            << ": " << std::fixed << std::setprecision(1) << height << " ft" << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Village"           << ": " << village << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Subject"           << ": " << subject << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Account Balance"     << ": $" << std::fixed << std::setprecision(2) << accountBalance << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Gmail"             << ": " << gmail << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Phone Number"      << ": " << phoneNumber << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Country"           << ": " << COUNTRY << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Blood Group"       << ": " << bloodGroup << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Married Status"    << ": " << (married ? "Yes" : "No") << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Grade"             << ": " << grade << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Passed Status"     << ": " << isPassed << std::endl;
    std::cout << std::setw(COL_WIDTH) << "Graduation Status" << ": " << isGraduated << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    return 0;
}
