# EECS 230 Lab 8

In this lab, you will review and work on solidifying your intuition with data structures and using shared_pointers

Work with a partner, and discuss and pair-program the following exercises.

## Exercises

1. Consider a binary tree where each node contains an int, and a shared_ptr to its left and right child. Draw on paper the following binary tree:
      Level 0: 6
      Level 1: 3 | 10
      Level 2: 1,5 | 9,56

2. Add elements 102, 2, 7, and 103 to the binary tree. Describe to your partner the algorithm for inserting an element into a binary tree.

3. Search for values 5, 7, and 58. Describe to your partner the algorithm for searching for an element in a binary tree.

4. Write a function `void pointer_fun(int a, int b)`, that creates two integer shared_pointers named ptrA and ptrB that point to ints a and b, respectively. Print to terminal the values of the ints at the pointers.

5. Write a function `short greater_val(shared_ptr<short> A, shared_ptr<short> B)` that takes two shared_pointers to shorts, and returns the value of whichever short is greater.

6. What is the benefit of shared_pointers, versus using New and Delete to allocate memory?

7. What are the properties of a Set, and what methods does a Set container support?

8**. In the movie the Martian, Matt Damon is stranded on Mars. He has a video feed with NASA, where NASA can rotate a camera 360 degrees. He can communicate with NASA by writing, and showing what he wrote to the camera. Having NASA communicate with him using the camera is more difficult. He considers using the alphabet, and putting each of 26 letters spread out over 360 degrees, but determines that the 14 degrees of separation (360/26) between each letter would be insufficient. How should/how does Matt Damon have NASA communicate with him?
