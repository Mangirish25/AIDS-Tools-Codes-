# 🧠 AIDS Tools — Data Science & C++ Utility Toolkit

> A beginner-friendly yet powerful project combining **NumPy**, **Pandas**, **Linear Regression**, and **Object-Oriented Programming in C++** into one practical learning repository.

---

## 🚀 Overview

**AIDS Tools** is a hybrid learning project designed to explore:

* 📊 Data Analysis using **Pandas**
* 🔢 Numerical Computing with **NumPy**
* 📈 Machine Learning with **Linear Regression**
* ⚙️ Core Programming Concepts using **OOP in C++**

This repository is ideal for students and developers who want to strengthen both:

* **Python Data Science skills**
* **C++ problem-solving and OOP concepts**

---

# ✨ Features

## 🐍 Python Modules

### 📌 NumPy Operations

* Array creation & manipulation
* Matrix operations
* Statistical calculations
* Broadcasting techniques

### 📌 Pandas Data Analysis

* DataFrames & Series
* CSV file handling
* Data cleaning
* Filtering & grouping
* Data visualization support

### 📌 Linear Regression

* Simple Linear Regression implementation
* Prediction system
* Model training & testing
* Error analysis

---

## ⚡ C++ OOP Concepts

### 📌 Object-Oriented Programming

* Classes & Objects
* Constructors & Destructors
* Inheritance
* Polymorphism
* Encapsulation
* Abstraction

### 📌 Utility Programs

* Student Management System
* File Handling
* Calculator Utilities
* Mini Console Applications

---

# 🛠️ Technologies Used

| Technology   | Purpose               |
| ------------ | --------------------- |
| Python       | Data Science & ML     |
| NumPy        | Numerical Computation |
| Pandas       | Data Analysis         |
| Scikit-Learn | Linear Regression     |
| C++          | OOP Concepts          |
| Git & GitHub | Version Control       |

---

# 📂 Project Structure

```bash
AIDS-Tools/
│
├── Python/
│   ├── numpy_basics/
│   ├── pandas_projects/
│   ├── linear_regression/
│   └── datasets/
│
├── CPP/
│   ├── oop_concepts/
│   ├── mini_projects/
│   └── utilities/
│
├── README.md
└── requirements.txt
```

---

# 📈 Sample Linear Regression Workflow

```python
import pandas as pd
from sklearn.linear_model import LinearRegression

data = pd.read_csv("data.csv")

X = data[['Hours']]
y = data['Scores']

model = LinearRegression()
model.fit(X, y)

prediction = model.predict([[5]])
print(prediction)
```

---

# ⚙️ Sample C++ OOP Example

```cpp
#include<iostream>
using namespace std;

class Student {
    private:
        string name;

    public:
        Student(string n) {
            name = n;
        }

        void display() {
            cout << "Student Name: " << name;
        }
};

int main() {
    Student s("Mangirish");
    s.display();

    return 0;
}
```

---

# 🎯 Learning Objectives

This project helps you learn:

✅ Data preprocessing
✅ Machine learning basics
✅ Real-world dataset handling
✅ Clean coding practices
✅ OOP principles in C++
✅ Project structuring for GitHub

---

# 📚 Ideal For

* Computer Science Students
* Beginners in Machine Learning
* Python Learners
* C++ OOP Practice
* Academic Mini Projects
* Resume & Portfolio Building

---

# 🔥 Future Improvements

* Add GUI applications
* Add Deep Learning modules
* Integrate SQL database support
* Add advanced ML algorithms
* Create visualization dashboards

---

# 🤝 Contributing

Contributions are welcome!

Feel free to:

* Fork the repository
* Improve code quality
* Add new tools/projects
* Fix bugs
* Suggest features

---

# ⭐ Support

If you found this project useful:

🌟 Star the repository
🍴 Fork it
📢 Share it with friends

---

# 👨‍💻 Author

**Mangirish**
Computer Science Student | AI & ML Enthusiast 🚀

---

# 📜 License

This project is licensed under the MIT License.

---

> “Learning by building projects is the fastest way to grow as a developer.” 💡
