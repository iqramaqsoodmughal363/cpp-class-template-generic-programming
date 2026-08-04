# 🧬 Class Template (Generic Programming) in C++

> A C++ program demonstrating **Class Templates**, a powerful feature of Generic Programming that allows a single class to work with different data types.

---

## 📋 Overview

This program illustrates **Class Templates** in C++, which enable the creation of a generic class that can operate on any data type. The `Pair` class template can hold two values of potentially different types and display them.

**Template Parameters:**
- `T1` : Type of the first element.
- `T2` : Type of the second element.

---

## ✨ Features

- ✅ Demonstrates class templates with multiple type parameters
- ✅ Works with different data types (int, double, string, char)
- ✅ Uses constructor initialization list for member initialization
- ✅ Shows template instantiation for various type combinations
- ✅ Clean and beginner-friendly implementation

---

## 🧮 Program Logic & Execution Flow

1. The `Pair` class template is defined with two template parameters:
   - `T1` and `T2` represent the types of the `first` and `second` members.
2. The constructor initializes both members.
3. The `display()` function prints the values.
4. In `main()`:
   - `Pair<int, double>` is instantiated with integer and double.
   - `Pair<string, char>` is instantiated with string and character.
   - Both objects are displayed.

---

## 💻 Sample Output
First: 10, Second: 5.5
First: Hello, Second: A


---

## 🛠️ How to Compile and Run (Windows & Linux)

Follow the instructions below based on your operating system.

### 🪟 For Windows Users (Using MinGW/G++ or any C++ compiler)
| Step | Command |
| :---: | :--- |
| **1. Compile** | `g++ class_template.cpp -o class_template.exe` |
| **2. Run** | `class_template.exe` |

> **Note:** If `g++` is not recognized, make sure MinGW is installed and added to your System PATH.

---

### 🐧 For Linux / macOS Users (Terminal)
| Step | Command |
| :---: | :--- |
| **1. Compile** | `g++ class_template.cpp -o class_template` |
| **2. Run** | `./class_template` |

> **Prerequisite:** Ensure GCC/G++ is installed on your system. (On Linux: `sudo apt install g++` | On macOS: `xcode-select --install`)

---

## 📂 Project Structure
cpp-class-template-generic-programming/
│
├── class_template.cpp # Main source code file
└── README.md # Project documentation (this file)


---

## 👩‍💻 Author

**Iqra Maqsood Mughal**  
*C++ Developer | Programming Enthusiast*

---

## 📅 Date

**August 2, 2026**

---

## 📄 License

This project is open-source and intended for educational purposes.
