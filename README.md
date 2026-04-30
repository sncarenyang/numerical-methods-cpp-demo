
[![Build](https://github.com/sncarenyang/Numerical-methods-toolkit/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/sncarenyang/Numerical-methods-toolkit/actions)
[![License](https://img.shields.io/github/license/sncarenyang/Numerical-methods-toolkit)](LICENSE)
[![Stars](https://img.shields.io/github/stars/sncarenyang/Numerical-methods-toolkit?style=social)](https://github.com/sncarenyang/Numerical-methods-toolkit)

# 🔢 Numerical Methods C++ Toolkit

An interactive C++ toolkit implementing fundamental numerical methods for scientific computing.

This project demonstrates root-finding and numerical integration algorithms through a modular and user-friendly command-line interface (CLI).

---


## 🧠 Overview

This toolkit provides implementations of core numerical methods commonly used in computational physics and engineering.

## 📈 Implemented Methods

- **Root Finding**
  - Newton-Raphson Method
  - Bisection Method

- **Numerical Integration**
  - Trapezoidal Rule
  - Simpson’s Rule

Users can interactively select methods and input parameters via CLI.

---

## ⚙️ Features

- Interactive command-line interface
- Modular C++ design (`.h + .cpp`)
- Convergence checks and iteration limits
- Input validation with user guidance
- Cross-platform execution (Local / Codespaces / Colab)

---

## 💻 Interactive CLI
===== Numerical Methods Toolkit (C++) =====
 1. Newton-Raphson (solve x^2 - 2 = 0)
 2. Bisection Method (solve x^2 - 2 = 0)
 3. Trapezoidal Rule (integrate sin(x))
 4. Simpson’s Rule (integrate sin(x))
 5. Exit

## 🛠 Build & Run (Recommended)
### **Local / GitHub Codespaces**
This project uses a Makefile to simplify compilation and execution.
```bash
make
make run
```
to clean

```bash

make clean
```
#### Example Output

##### Newton-Raphson
![demo1.png](/images/ex_nt.png)

##### Trapezoidal Rule
![demo2.png](/images/ex_sin.png)

### **Google Colab**
```bash
%%bash
g++ main.cpp numerical_methods.cpp -o numerical_demo -std=c++17
```

> #### 1.Newton-Raphson
>```bash
>printf "1\n1.0\n0.0001\n20\n0\n" | ./numerical_demo
>```
>> ###### output
>>```bash
>>Converged in X iterations
>>Result ≈ 1.41421
>>```

> #### 2.Bisection Method
>```bash
>printf "2\n1\n2\n0.0001\n50\n0\n" | ./numerical_demo
>```
>> ###### output
>>```bash
>>f(a) = -1, f(b) = 2
>>>Converged in X iterations
>>Result ≈ 1.41421
>>```

> #### 3.Trapezoidal Rule
 >```bash
>printf "3\n0\n3.14159\n100\n0\n" | ./numerical_demo
>```
>> ###### output
>>```bash
>>Result ≈ 2.0
>>```

> #### 4.Simpson's Rule
 >```bash
>printf "4\n0\n3.14159\n100\n0\n" | ./numerical_demo
>```
>> ###### output
>
>>```bash
>>Integrate sin(x) from a to b
>>a: b: n (even number): 
>>Result ≈ 2.00000
>>```

## 🏗️ Project Structure
```text
numerical-methods-cpp-demo/
├── main.cpp               #CLI interface
├── numerical-methods.h    #function declarations
├── numerical-methods.cpp  #algorithm implementations
├── Makefile               #build system
├── .gitignore
├── README.md
├── .github/workflow/ci.yml
├── images/                       
│   ├── ex_nt.png          # demo output of Newton-Raphson
│   └── ex_sin.png         # demo output of Trapezoidal Rule 
└── LICENSE
```


## 🎯 Why This Project Matters
This project demonstrates:
-	Strong C++ programming fundamentals
-	Implementation of classical numerical algorithms
-	Understanding of convergence and error control
-	Ability to design modular and reusable code
-	Experience adapting code across multiple environments


## 💡 Highlights

- Built an interactive CLI-based numerical methods toolkit in C++
- Implemented root-finding and numerical integration algorithms from scratch
- Designed modular architecture using header/source separation
- Managed multi-file compilation with a Makefile-based build system
- Added convergence control, input validation, and robustness checks
- Ensured reproducibility across Codespaces and Colab environments
  
## 📈 Future Improvements
-	Add Secant Method
-	Compare convergence speed (Newton vs Bisection)
-	Add error analysis and visualization
-	Extend to differential equation solvers


## 👩‍💻 Author
Shi-Ning Caren Yang

## 🌐 License & Disclaimer
The code is released under the MIT License.
It is intended for educational / demonstration purposes, not for production‑level scientific computing.

## 📊 Repo Stats

[![Repo Graph](https://github-readme-stats.vercel.app/api?username=sncarenyang&repo=Numerical-methods-toolkit&show_icons=true&theme=radical)](https://github.com/sncarenyang/Numerical-methods-toolkit)

[![Top Langs](https://github-readme-stats.vercel.app/api/top-langs/?username=sncarenyang&layout=compact&theme=radical)](https://github.com/sncarenyang/Numerical-methods-toolkit)

