# Corporate Job Management System (OOP in C++)

A comprehensive C++ project designed to demonstrate all **4 Pillars of Object-Oriented Programming (OOP)** alongside advanced architectural concepts like runtime polymorphism, dynamic binding, and constructor chaining.

---

## 🚀 Features

* **Abstract Interface:** Core architecture enforced via an abstract base class and pure virtual functions.
* **Data Security:** Strict data hiding through encapsulation and controlled access specifiers.
* **Extensible Hierarchy:** Role-specific implementation utilizing hierarchical inheritance.
* **Dual Polymorphism:** Practical application of both compile-time (overloading) and runtime (overriding) polymorphism.
* **Automated Initialization:** Clean dependency management via structured constructor chaining.

---

## 🏛️ Class Structure

The project utilizes an abstract design pattern to segregate generic corporate data from role-specific operations:

```text
         [ Job ]            <-- (Abstract Base Class)
          /   \
         /     \
   [Software]  [HR]         <-- (Concrete Derived Classes)
