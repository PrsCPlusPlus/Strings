# Strings

## **THEORY**

A string in C++ is a type of object representing a collection (or sequence) of different characters. Strings in C++ are a part of the standard string class (std::string). The string class stores the characters of a string as a collection of bytes in contiguous memory locations. Strings are most commonly used in the programs where we need to work with texts. We can perform various operations on the strings in C++. For example, reversing, concatenating, or passing as an argument to a function.

The syntax to create a string in C++ is quite simple. We use the string keyword to create a string in C++. However, we also need to include the standard string class in our program before using this keyword.

string str_name = "This is a C++ string";

### **ALGORITHM**

- **String Display**
  
1. Start

2. Declare a string variable to store the input string (inputString).

3. Get the input string (inputString) from the user or from any source.

4. Use a `for` loop to iterate through the characters of the string:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than the length of the string (inputString.length()).
   - In each iteration of the loop, print the character at index i.
   - Increment i after printing each character.

5. End

- **String Length**

1. Start

2. Declare a string variable to store the input string (inputString).

3. Get the input string (inputString) from the user or from any source.

4. Initialize a variable (length) to 0. This variable will be used to count the characters in the string.

5. Use a `for` loop to iterate through the characters of the string:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as the character at index i is not the null character ('\0').
   - In each iteration of the loop, increment the length variable by 1.
   - Increment i to move to the next character.

6. After the loop completes, the length variable will contain the length of the string.

7. Display or use the length as needed.

8. End

- **String Concatenation and Reverse String Concatenation**
  
- *Concatenation Algorithm*:


1. Start

2. Declare two string variables, str1 and str2, to store the input strings.

3. Get input for str1 and str2 from the user or from any source.

4. Declare a string variable, resultStr, to store the concatenated string.

5. Use a `for` loop to concatenate str1 and str2:
   - Initialize a loop variable (i) to 0.
   - Iterate through the characters of str1 using i and append each character to resultStr.
   - Repeat the above step for str2.

6. Display or use resultStr as needed.

7. End

- *Reverse Concatenation Algorithm*:

1. Start

2. Declare a string variable, concatenatedStr, to store the concatenated string.

3. Get input for concatenatedStr from the user or from any source.

4. Declare two empty string variables, str1 and str2, to store the two original strings.

5. Calculate the length of the concatenatedStr.

6. Use a `for` loop to split the concatenatedStr into two original strings:
   - Initialize a loop variable (i) to 0.
   - Iterate through the characters of concatenatedStr using i.
   - Append each character to str1 until i reaches half the length of concatenatedStr.
   - Append the remaining characters to str2.

7. Display or use str1 and str2 as needed.

8. End

- **String Palindrome or not**

1. Start

2. Declare a string variable to store the input string (inputString).

3. Get the input string (inputString) from the user or from any source.

4. Remove spaces and punctuation marks (if needed) from the input string to ensure accurate palindrome checking.

5. Declare two integer variables, left and right:
   - Initialize left to 0 (indicating the start of the string).
   - Initialize right to the length of the string minus 1 (indicating the end of the string).

6. Use a `for` loop to compare characters from the beginning and end of the string:
   - Initialize a loop variable (i) to 0.
   - Continue the loop as long as i is less than or equal to right.
   - In each iteration of the loop, compare inputString[left] and inputString[right]:
     - If they are not equal, the string is not a palindrome; break out of the loop.
     - If they are equal, increment left and decrement right to check the next pair of characters.

7. If the loop completes without breaking, the string is a palindrome.

8. Display a message indicating whether the string is a palindrome or not.

9. End

### **OUTPUT**

- **String Display**

 ![exp7_1](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/b738dae4-84fe-479b-9ffc-ffb8b6fe60fe)

- **String Length**

![exp7_2](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/183080b3-7d77-4de7-8f95-3c551b86eeae)

- **String Concatenation and Reverse String Concatenation**

  
![exp7_3](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/c5c0d74d-81dd-4902-8aed-d9af9aa8c109)

- **String Palindrome or not**

![exp7_4](https://github.com/Purvansha022609/Arrays-and-Strings/assets/139473344/ce2a44bd-86a6-4cb3-81b4-11df3b2e50a4)

