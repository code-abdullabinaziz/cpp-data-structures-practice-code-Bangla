C++ এ ডেটা টাইপ (Data Types) হলো মূলত নির্দেশিকা, যা কম্পিউটারকে বলে দেয় যে একটি ভেরিয়েব্রে কী ধরনের ডেটা রাখা হবে
এবং মেমরিতে সেটি কত বাইট জায়গা দখল করবে।

C++-এ ডেটা টাইপগুলোকে প্রধানত ৩ ভাগে ভাগ করা যায়:
   
১. Built-in / Fundamental Data Types (যেমন: int, float, double, char, bool ইত্যাদি)

২. Derived Data Types (যেমন: Array, Pointer, Reference)

৩. User-defined Data Types (যেমন: Structure, Class, Enum, Union)

C++ এ মূলত ৫ ধরনের বেসিক ভেরিয়েবল সবচেয়ে বেশি ব্যবহৃত হয়:
   
int	পূর্ণসংখ্যা (Integer)	int age = 25;	4 bytes
   
float	ছোট দশমিক সংখ্যা	float price = 10.50;	4 bytes
   
double	বড় দশমিক সংখ্যা (বেশি নিখুঁত)	double pi = 3.14159265;	8 bytes
   
char	একটি মাত্র অক্ষর (Character)	char grade = 'A';	1 byte
   
string	পুরো একটি শব্দ বা বাক্য	string name = "Zim";	variable

bool	সত্য বা মিথ্যা (Boolean)	bool isCoding = true;	1 byte
   

   
int myNum = 15;        // পূর্ণসংখ্যা
double myFloat = 5.99; // দশমিক
char myLetter = 'D';   // অক্ষর (সবসময় single quote ' ' এর ভেতরে)
string myText = "Hello"; // টেক্সট (সবসময় double quote " " এর ভেতরে)
bool myBoolean = true; // সত্য/মিথ্যা 


সংখ্যা এবং হিসাব (int)
#include <iostream>
using namespace std;

int main() {
    int penPrice = 10;
    int quantity = 5;
    int total = penPrice * quantity; // দুটি পূর্ণসংখ্যার গুণ

    cout << "Total Cost: " << total << " Taka" << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    double myHeight = 5.8;
    double friendHeight = 5.5;
    double average = (myHeight + friendHeight) / 2;

    cout << "Average Height: " << average << " feet" << endl;
    return 0;
}


#include <iostream>
#include <string> // স্ট্রিং ব্যবহারের জন্য এই হেডার ফাইল লাগে
using namespace std;

int main() {
    string name = "Zim";
    char grade = 'A'; // একটি মাত্র অক্ষরের জন্য single quote

    cout << "Student: " << name << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    bool isRaining = true;
    bool isSunday = false;

    cout << "Is it raining? " << isRaining << endl; // 1 দেখাবে
    cout << "Is it Sunday? " << isSunday << endl;   // 0 দেখাবে
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    int temperature;

    cout << "Enter your city name: ";
    cin >> city; // স্ট্রিং ইনপুট

    cout << "Enter current temperature: ";
    cin >> temperature; // ইন্টিজার ইনপুট

    cout << "In " << city << ", it is " << temperature << " degrees." << endl;

    return 0;
}


#include <iostream>
#include <iomanip>  // টেবিল সুন্দর করার জন্য setw, left, right ব্যবহার করতে হেডার ফাইলটি লাগবে

int main() {
    // বিভিন্ন ডেটা টাইপের ভেরিয়েবল ডিক্লেয়ার করা
    bool isPassed = true;
    char grade = 'A';
    short age = 22;
    int idNumber = 2389;
    long population = 15000000;
    long long worldPopulation = 8000000000LL;
    float cgpa = 3.75f;
    double accountBalance = 45250.75;
    long double precisePi = 3.141592653589793238L;

    // আউটপুট টেবিলের হেডার প্রিন্ট করা
    std::cout << "=================================================\n";
    std::cout << std::left << std::setw(18) << "Data Type" 
              << std::right << std::setw(15) << "Size (Bytes)" 
              << std::right << std::setw(15) << "Example Value\n";
    std::cout << "=================================================\n";

    // প্রতিটি ডেটা টাইপের সাইজ ও মান প্রিন্ট করা
    std::cout << std::left << std::setw(18) << "bool" 
              << std::right << std::setw(15) << sizeof(bool) 
              << std::right << std::setw(15) << (isPassed ? "true" : "false") << "\n";

    std::cout << std::left << std::setw(18) << "char" 
              << std::right << std::setw(15) << sizeof(char) 
              << std::right << std::setw(15) << grade << "\n";

    std::cout << std::left << std::setw(18) << "short" 
              << std::right << std::setw(15) << sizeof(short) 
              << std::right << std::setw(15) << age << "\n";

    std::cout << std::left << std::setw(18) << "int" 
              << std::right << std::setw(15) << sizeof(int) 
              << std::right << std::setw(15) << idNumber << "\n";

    std::cout << std::left << std::setw(18) << "long" 
              << std::right << std::setw(15) << sizeof(long) 
              << std::right << std::setw(15) << population << "\n";

    std::cout << std::left << std::setw(18) << "long long" 
              << std::right << std::setw(15) << sizeof(long long) 
              << std::right << std::setw(15) << worldPopulation << "\n";

    std::cout << std::left << std::setw(18) << "float" 
              << std::right << std::setw(15) << sizeof(float) 
              << std::right << std::setw(15) << cgpa << "\n";

    std::cout << std::left << std::setw(18) << "double" 
              << std::right << std::setw(15) << sizeof(double) 
              << std::right << std::setw(15) << accountBalance << "\n";

    std::cout << std::left << std::setw(18) << "long double" 
              << std::right << std::setw(15) << sizeof(long double) 
              << std::right << std::setw(15) << "3.14..." << "\n";

    std::cout << "=================================================\n";

    return 0;
}










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
    std::cout << "Size of char: " << sizeof(char) << " byte\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of float: " << sizeof(float) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";
    std::cout << "Size of short: " << sizeof(short) << " bytes\n";
    std::cout << "Size of long: " << sizeof(long) << " bytes\n";
    std::cout << "Size of long double: " << sizeof(long double) << " bytes\n";
    std::cout << "Size of bool: " << sizeof(bool) << " byte\n";
    std::cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    
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
    // হেডার: Name বাঁ-পাশে এবং ID ডান-পাশে
    std::cout << std::left << std::setw(12) << "Name" 
              << std::right << std::setw(10) << "ID" 
              << std::right << std::setw(15) << "Number\n";

    // প্রথম সারি
    std::cout << std::left << std::setw(12) << "Abdullah" 
              << std::right << std::setw(10) << 2389 
              << std::right << std::setw(15) << "01745677826\n";

    // দ্বিতীয় সারি
    std::cout << std::left << std::setw(12) << "Aziz" 
              << std::right << std::setw(10) << 2395 
              << std::right << std::setw(15) << "01745677826\n";

    // তৃতীয় সারি (আগের কোডের মিসিং cout ঠিক করে দেওয়া হয়েছে)
    std::cout << std::left << std::setw(12) << "Ebny" 
              << std::right << std::setw(10) << 2958 
              << std::right << std::setw(15) << "01745677826\n";

    // চতুর্থ সারি
    std::cout << std::left << std::setw(12) << "Arman" 
              << std::right << std::setw(10) << 2354 
              << std::right << std::setw(15) << "01745677826\n";

    return 0;
}






#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name1, name2;
    int id1, id2;
    string phone1, phone2;

   
    cout << "Enter first person's Name: ";
    cin >> name1;
    cout << "Enter ID: ";
    cin >> id1;
    cout << "Enter Phone Number: ";
    cin >> phone1;

    cout << "\n---------------------------\n";

   
    cout << "Enter second person's Name: ";
    cin >> name2;
    cout << "Enter ID: ";
    cin >> id2;
    cout << "Enter Phone Number: ";
    cin >> phone2;

    cout << "\n\nFinal Output Table:\n";

   
    cout << left << setw(15) << "Name"
         << left << setw(10) << "ID"
         << "Number" << endl;
    cout << "------------------------------------------" << endl;

 
    cout << left << setw(15) << name1 << setw(10) << id1 << phone1 << endl;
    cout << left << setw(15) << name2 << setw(10) << id2 << phone2 << endl;

    return 0;
}


#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string name1, name2;
    int id1, id2;
    std::string phone1, phone2;

    // প্রথম ব্যক্তির তথ্য ইনপুট নেওয়া
    std::cout << "Enter first person's Name: ";
    std::cin >> name1;
    std::cout << "Enter ID: ";
    std::cin >> id1;
    std::cout << "Enter Phone Number: ";
    std::cin >> phone1;

    std::cout << "\n---------------------------\n";

    // দ্বিতীয় ব্যক্তির তথ্য ইনপুট নেওয়া
    std::cout << "Enter second person's Name: ";
    std::cin >> name2;
    std::cout << "Enter ID: ";
    std::cin >> id2;
    std::cout << "Enter Phone Number: ";
    std::cin >> phone2;

    std::cout << "\n\nFinal Output Table:\n";

    // টেবিলের হেডার প্রিন্ট করা
    std::cout << std::left << std::setw(15) << "Name"
              << std::left << std::setw(10) << "ID"
              << "Number\n";
    std::cout << "------------------------------------------\n";

    // প্রথম ও দ্বিতীয় ব্যক্তির তথ্য টেবিল আকারে প্রিন্ট করা
    std::cout << std::left << std::setw(15) << name1 << std::setw(10) << id1 << phone1 << "\n";
    std::cout << std::left << std::setw(15) << name2 << std::setw(10) << id2 << phone2 << "\n";

    return 0;
}
