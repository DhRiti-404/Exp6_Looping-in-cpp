# 💡 Experiment: Looping in C++

## 🧪 Objective

The purpose of this experiment is to explore and understand **looping constructs in the C++ programming language**. Loops are used to repeat a block of code multiple times based on a condition. Mastering loops is essential for solving real-world problems efficiently, such as pattern printing, number processing, and user input validation.

This experiment contains multiple C++ programs that demonstrate the practical use of:
- `for` loops
- `while` loops
- `do-while` loops
- Nested loops

---

## 📘 Introduction

Looping is one of the fundamental concepts in any programming language. In C++, loops are primarily used to repeat tasks efficiently. Instead of writing the same line of code multiple times, loops allow us to execute a set of statements repeatedly.

There are **Three main types of loops in C++**:

1. **`for` loop** – Used when the number of iterations is known beforehand.
2. **`while` loop** – Used when the number of iterations is unknown and depends on a condition.
3. **`do-while` loop** – Similar to the `while` loop but guarantees at least one execution of the loop body.

**Nested loops** (loops inside loops) are often used to print patterns or process matrices.

---

## 🗂️ Program Descriptions

### 1. `Printing Even numbers in a range`
**Task:** Print all even numbers in a given range.  
**Concepts:** `for` loop, modulus operator.

**Theory:**  
The program uses a loop to iterate through a user-defined range and prints numbers divisible by 2 using the modulo operator (`%`). It helps in understanding how to apply conditional checks inside loops.

---

### 2. `Flipped Triangle`
**Task:** Print a flipped right-angled triangle pattern.  
**Concepts:** Nested `for` loops, decreasing iterations.

**Theory:**  
This pattern begins with the maximum number of stars on the top row, reducing by one star per line. It teaches loop control, indexing, and formatting using spaces.

---

### 3. `Inverted Pyramid`
**Task:** Print an inverted pyramid of stars.  
**Concepts:** Nested loops, loop counters for alignment and symmetry.

**Theory:**  
This program emphasizes how to handle spacing and decreasing star patterns in a pyramid format. It demonstrates symmetrical layout using mathematical relations between rows and spaces.

---

### 4. `Inverted Triangle`
**Task:** Print an inverted left-aligned triangle of stars.  
**Concepts:** Simple nested `for` loops.

**Theory:**  
The triangle starts with the highest number of stars, reducing one on each row. A useful example to reinforce loop decrementing and printing shapes with control structures.

---

### 5. `Printing numbers in a triangle`
**Task:** Print a number triangle that increases row-wise.  
**Concepts:** Nested loops, number sequence generation.

**Theory:**  
Each row prints numbers starting from 1 up to the row number. This is a classic example of combining loop counters with pattern logic.

---

### 6. `Setting a password`
**Task:** Validate a password based on two conditions:
- At least 8 characters long
- At least one special character

**Concepts:** Looping through a string, character checking, Boolean flags.

**Theory:**  
This program loops through each character of the password using a `for` loop and uses the `isalnum()` function to detect special characters. It’s a practical example of applying loops in real-life applications like authentication systems.

---

### 7. `Printing SIT`
**Task:** Print the characters **S**, **I**, and **T** using stars (`*`).  
**Concepts:** Nested loops, creative pattern design.

**Theory:**  
Each character is crafted using loops and conditionals to print stars at the appropriate positions. This strengthens understanding of coordinates in 2D loops and artistic formatting using loops.

---

### 8. `Pyramid`
**Task:** Print a symmetrical star pyramid.  
**Concepts:** Nested `for` loops, spacing, symmetry.

**Theory:**  
A fundamental pattern printing exercise where the number of stars increases by 2 in each row and the spaces decrease. This is used to learn mathematical relations in loop indices.

---

### 9. `Reversing digits of a number`
**Task:** Reverse the digits of a number.  
**Concepts:** `while` loop, modulus and division.

**Theory:**  
The digits of the number are extracted using `% 10`, and the number is divided by 10 repeatedly until it's 0. A real-world application of loops for number manipulation.

**Example:**  
Input: `1234` → Output: `4321`

---

### 10. `Right Angle triangle`
**Task:** Print a left-aligned right triangle using stars.  
**Concepts:** Nested loops, incremental logic.

**Theory:**  
Each row contains one more star than the previous row, starting from one star. A fundamental example of how loop counters can be used to build incremental structures.

---

### ✅ Conclusion:

Looping constructs are a powerful tool in C++ that allow us to perform repetitive tasks with ease. This experiment provided hands-on experience with various loop types and patterns, enhancing both problem-solving skills and familiarity with syntax. Through these programs, students gain a solid foundation in iterative logic—an essential building block in programming.




