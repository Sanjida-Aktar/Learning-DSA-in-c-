#include<iostream>
using namespace std;
#include<vector>

int main()
{
     vector<int>vec={'a','b','c','d'};
     cout<<"size = "<<vec.size()<<endl;

     vector<int>num;

     cout<<"size = "<<num.size()<<endl;

     num.push_back(25);// push_back==add kora
     num.push_back(35);
     num.push_back(20);
     num.push_back(10);


     cout<<"After push back size "<<num.size()<<endl;//3
     cout<<"capacity ="<<num.capacity()<<endl;//4

     num.pop_back();//remove value 20

     cout<<num.back()<<endl;//print last value 35

     cout<<num.front()<<endl;//print first value 25

     cout<<num.at(1)<<endl; //print index value

     for(int i: num)
        cout<<"number= "<<i<<endl;

     return 0;
}
# 📘 C++ STL Vectors – Complete Guide

## 🔹 Vector কী?

- Vector হলো C++ STL (Standard Template Library)-এর একটি dynamic array।
- সাধারণ array-এর মতোই কাজ করে, তবে এর size স্বয়ংক্রিয়ভাবে বাড়ে বা কমে।
- Vector ব্যবহার করলে মেমোরি ম্যানেজমেন্ট নিয়ে চিন্তা করতে হয় না।


## 🔹 Vector-এর গুরুত্বপূর্ণ বৈশিষ্ট্য

- Dynamic size → প্রয়োজন অনুযায়ী size বাড়ে/কমে।
- Random access → index দিয়ে element access করা যায়।
- Efficient insertion/deletion → শেষে element যোগ/বাদ করা খুব দ্রুত হয়।
- Functions/Methods → যেমন `push_back()`,` pop_back()`, `front()`, `back()`, `size()`, `capacity()`, `at()` ইত্যাদি।


# 🔹 সাধারণ Functions

| Function      | Description |
|---------------|-------------|
| push_back(x)  | শেষে নতুন element যোগ করে |
| pop_back()    | শেষের element মুছে ফেলে |
| front()       | প্রথম element রিটার্ন করে |
| back()        | শেষের element রিটার্ন করে |
| size()        | মোট element সংখ্যা জানায় |
| capacity()    | বর্তমানে কতটুকু জায়গা বরাদ্দ আছে জানায় |
| at(i)         | নির্দিষ্ট index-এর element দেয় |
