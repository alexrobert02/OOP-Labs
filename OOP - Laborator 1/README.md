# LAB-1 (RECAP)

1. Learn how to use GIT
   * Install: https://git-scm.com/downloads
   * Documentation: https://git-scm.com/docs/
   * Learn simple command:
     1. commit --> https://git-scm.com/docs/git-commit
     2. clone --> https://git-scm.com/docs/git-clone
     3. push --> https://git-scm.com/docs/git-push
     4. pull --> https://git-scm.com/docs/git-pull
     5. status --> https://git-scm.com/docs/git-status
     6. add --> https://git-scm.com/docs/git-add
     7. log --> https://git-scm.com/docs/git-log
     8. config --> https://git-scm.com/docs/git-config
   * Each student will create his/hers private GITHUB repository where his/her teaching assistant will be set as a collaborator for that repo.
   * All the operations from now on (lab exams, lab homework will be done via that repo (or multiple repos)).
   

2. Write a program in C-Language that open the file "in.txt", and prints the sum of the numbers that are found on each line of the file in.txt. To open the file use **fopen** API. Write your own function that converts a string to a number (similar cu **atoi** API). To print something to the screen, use the **printf** API.
   
   **Example**: let's consider the following "ini.txt" file:
   ```
   123
   198698
   5009
   983279
   ```
   The program will print to the screen 1187109.


3. Read a sentence from the input using **scanf** API. Then sort split it into words and write to the screen (using the **printf** API) the words sorted (from the longest one to the shortest one). If two words have the same length - they will be sorted out alphabetically. We consider that each word is separated from another one using space (one or multiple).
   
   **Example**: let's consider the following sentence: "*I went to the library yesterday*". The program will print the following to the screen:
   ```
   yesterday
   library
   went
   the
   to
   I
   ```
4. Let's consider the following code:
   ```
   #include <iostream>
   using namespace std;
   
   bool isPrime(int n)
   {
       for (int tr = 2; tr < n / ......; tr++)
           if ((n % ...... ) == 0)
               return ......;
       return true;
   }
   int main()
   {
       int n;
       std::cout << "Enter a number:";
       std::cin >> ......;
       if (isPrime(n))
           std::cout << n << " is prime !";
       else
           std::cout << n << " is NOT prime !";
       return 0;
   }
   ```
   Fill in the missing code (dots: ...... ) to make this program work as expected.