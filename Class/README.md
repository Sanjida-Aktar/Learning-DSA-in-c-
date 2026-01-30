# 📘 C++ Class, Setter & Getter

---

## 📑 Table of Contents

* [What is a Class?](#1️⃣-class-কী)
* [What’s inside a Class?](#2️⃣-class-এর-ভিতরে-কী-থাকে)
* [Access Specifiers](#3️⃣-access-specifier-খুব-গুরুত্বপূর্ণ)
* [Setter Function](#4️⃣-setter-function-কী)
* [Getter Function](#5️⃣-getter-function-কী)
* [Complete Example](#6️⃣-full-example-setter--getter)
* [Quick Memory Tricks](#7️⃣-মনে-রাখার-সহজ-trick-)
* [Viva / Exam Answers](#8️⃣-viva--exam-এ-লেখার-জন্য-short-answer)

---

## 1️⃣ Class কী?

👉 **Class = Blueprint / নকশা**

Real life এ যেমন Student এর—

* কিছু তথ্য থাকে (id, cgpa)
* কিছু কাজ থাকে

C++ এ এই ধারণাটাই **class**।

```cpp
class Student {
};


```

---

## 2️⃣ Class এর ভিতরে কী থাকে?

Class এর ভিতরে মূলত দুইটা জিনিস থাকে 👇

1. **Variable (Data / Property)**
2. **Function (Method / Behavior)**

```cpp
class Student {
    int id;        // data
    float cgpa;    // data

    void show();   // function
};
```

---

## 3️⃣ Access Specifier (খুব গুরুত্বপূর্ণ)

### 🔒 private

* class এর বাইরে থেকে access করা যায় না
* data secure থাকে

### 🌍 public

* class এর বাইরে থেকেও access করা যায়

```cpp
class Student {
private:
    int id;

public:
    void show();
};
```

📌 Best practice: **data = private**, **function = public**

---

## 4️⃣ Setter Function কী?

👉 **Setter = private data এর value সেট করার function**

❌ Direct access করা যায় না:

```cpp
// s.id = 10;  // wrong
```

✔️ Setter ব্যবহার করি:

```cpp
class Student {
private:
    int id;

public:
    void setId(int x) {
        id = x;
    }
};
```

---

## 5️⃣ Getter Function কী?

👉 **Getter = private data এর value পাওয়ার function**

```cpp
class Student {
private:
    int id;

public:
    void setId(int x) {
        id = x;
    }

    int getId() {
        return id;
    }
};
```

---

## 6️⃣ Full Example (Setter + Getter)

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    void setId(int x) {
        id = x;
    }

    int getId() {
        return id;
    }
};

int main() {
    Student s;

    s.setId(101);          // setter call
    cout << s.getId();     // getter call

    return 0;
}
```

---

## 7️⃣ মনে রাখার সহজ Trick 🧠

* **Setter → value সেট করে**
* **Getter → value নিয়ে আসে**
* **private data → direct access ❌**
* **function দিয়ে access ✔️**

👉 Real life:

* ATM PIN = private
* টাকা তোলা = function

---

## 8️⃣ Viva / Exam এ লেখার জন্য (Short Answer)

**Setter Function:**

> Setter function is used to set the value of private data members of a class.

**Getter Function:**

> Getter function is used to access or return the value of private data members of a class.

---

## 9️⃣ Constructor vs Setter (Confusing Part)

## 🔹 Constructor কী?

👉 Constructor হলো special function, যেটা object তৈরি হওয়ার সাথে সাথে automatically call হয়।

- Class নামের সাথে same name হয়

- Return type থাকে না

- Object বানানোর সময় initial value দিতে ব্যবহার হয়



```
class Student {
private:
    int id;


public:
    Student(int x) {   // constructor
        id = x;
    }


    int getId() {
        return id;
    }
};

Student s(101);   // constructor automatically call

```


## 🔹 Setter কী?

👉 Setter হলো normal function, যেটা object তৈরি হওয়ার পরে value change করতে ব্যবহার হয়।

```
void setId(int x) {
    id = x;
}
Student s;
s.setId(101);   // manually call

```


## 🆚 Constructor vs Setter (Table)
Constructor	Setter
- Object তৈরির সময় call হয়	Object তৈরির পরে call হয়
- Automatically call হয়	Manually call করতে হয়
- Initial value দেয়	Value change করে
- Return type নেই	Return type থাকতে পার


### 📌 Rule of Thumb:
- 👉 Object বানানোর সময় value দরকার → Constructor
- 👉 পরে value change দরকার → Setter
  

## 🔟 Encapsulation কী? (Very Important)

👉 Encapsulation = Data + Function একসাথে রাখা এবং data hide করা


#### Encapsulation এ আমরা—

- Data (variable) রাখি private

- Data access করি public function (setter/getter) দিয়


```
class Student {
private:
    int id;   // hidden data


public:
    void setId(int x) {   // controlled access
        id = x;
    }


    int getId() {
        return id;
    }
};
```


## 🔗 Setter / Getter এর সাথে Relation

- Setter & Getter হলো Encapsulation implement করার tool

- Direct access বন্ধ করে

- Data secure + controlled হয়
- 

#### 📌 Simple কথায়:

Encapsulation without setter/getter almost incomplete



## 1️⃣1️⃣ Interview / Viva Common Questions (Bangla)

### ❓ Class কী?

Answer:
Class হলো user-defined data type, যেটা data members এবং member functions একসাথে রাখে।

### ❓ Object কী?

Answer:
Object হলো class এর instance। Class থেকে object তৈরি করে আমরা data ব্যবহার করি।

### ❓ Constructor কী?

Answer:
Constructor হলো special member function, যেটা object তৈরি হওয়ার সময় automatically call হয় এবং data initialize করে।

### ❓ Setter function কী?

Answer:
Setter function private data member এর value set করার জন্য ব্যবহার হয়।

### ❓ Getter function কী?

Answer:
Getter function private data member এর value access বা return করার জন্য ব্যবহার হয়।

### ❓ Encapsulation কী?

Answer:
Encapsulation হলো data এবং function একসাথে bind করা এবং data কে direct access থেকে hide করা।

### ❓ Why data members are private?

Answer:
Data security এবং controlled access নিশ্চিত করার জন্য data members private রাখা হয়।


#### ⭐ If this README helps you, feel free to star the repository.
