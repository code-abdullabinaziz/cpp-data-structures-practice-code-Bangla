সি++ (C++) ল্যাঙ্গুয়েজে Comments (কমেন্ট) এবং Escape Sequence (এস্কেপ সিকোয়েন্স) সি ল্যাঙ্গুয়েজের মতোই কাজ করে, তবে সি++ এ কিছু আধুনিক সুবিধা এবং লেখার স্টাইল রয়েছে।

#include <iostream>

int main() {
    std::cout << "Escape Sequence\n";
    return 0;
}




//use of \n

#include <iostream>

int main() {
    std::cout << "Hello User!\n";
    std::cout << "Welcome to the world of C++.\n";
    std::cout << "Line 1\nLine 2\nLine 3\n";

    return 0;
}



//use of \t

#include <iostream>
using namespace std;

int main() {
    cout << "ID\tName\tSubject" << endl;
    cout << "--------------------------" << endl;


    cout << "101\tMohammad\tMath" << endl;
    cout << "102\tAbdullah\tPhysics" << endl;
    cout << "103\tAziz\tEnglish" << endl;

    return 0;
}

//use of \\ backslash

#include <iostream>

int main() {
    std::cout << "This is a backslash: \\\n";
    std::cout << "File Location: C:\\Users\\Desktop\\MyCode.cpp\n";

    return 0;
}





//use of \"

#include <iostream>

int main() {
    std::cout << "She said, \"I love programming!\"\n";
    std::cout << "The book name is \"C++ Guide\".\n";

    return 0; // মেইন ফাংশনের শেষ ব্র্যাকেটের আগে return এবং শেষ বন্ধনী }
}






#include <iostream>

int main() {
    // সিঙ্গেল-লাইন কমেন্ট: নিচে সি++ এস্কেপ সিকোয়েন্স টেস্ট করা হচ্ছে
    
    /*  
        মাল্টি-লাইন কমেন্ট:
        নিচের কোডটিতে std::cout ব্যবহার করে স্ক্রিনে 
        সবগুলো এস্কেপ সিকোয়েন্সের আউটপুট দেখানো হবে।
    */
    
    // ১. নিউলাইন (\n) এবং ট্যাব (\t) এর উদাহরণ
    std::cout << "Learning C++ is fun!\n"; 
    std::cout << "Topic:\tComments\nSub-Topic:\tEscape Sequences\n";
    std::cout << "-----------------------------------------\n";

    // ২. ডাবল কোটেশন (\") এবং সিঙ্গেল কোটেশন (\') এর উদাহরণ
    std::cout << "Book Name:\t\"C++ Programming\"\n";
    std::cout << "Author:\t\t\'Bjarne\'\n";
    std::cout << "-----------------------------------------\n";

    // ৩. ব্যাকস্ল্যাশ (\\) এর উদাহরণ
    std::cout << "File Path:\tD:\\C++Project\\Main.cpp\n";
    std::cout << "-----------------------------------------\n";

    // ৪. ব্যাকস্পেস (\b) এর উদাহরণ
    // এটি কার্সার এক ঘর পেছনে নিয়ে 'x' এর ওপর 'd' বসিয়ে দেবে
    std::cout << "Wrong Text:\tAbcx\bd\n"; 
    std::cout << "-----------------------------------------\n";

    // ৫. অ্যালার্ম / বিপ সাউন্ড (\a) এর উদাহরণ
    std::cout << "Alert Sound:\tPlaying Beep Now!\a\n";

    return 0;
}
