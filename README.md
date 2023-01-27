# string-C-
This is a simple string problem in C++, helps newcomers get familiar with this data type. 
Giving the file ARRAY.INP includes
- The first line contains a positive integer N
- The second line contains N integers
Output file ARRAY.OUT


- Positive numbers, greater than 0, at the beginning of the ascending array
- The zeros in the middle of the array
- Negative numbers at the end of the array, ascending.


Output alternating positive and negative numbers, minus 0.

Example: 
input: 16 
       -1 -4 -3 -2 0 1 3 0 -1 3 4 -5 -6 -8 -7 -9
output: 1 -9  3 -8 3 -7 4 -6 0 0
The program starts by reading the first line of the input file to get the value of N, and then it reads the second line of the input file to get the N integers. Then it uses "if" and "else" statement to create three different vectors, one for the positive numbers, one for the zeros, and one for the negative numbers. Then the program sorts the positive numbers in ascending order and negative numbers in descending order using sort() function. Finally, it writes the result to the output file, "ARRAY.OUT", but this time, it's writing only the alternating positive and negative numbers, minus 0. The loop for writing the zeros is also added as an additional step. 
