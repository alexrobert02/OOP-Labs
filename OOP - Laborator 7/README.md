# LAB-7 (TEMPLATES & LITERALS)

1. Write two C++ literals for Kelvin and Fahrenheit conversions to Celsius so that the following code works.
    ```   
    int main() {
        float a = 300_Kelvin;
        float b = 120_Fahrenheit;
        return 0;
    }
    ```
    Organize the code in the following way:
    * a main file called **main.cpp** that contains the main function and has an example on how to use those two literals (similar to the explained in the previous main function) .
    * Use the following [link](https://ro.wikipedia.org/wiki/Fahrenheit) for explanation on how to convert from Kelvin and Fahrenheit to Celsius.


2. Write a template that simulates a vector template. This template should cover the following methods:
   * **push** method (to add an element at the end of the vector)
   * **pop** method (return the last element from the vector)
   * **delete/remove** method (deletes/removes an element from a specific index in the vector)
   * **insert** method (insert an element at a specific index)
   * **sort** method (sort all elements in the vector ==> use a callback function to provide a way to compare two elements. If the callback function is not present (*nullptr*), **operator<** is used.)
   * **get** method (returns a constant reference to an object from the vector)
   * **set** method (set an object to a specific index --> that index must be already used by another object).
   * **count** method (returns the number of elements in the vector)
   * **firstIndexOf** method (given an object and a callback function, find the first index of the element from the vector that is equal (according to the callback function) with the given parameter. If the callback function is nor present (*nullptr*), **operator==** is used.
   
   Use dynamic allocation. Whenever, resizing is needed, double the size of the allocated space.
