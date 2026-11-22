C++-এ Comparison (Relational ও Equality) অপারেটর হলো যেকোনো শর্ত (if / else), লুপ (while / for), 
 
বা সিদ্ধান্ত নেওয়ার ভিত্তি। C++ একটি স্ট্যাটিক্যালি-টাইপড ভাষা, তাই এখানে JavaScript-এর মতো অদ্ভুত == বনাম === টাইপ-বদলানোর ঝামেলা নেই—তবে
 
signed বনাম unsigned সংখ্যা, ভগ্নাংশের নির্ভুলতা (float / double), এবং পয়েন্টার/স্ট্রিং তুলনা নিয়ে কিছু খুব দরকারি সূক্ষ্ম বিষয় আছে।

১. C++-এর ৬টি মূল Comparison অপারেটর
 
সব comparison অপারেটরের ফলাফল bool হিসেবে true অথবা false আসে:

== : দুটি মান সমান কি না (Equal to)

!= : দুটি মান অসমান কি না (Not equal to)

> : বাম পাশের মান ডান পাশের চেয়ে বড় কি না (Greater than)

< : বাম পাশের মান ডান পাশের চেয়ে ছোট কি না (Less than)

>= : বাম পাশের মান ডান পাশের চেয়ে বড় অথবা সমান কি না (Greater than or equal to)

<= : বাম পাশের মান ডান পাশের চেয়ে ছোট অথবা সমান কি না (Less than or equal to)


#include <iostream>

int main() {
    int firstNumber = 15;
    int secondNumber = 25;

    std::cout << std::boolalpha;
    std::cout << (firstNumber == secondNumber) << "\n ";
    std::cout << (firstNumber != secondNumber) << "\n ";
    std::cout << (firstNumber < secondNumber) << "\n ";
    std::cout << (firstNumber > secondNumber) << "\n ";
    std::cout << (firstNumber <= 15) << "\n ";
    std::cout << (secondNumber >= 25) << "\n ";

    return 0;
}





if / else এর সাথে Comparison ও Logical Operator

তুলনার ফলাফলকে && (সব সত্য হতে হবে), || (যেকোনো একটা সত্য হলেই হবে), 
এবং ! (উল্টে দেওয়া) এর সাথে যুক্ত করে বাস্তব শর্ত তৈরি করা হয়। ব্র্যাকেট দিলে কাজের ক্রম একদম পরিষ্কার থাকে।


#include <iostream>

int main() {
    int age = 21;
    int score = 85;
    bool isVerified = true;

    if (isVerified && (age >= 18) && (score >= 80)) {
        std::cout << "Eligible with high score" << "\n ";
    } else if (isVerified && (age >= 18)) {
        std::cout << "Eligible but score is below 80" << "\n ";
    } else {
        std::cout << "Not eligible" << "\n ";
    }

    return 0;
}








std::string বনাম C-style String তুলনা

মডার্ন C++-এ লেখার তুলনার জন্য std::string ব্যবহার করা সবচেয়ে সহজ ও নিরাপদ। এতে ==, !=, <, > সরাসরি অক্ষরের ASCII ক্রম অনুযায়ী কাজ করে।

 #include <cstring>
#include <iostream>
#include <string>

int main() {
    std::string cityA = "Rangpur";
    std::string cityB = "Dhaka";

    std::cout << std::boolalpha;
    std::cout << (cityA == cityB) << "\n ";
    std::cout << (cityA != cityB) << "\n ";
    std::cout << (cityA > cityB) << "\n ";

    const char* rawWordOne = "hello";
    const char* rawWordTwo = "hello";
    std::cout << (std::strcmp(rawWordOne, rawWordTwo) == 0) << "\n ";

    return 0;
}








signed বনাম unsigned এর সূক্ষ্ম ফাঁদ

একটা signed মান (int) আর একটা unsigned মান (যেমন std::size_t বা unsigned int) একসাথে তুলনা করলে 

ঋণাত্মক মান বড় ধনাত্মক সংখ্যা হিসেবে ধরা পড়ে যেতে পারে। তাই একই টাইপ বা static_cast ব্যবহার করা নিরাপদ।


#include <cstddef>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30};
    int requiredMinimum = -1;

    std::cout << std::boolalpha;
    std::cout << (requiredMinimum < static_cast<int>(numbers.size())) << "\n ";

    std::size_t currentCount = numbers.size();
    std::size_t targetCount = 3;
    std::cout << (currentCount == targetCount) << "\n ";

    return 0;
}





Floating-Point (double) তুলনা ও Chained Comparison এর নিয়ম
ভগ্নাংশের হিসাবে সরাসরি == না দিয়ে সামান্য ব্যবধান (epsilon) ধরা ভালো।

Python-এর মতো 1 < x < 10 C++-এ সঠিক রেঞ্জ চেক করে না; সঠিক উপায় হলো (x > 1) && (x < 10)।

#include <cmath>
#include <iostream>

int main() {
    double calcValue = 0.1 + 0.2;
    double expectedValue = 0.3;
    double epsilon = 1e-9;

    std::cout << std::boolalpha;
    std::cout << (std::fabs(calcValue - expectedValue) < epsilon) << "\n ";

    int x = 5;
    bool inRange = (x > 1) && (x < 10);
    std::cout << inRange << "\n ";

    return 0;
}



C++ "6"-কে সংখ্যা 6-এ কনভার্ট করে না। বরং "6" > 6 লিখলে কম্পাইলার এরর (compile error) আসবে, 
 
কারণ C++ স্ট্যাটিক্যালি টাইপড ভাষা এবং এখানে JavaScript-এর মতো অটোমেটিক স্ট্রিং-টু-নাম্বার কনভার্সন হয় না।

#include <iostream>
#include <string>

int main() {
    std::string textNumber = "6";
    int convertedNumber = std::stoi(textNumber);
    int targetNumber = 6;

    std::cout << std::boolalpha;
    std::cout << (convertedNumber > targetNumber) << "\n ";
    std::cout << (convertedNumber == targetNumber) << "\n ";

    return 0;
}





Chained Comparison (1 < x < 10) বনাম C++ 
  
Python-এ 1 < x < 10 লিখলে এর মানে দাঁড়ায় 1 < x এবং x < 10।
 
কিন্তু C++-এ 1 < x < 10 এভাবে কাজ করে না, কারণ C++ বাম থেকে ডানে ধাপে ধাপে মূল্যায়ন করে: 
প্রথমে 1 < x হিসাব হয়ে true (1) বা false (0) হয়, তারপর সেই 1 বা 0-এর সাথে < 10 তুলনা হয়।

 তাই C++-এ সঠিক রেঞ্জ চেক করতে && ব্যবহার করতে হয়:

 #include <iostream>

int main() {
    int x = 50;

    std::cout << std::boolalpha;

    // C++-এ সঠিক উপায়: x কি 1 এর চেয়ে বড় এবং 10 এর চেয়ে ছোট?
    bool properRange = (x > 1) && (x < 10);
    std::cout << properRange << "\n ";

    // C++-এ 1 < x < 10 লিখলে ভুল ফল আসতে পারে
    // কারণ আগে (1 < 50) হয়ে true (1) হয়, তারপর (1 < 10) হয়ে true হয়
    bool trickyExpression = 1 < x < 10;
    std::cout << trickyExpression << "\n ";

    return 0;
}


 
