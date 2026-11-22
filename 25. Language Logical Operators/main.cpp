Logical Operator কী এবং কেন লাগে? C++-এ একাধিক শর্ত (bool বা কন্ডিশন) একসাথে জোড়া দেওয়া, উল্টে দেওয়া,
 
 বা সিদ্ধান্ত নেওয়ার জন্য Logical Operators ব্যবহার করা হয়। এদের ফলাফল সাধারণত bool (true অথবা false) আসে।
 
 C++-এ মূলত ৩টি Logical Operator আছে:&& (Logical AND) — সব শর্ত সত্য হলে তবেই true হয়।


C++-এ not, and, এবং or তিনটাই একসাথে থাকলে সবার আগে not (!) কাজ করে, তারপর and (&&), আর সবশেষে or (||) কাজ করে।

|| (Logical OR) — অন্তত যেকোনো একটা শর্ত সত্য হলেই true হয়।! (Logical NOT) — শর্তের মানকে উল্টে দেয় (true হলে false, false হলে true)।
(নোট: C++-এ &&, ||, ! এর বিকল্প শব্দ and, or, not ও আছে, তবে কোডবেসে &&, ||, ! সবচেয়ে বেশি দেখা যায় ও মানসম্মত।)

২. Logical AND (&&) — "সব সত্য হতে হবে"বাম দিকের শর্ত সত্য হলে তবেই ডান দিকের শর্ত চেক করে।
বাম দিকের শর্ত মিথ্যা (false) হলে পুরো এক্সপ্রেশনটাই false হয়ে যায়।C++#include <iostream>

int main() {
    bool isLoggedIn = true;
    bool hasPermission = true;
    bool isAccountActive = false;

    std::cout << std::boolalpha;
    std::cout << (isLoggedIn && hasPermission) << "\n ";
    std::cout << (isLoggedIn && hasPermission && isAccountActive) << "\n ";

    return 0;
}



৩. Logical OR (||) — "যেকোনো একটা সত্য হলেই হবে"বাম দিকের শর্ত মিথ্যা হলে ডান দিকের শর্ত চেক করে।
যেকোনো একটা শর্ত সত্য (true) হলেই পুরো এক্সপ্রেশনটা true হয়; সবগুলো মিথ্যা হলে তবেই false হয়।

#include <iostream>
int main() {
    bool hasAdminAccess = false;
    bool isModerator = false;
    bool isOwner = true;

    std::cout << std::boolalpha;
    std::cout << (hasAdminAccess || isModerator) << "\n ";
    std::cout << (hasAdminAccess || isModerator || isOwner) << "\n ";

    return 0;
}



৪. Logical NOT (!) — "উল্টে দেওয়া"একক অপারেন্ডের ওপর কাজ করে।
সত্যকে মিথ্যা (!true মানে false) এবং মিথ্যাকে সত্য (!false মানে true) বানায়।C++#include <iostream>

int main() {
    bool isBanned = false;
    bool isMaintenanceMode = true;

    std::cout << std::boolalpha;
    std::cout << (!isBanned) << "\n ";
    std::cout << (!isMaintenanceMode) << "\n ";

    return 0;
}



৫. Short-Circuit Evaluation (শর্ট-সার্কিট নিয়ম — খুব গুরুত্বপূর্ণ!)C++-এ && এবং || Short-Circuit নিয়মে কাজ করে—অর্থাৎ 

উত্তর নিশ্চিত হয়ে গেলে পরের অংশ আর চালায় না।false && ... : বাম পাশ false হলে ডান পাশের শর্ত বা অপারেশন চলে না।
true || ... : বাম পাশ true হলে ডান পাশের শর্ত বা অপারেশন চলে না।
এটি নিরাপদ কোডিং (বিশেষ করে নাল পয়েন্টার বা শূন্য দিয়ে ভাগ এড়াতে) দারুণ কাজে লাগে:

#include <iostream>
int main() {
    int* ptr = nullptr;
    int divisor = 0;
    int total = 100;

    std::cout << std::boolalpha;

    // ptr nullptr হওয়ায় (ptr != nullptr) false হবে, তাই *ptr পড়ে ক্র্যাশ করবে না
    bool safePtrCheck = (ptr != nullptr) && (*ptr > 10);
    std::cout << safePtrCheck << "\n ";

    // divisor == 0 সত্য হওয়ায় ডান পাশে (total / divisor) ভাগ করতে যাবে না
    bool safeDivisionCheck = (divisor == 0) || ((total / divisor) > 5);
    std::cout << safeDivisionCheck << "\n ";

    return 0;
}


৬. Operator Precedence ( কাজের ক্রম: !  &&  || )একই এক্সপ্রেশনে !, &&, || এবং 
Comparison (>, <, ==, !=) থাকলে নিচের ক্রমে কাজ হয়:Parentheses (...) — সবার আগে।
Comparison (<, <=, >, >=, ==, !=) — তুলনা।Logical NOT (!) — আগে উল্টায়।
Logical AND (&&) — তারপর && এর হিসাব।Logical OR (||) — সবার শেষে || এর হিসাব।

#include <iostream>
int main() {
    int age = 22;
    bool isBlocked = false;
    bool hasPass = false;
    bool isVip = true;

    std::cout << std::boolalpha;

    // আগে তুলনা (age >= 18) ও !isBlocked, তারপর &&, শেষে ||
    bool accessWithoutParen = !isBlocked && age >= 18 && hasPass || isVip;
    std::cout << accessWithoutParen << "\n ";

    // স্পষ্টতার জন্য ব্র্যাকেট ব্যবহার করাই সবচেয়ে ভালো
    bool accessWithParen = (!isBlocked && (age >= 18) && hasPass) || isVip;
    std::cout << accessWithParen << "\n ";

    return 0;
}



৭. Truthiness ও Non-Bool মানের সতর্কতাC++-এ শর্তের জায়গায় সংখ্যা বা পয়েন্টার দিলে 0 বা nullptr কে মিথ্যা (false) এবং 

অশূন্য সংখ্যা বা নন-নাল পয়েন্টারকে সত্য (true) হিসেবে ধরা হয়। 

তবে কোড পরিষ্কার ও বাগ-মুক্ত রাখতে স্পষ্ট bool বা comparison (x != 0, ptr != nullptr) লেখাই উত্তম অভ্যাস।

#include <iostream>
int main() {
    int count = 0;
    int items = 5;

    std::cout << std::boolalpha;
    std::cout << (count != 0) << "\n ";
    std::cout << (items != 0) << "\n ";

    return 0;
}




৮. De Morgan's Law (নেগেটিভ শর্ত সহজ করার নিয়ম)কোনো যৌগিক শর্তের বাইরে ! দিলে ভেতরের চিহ্নগুলো কীভাবে বদলায়,

সেটা জানা থাকলে জটিল if লেখা সহজ হয়:!(A && B) সমান (!A) || (!B)!(A || B) সমান (!A) && (!B)

#include <iostream>
int main() {
    bool isVerified = true;
    bool isPaid = false;

    std::cout << std::boolalpha;
    bool notBothReady = !(isVerified && isPaid);
    bool eitherMissing = (!isVerified) || (!isPaid);

    std::cout << notBothReady << "\n ";
    std::cout << eitherMissing << "\n ";

    return 0;
}




৯. বাস্তব উদাহরণ: if / else এর সাথে পূর্ণাঙ্গ ব্যবহারC++#include <iostream>

#include <string>

int main() {
    int age = 19;
    int failedAttempts = 2;
    std::string role = "student";
    bool isSuspended = false;

    bool canLogin = (!isSuspended) && (failedAttempts < 3) && ((age >= 18) || (role == "student"));

    if (canLogin) {
        std::cout << "Login allowed" << "\n ";
    } else if (isSuspended || (failedAttempts >= 3)) {
        std::cout << "Account temporarily locked" << "\n ";
    } else {
        std::cout << "Access denied" << "\n ";
    }

    return 0;
}




C++-এ &&, ||, ! এর পাশাপাশি ইংরেজি শব্দ and, or, not সরাসরি লেখা যায় (কোনো বাড়তি হেডার লাগে না)।

ক) and (সব শর্ত সত্য হতে হবে)

#include <iostream>

int main() {
    int age = 20;
    bool hasId = true;

    std::cout << std::boolalpha;
    std::cout << ((age >= 18) and hasId) << "\n ";
    std::cout << ((age >= 25) and hasId) << "\n ";

    return 0;
}


খ) or (যেকোনো একটা শর্ত সত্য হলেই হবে)

#include <iostream>

int main() {
    bool isAdmin = false;
    bool isModerator = true;

    std::cout << std::boolalpha;
    std::cout << (isAdmin or isModerator) << "\n ";
    std::cout << (false or false) << "\n ";

    return 0;
}



গ) not (শর্ত উল্টে দেওয়া)

#include <iostream>

int main() {
    bool isLocked = false;

    std::cout << std::boolalpha;
    std::cout << (not isLocked) << "\n ";
    std::cout << (not true) << "\n ";

    return 0;
}



ঘ) একসাথে and, or, not (বাস্তব if / else উদাহরণ)

#include <iostream>

int main() {
    int age = 19;
    bool isBanned = false;
    bool hasPass = false;
    bool isVip = true;

    if ((not isBanned) and ((age >= 18 and hasPass) or isVip)) {
        std::cout << "Entry allowed" << "\n ";
    } else {
        std::cout << "Entry denied" << "\n ";
    }

    return 0;
}

and : সবগুলো শর্ত সত্য হলে তবেই ফল সত্য।

or : অন্তত একটা শর্ত সত্য হলেই ফল সত্য।

not : সত্যকে মিথ্যা, আর মিথ্যাকে সত্য বানায়।





C++-এ not, and, এবং or তিনটাই একসাথে থাকলে সবার আগে not (!) কাজ করে, তারপর and (&&), আর সবশেষে or (||) কাজ করে।

কাজের ক্রম (উপর থেকে নিচে)

not (!) — সবার আগে পাশের মান বা শর্তকে উল্টে দেয়।

and (&&) — তারপর পাশাপাশি and এর শর্তগুলো মেলায়।

or (||) — সবার শেষে or এর শর্তগুলো মেলায়।

উদাহরণ (ব্র্যাকেট ছাড়া vs ব্র্যাকেটসহ)

ধরুন কাছে আছে:not false or true and false

এখানে ব্র্যাকেট না দিলেও কম্পাইলার এই ক্রমে হিসাব করবে:

আগে not false হয়ে true হবে।

তারপর true and false হয়ে false হবে।

শেষে true or false হয়ে true হবে।


#include <iostream>

int main() {
    bool a = false;
    bool b = true;
    bool c = false;

    std::cout << std::boolalpha;

    // আগে not a (true), তারপর b and c (false), শেষে true or false (true)

    bool withoutParen = not a or b and c;

    // একই জিনিস স্পষ্টভাবে ব্র্যাকেট দিয়ে লিখলে
    bool withParen = (not a) or (b and c);

    std::cout << withoutParen << "\n ";
    std::cout << withParen << "\n ";

    return 0;
}


জরুরি সতর্কতা

ভুল বোঝাবুঝি বা লজিকের ভুল এড়াতে তিনটা একসাথে থাকলে সবসময় ব্র্যাকেট (...) দিয়ে আলাদা করে লিখতে হবে। 

যেমন: (not a) or (b and c) নাকি (not a or b) and c—এ দুটোর মানে কিন্তু আলাদা হয়ে যাবে।
