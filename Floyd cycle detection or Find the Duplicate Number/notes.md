## Find the Duplicate Number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

Example 2:
Input: nums = [3,1,3,4,2]
Output: 3


## Solution

1. take slow and fast pointer
2. slow move 1 and fast move 2 times
3. until both now match
4. after match
5. fast initized 0 and only move 1 until slow and fast pointer not met
6. return slow