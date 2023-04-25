# sum-of-numbers
Here's the algorithm for the given code:

1. Start the program.
2. Declare variables n1, sum, and m.
3. In the main function, ask the user to input a number m.
4. Call the function sum(m) to calculate the sum of its digits.
5. In the function sum(int n1), initialize the variable sum to 0.
6. While n1 is greater than 0, do the following steps:
    a. Get the rightmost digit of n1 using the modulo operator and store it in m.
    b. Add m to the variable sum.
    c. Remove the rightmost digit of n1 by dividing it by 10 and updating the value of n1.
7. Display the sum of the digits to the user using printf().
8. End the program.
