#include <iostream>

int main() {
    // Create integer variables
    int length = 4;
    int width = 6;

    // Calculate the area of a rectangle
    int area = length * width;

    // Print the variables using professional standard (std::cout)
    std::cout << "Length is: " << length << "\n";
    std::cout << "Width is: " << width << "\n";
    std::cout << "Area of the rectangle is: " << area << "\n";

    return 0; // মেইন ফাংশন সফলভাবে শেষ হওয়ার ইন্ডিকেটর হিসেবে return 0 যুক্ত করা হলো
}




#include <iostream>
#include <string> // (যদি স্ট্রিং ব্যবহার না হয়, তবে এটি অপশনাল)

int main() {
    int num1, num2, num3;
    num1 = 10; 
    num2 = 20;
    
    std::cout << "--- Before Swapping ---\n";
    std::cout << "Num1 = " << num1 << "\n";
    std::cout << "Num2 = " << num2 << "\n";

    // Swapping Logic (num3 কে অস্থায়ীভাবে ব্যবহার করে মান বদল করা হচ্ছে)
    num3 = num2; // num3 = 20
    num2 = num1; // num2 = 10
    num1 = num3; // num1 = 20

    std::cout << "--- After Swapping ---\n";
    std::cout << "Num1 = " << num1 << "\n";
    std::cout << "Num2 = " << num2 << "\n";

    return 0;
}

১. প্রথমে num1-এ 10 এবং num2-এ 20 রাখা হলো।
   
২. সোয়াপ করার সময় মান হারিয়ে যাওয়ার হাত থেকে বাঁচতে num2-এর মানটি num3-এ সেভ করে রাখা হলো (num3 = 20)।
   
৩. এরপর num1-এর মান num2-এ বসানো হলো (num2 = 10)।
   
৪. সবশেষে num3-এ সংরক্ষিত num2-এর আদি মানটি num1-এ বসিয়ে দেওয়া হলো (num1 = 20)। ফলে দুটি ভেরিয়েবলের মান সফলভাবে একে অপরের সাথে বদলে গেল!




#include <iostream>
#include <string> // (যদি স্ট্রিং ব্যবহার না হয়, তবে এটি অপশনাল)

int main() {
    int num1, num2, num3;
    
    // ইউজার ইনপুট নেওয়া হচ্ছে
    std::cout << "Enter first integer number: ";
    std::cin >> num1;

    std::cout << "Enter second integer number: ";
    std::cin >> num2;
    
    // সোয়াপ করার আগের অবস্থা প্রিন্ট করা হচ্ছে
    std::cout << "\n--- Before Swapping ---\n";
    std::cout << "Num1 is: " << num1 << "\n";
    std::cout << "Num2 is: " << num2 << "\n";

    // Temp ভেরিয়েবল ব্যবহার করে ভ্যালু সোয়াপ (Swapping) করা হচ্ছে
    num3 = num2; 
    num2 = num1; 
    num1 = num3; 

    // সোয়াপ করার পরের অবস্থা প্রিন্ট করা হচ্ছে
    std::cout << "\n--- After Swapping ---\n";
    std::cout << "Num1 = " << num1 << "\n";
    std::cout << "Num2 = " << num2 << "\n";

    return 0;
}
