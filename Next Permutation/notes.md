## Next Permutation
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

1. For example, the next permutation of arr = [1,2,3] is [1,3,2].
2. Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
3. While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.

Given an array of integers nums, find the next permutation of nums.
The replacement must be in place and use only constant extra memory.


### Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]

### Example 2:
Input: nums = [3,2,1]
Output: [1,2,3]

### Example 3:
Input: nums = [1,1,5]
Output: [1,5,1]
 

### Constraints:
1 <= nums.length <= 100
0 <= nums[i] <= 100


## Solution

1. find the intution 
2. i/p =  1 3 6 5 | o/p = 1 5 3 6

                      6
break point(6,3) ->      5 
                     3
                 1

3. after finding the break point, find the number smaller than 3/kth element
4. swap with that element
5. reverse the elements from k+1 to end