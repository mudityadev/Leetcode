## Question

Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

### example 1
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

### example 2
Input: numRows = 1
Output: [[1]]

Constraints:

1 <= numRows <= 30


## Solution

1. 2 loops are used
2. make a arr of size of i+1, and assign 1 in all
3. add prev and curr number of v[j]
4. push back that element in main matrix