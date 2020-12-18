# Day-5-MatrixBasedQuestions
## Matrix Multiplication
  ### Method 1:
  Condition of Matrix Multiplication -> **Col^n of 1 Matrix = Row of 2 Matrix**</br>
  * Run a loop from 0 to R1.
  * Run inner loop from 0 to C2.
  * assign product[i][j]=0;
  * Run another inner loop from 0 to R2/C1.
  * Assign product[i][j] += A[i][k] * B[k][j];
  
  Time Complexity = O(m X n X q)
  </br>
  [Solution](https://github.com/akshatprogrammer/Day-5-MatrixBasedQuestions/blob/main/MatrixMultiplication.cpp)
  
  ### Method 2:
  **Strasson's Matrix Multiplication**</br>
  Solved using Divide and Conquer Approach.</br>
  * Divide matrix into sub matrix & then perform operation
  * There are 7 pre-defined formulas to calculate the final values in resultant matrix.
  * Time Complexity = O(n^2.8)
  
  **Drawbacks**</br>
  * Typical Application
  * Use of recursive functions, i.e use of extra space.
  * Constants used are very large.
  
## Print Spiral form of Matrix
## ZigZag Printing
  ### Of Diagonals
  ### Of Rows
# Connect With Me
LinkedIn : https://www.linkedin.com/in/akshat-jain-a24baa18a/<br/>
Email : akshat.kodia@gmail.com<br/>
Twitter : www.twitter.com/akki_aj89<br/>

# Personal
Name : Akshat Jain<br/>
University : Graphic Era University, Dehradun(UK)

If any problem with this program reach me at Telegram<br/>
Here is the link -> https://t.me/akki_aj89

# Gratitude
Thank You, if you like it please leave a Star.
