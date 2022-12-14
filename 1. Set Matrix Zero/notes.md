# Set Matrix Zero
### Problem Statement: Given a matrix if an element in the matrix is 0 then you  will have to set its entire column and row to 0 and then return the matrix.


1. Traverse and check the cell and the cell is zero then update the array indicators
2. cell[0][0] collide with both row-col array so make it col1 = 1 initized
3. update if row have zero in that
4. Traverse from backwards and update the cell if indicators array is zero
5. also update the col1 if col1 == 0
