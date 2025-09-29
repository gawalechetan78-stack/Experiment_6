

# EXPERIMENT 06(A): PRINTING "HELLO, WORLD!" 10 TIMES USING A FOR LOOP IN C++

## AIM
To write a C++ program that prints "Hello, World!" ten times using a `for` loop.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY
The `for` loop in C++ is used to execute a block of code a specific number of times. It consists of three parts:

1. **Initialization** – executed once at the beginning.  
2. **Condition** – evaluated before each iteration. If true, the loop continues; if false, the loop ends.  
3. **Update** – executed after each iteration to update the loop control variable.  

In this experiment, a `for` loop is used to repeat the output statement exactly 10 times.

### Syntax of a `for` loop:
```cpp
for(initialization; condition; update) {
    // code block
}
```

### ALGORITHM
1. Start
2. Initialize a loop control variable i = 0
3. Use a for loop to iterate while i < 10
4. In each iteration, print the string (i+1) Hello, World!
5. Increment i
6. End

## CONCLUSION
I wrote a C++ program that prints "Hello, World!" ten times using a for loop. This experiment helped me understand how iteration works in C++ and the structure and syntax of for loops.

# EXPERIMENT 06(B): PRINTING A REVERSE LEFT-ALIGNED TRIANGLE PATTERN USING NESTED LOOPS IN C++

## AIM
To write a C++ program that prints a reverse left-aligned triangle star pattern using nested `for` loops based on the number of rows input by the user.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY
In C++, nested `for` loops are commonly used for printing patterns. This pattern requires:
- A decreasing number of stars in each row.
- An increasing number of leading spaces for proper alignment.

The outer loop counts down from the user input to 0. The first inner loop prints the spaces, while the second prints the stars. This combination results in a reversed, left-aligned triangle.

### ALGORITHM
1. Start  
2. Declare an integer variable `num`  
3. Prompt the user to enter the number of rows  
4. Read the input using `cin`  
5. Use an outer loop that starts from `i = num` and decrements to `0`:
   - Use an inner loop to print spaces from `j = 0` to `num - i - 1`
   - Use another inner loop to print stars from `k = 0` to `i`
6. Print a newline after each row  
7. End

## CONCLUSION
I wrote a C++ program that uses nested loops to print a reversed left-aligned triangle pattern of stars. This helped me understand the use of multiple nested loops and the importance of spacing logic in console-based pattern printing.

# EXPERIMENT 06(C): PRINTING EVEN NUMBERS FROM 0 TO 10 USING A FOR LOOP IN C++

## AIM
To write a C++ program that prints all even numbers from 0 to 10 using a `for` loop and the modulus operator.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY
In C++, the modulus operator `%` is used to obtain the remainder when one number is divided by another. A number is considered even if it is divisible by 2 (i.e., the remainder is 0).

To print even numbers between 0 and 10:
- Use a `for` loop to iterate from 0 to 10.
- Use `if(i % 2 == 0)` to check if the number is even.
- If true, print the number.

This method demonstrates how conditional statements and loops work together to filter and display specific outputs.

### ALGORITHM
1. Start  
2. Use a `for` loop to iterate from `i = 0` to `i <= 10`  
3. In each iteration:
   - Check if `i % 2 == 0`
   - If true, print the value of `i`
4. Print a newline after the loop  
5. End

## CONCLUSION
I wrote a C++ program to print all even numbers from 0 to 10 using a `for` loop and modulus operator. This experiment helped me practice using conditional statements inside loops and reinforced the concept of even number checking in programming.

# EXPERIMENT 06(E): CHECKING IF ENTERED PASSWORD MATCHES THE STORED PASSWORD IN C++

## AIM
To write a C++ program that checks if the password entered by the user matches the predefined stored password using string comparison and loop.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY
In C++, `string` objects can be compared character by character using loops. This is especially useful when creating simple authentication or validation systems.

In this program:
- A stored password is hardcoded.
- The user is prompted to input a password.
- A loop compares each character of the input with the stored password.
- A flag is used to track mismatch.
- If all characters match, the password is correct; otherwise, it is incorrect.

Note: The comparison is **case-sensitive**.

### ALGORITHM
1. Start  
2. Declare two string variables: `password` for input, `stored_pass` for the correct password  
3. Initialize an integer `flag = 0`  
4. Prompt user to enter the password and read the input using `cin`  
5. Use a loop to compare each character of the input with the stored password  
6. If any character mismatches, set `flag = 1`  
7. If `flag == 1`, display "The entered password is NOT correct"  
8. Else, display "The entered password is correct"  
9. End

## CONCLUSION
I wrote a C++ program that verifies if the entered password matches a stored password by performing character-by-character comparison using a loop. This experiment helped me understand string manipulation, condition checking, and simple validation logic.

# EXPERIMENT 06(F): REVERSING A NUMBER USING WHILE LOOP IN C++

## AIM
To write a C++ program that reverses a given number using a `while` loop and modulus/division operations.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY
To reverse a number in C++, we can extract its digits one by one using the modulus operator `%` and remove each digit by dividing the number by 10.

For example, to reverse 12345:
- 12345 % 10 = 5 (Print 5) 
- 1234 % 10 = 4 (Print 4)  
- and so on...

This process continues until the number becomes zero.

### Operations Used:
- `num % 10` gives the last digit.
- `num / 10` removes the last digit.

### ALGORITHM
1. Start  
2. Declare an integer variable `num`  
3. Prompt the user to enter a number  
4. Read the input using `cin`  
5. While `num > 0`:
   - Print `num % 10`
   - Update `num = num / 10`  
6. Print a newline after the loop  
7. End

## CONCLUSION
I wrote a C++ program to reverse a number using a `while` loop. This experiment helped me understand digit extraction using modulus and how to manipulate numbers using loops for reverse operations.

# EXPERIMENT 06(H): PRINTING A RIGHT-ANGLED TRIANGLE PATTERN USING NESTED FOR LOOPS IN C++

## AIM
To write a C++ program that prints a right-angled triangle star pattern using nested `for` loops.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY
In C++, nested loops are ideal for printing patterns. In this triangle pattern:
- The outer loop controls the number of rows.
- The inner loop prints increasing numbers of `*` characters per row.

Each new line adds one more star than the previous, resulting in a triangle aligned to the left.

For `n = 10`, the output will contain 10 rows with an increasing number of stars in each.

### ALGORITHM
1. Start  
2. Declare integers `i`, `j`, and `n = 10`  
3. Use an outer loop `i` from 1 to `n`  
4. For each `i`, run an inner loop `j` from 1 to `i`:
   - Print `* `  
5. After inner loop, print a newline  
6. End

## CONCLUSION
I wrote a C++ program that prints a right-angled triangle pattern using nested `for` loops. This helped me understand loop control, nested structures, and pattern design logic in C++.

# EXPERIMENT 06(K): PRINTING FLOYD'S TRIANGLE USING NESTED FOR LOOPS IN C++

## AIM
To write a C++ program that prints Floyd’s Triangle using nested `for` loops. Floyd’s Triangle is a right-angled triangular array of natural numbers.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY
Floyd's Triangle is a number pattern in which the natural numbers are arranged in a triangular format. The pattern begins with 1 at the top and continues with consecutive numbers on subsequent rows, where the `i-th` row contains `i` numbers.

In this program:
- A counter (`num`) is initialized to 1.
- The outer loop controls the number of rows.
- The inner loop prints increasing values from `num` and updates it after each print.

### ALGORITHM
1. Start  
2. Initialize `n = 5` and `num = 1`  
3. Use an outer loop from `i = 0` to `n`  
4. Inside the outer loop, run an inner loop from `k = 0` to `i`  
5. Print `num` and increment it  
6. After each row, print a newline  
7. End

## CONCLUSION
I wrote a C++ program that generates Floyd’s Triangle using nested loops. This helped me understand how counters work within nested structures and how patterns can be formed using simple logic in C++.

# EXPERIMENT 06(L): PRINTING A HOURGLASS STAR PATTERN USING NESTED FOR LOOPS IN C++

## AIM
To write a C++ program that prints a symmetric hourglass (diamond-like) star pattern using nested `for` loops.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY
In C++, nested `for` loops allow control over rows and columns to print complex patterns such as hourglass shapes.

The hourglass pattern in this program consists of two mirrored triangles:
1. **Upper Inverted Triangle** – stars decrease while leading spaces increase.
2. **Lower Triangle** – stars increase again with decreasing spaces.

By manipulating the number of spaces and stars printed in each row, a symmetric hourglass pattern is formed.

### ALGORITHM
1. Start  
2. Set `n = 5` as the number of levels above and below the center  
3. **First Part (Inverted Triangle):**
   - Loop `i` from `n` down to `0`:
     - Print `(n - i)` spaces  
     - Print `(i + 1)` stars  
4. **Second Part (Lower Triangle):**
   - Loop `i` from `1` to `n`:
     - Print `(n - i)` spaces  
     - Print `(i + 1)` stars  
5. Print a newline after each row  
6. End

## CONCLUSION
I wrote a C++ program that prints a symmetric hourglass star pattern using nested loops. This experiment helped me enhance my logic for controlling nested loops and visual alignment in pattern printing.
# Experiment_6
