#include <iostream>
using namespace std;
int main(){
     return 0;
}

C+ প্রোগ্রামিংয়ে Operator, Operand, এবং Expression হলো যেকোনো গাণিতিক বা যৌক্তিক কাজ সম্পন্ন করার মূল তিনটি উপাদান।
     
Operand :     
Operand হলো সেই মান বা ভেরিয়েবল, যাদের উপর operator কাজ করে।
এটি কোনো Variable (যেমন: a, b) হতে পারে অথবা কোনো Constant মান (যেমন: 5, 10.5) হতে পারে।
a + 5, এখানে a এবং 5 হলো Operand।

a + b 
a → operand
b → operand
+ → operator


     
Operator:
Operator হলো এমন একটি চিহ্ন (symbol), যা কোনো কাজ বা অপারেশন সম্পাদন করে।

Arithmetic Operators: যোগ (+), বিয়োগ (-), গুণ (*), ভাগ (/), ভাগশেষ (%)।
     
Relational Operators: তুলনা করার জন্য ব্যবহৃত হয়। যেমন: == (সমান), != (সমান নয়), > (বড়), < (ছোট), >= (বড় বা সমান), <= (ছোট বা সমান)।
     
Logical Operators: যৌক্তিক সিদ্ধান্ত নিতে ব্যবহৃত হয়। যেমন: && (AND), || (OR), ! (NOT)।
     
Assignment Operators: ভেরিয়েবলে মান রাখতে ব্যবহৃত হয়। যেমন: =, +=, -=, *=, /=।
     
Increment/Decrement Operators: মান ১ বাড়াতে (++) বা কমাতে (--) ব্যবহৃত হয়।
     
Bitwise Operators: বাইনারি লেভেলে কাজ করে। যেমন: & (AND), | (OR), ^ (XOR), ~ (NOT), << (Left shift), >> (Right shift)।

Expression:
     
এক্সপ্রেশন হলো অপারেটর এবং অপারেন্ডের একটি কম্বিনেশন, যা মূল্যায়ন (evaluation) করে একটি নির্দিষ্ট ফলাফল বা ভ্যালু রিটার্ন করে।
     
Arithmetic Expression: (a + b) * Relational Expression: x > y (এটি true অথবা false রিটার্ন করে)।
     
Logical Expression: (a > b) && (c < d)
     
Conditional Expression (a > b) ? a : b
     
Assignment Expression x = a + b 
     
Operand: যার ওপর কাজ করা হয় (যেমন: সংখ্যা)।

Operator: যা দিয়ে কাজ করা হয় (যেমন: চিহ্ন)।

Expression: অপারেটর এবং oprand মিলে যা তৈরি হয় (পুরো সমীকরণ)।



#include <iostream>

int main() {
    int firstNumber = 5;
    int secondNumber = -firstNumber;

    std::cout << "Negation: " << secondNumber << "\n";

    int thirdNumber = -secondNumber;

    std::cout << "Result: " << thirdNumber << "\n";

    return 0;
}
