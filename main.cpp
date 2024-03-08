
//  Chapter 7 Activity
// Due March 8
//  Created by Emma Bilhimer on 3/6/24.
/* Description: 1.    NumPaths(1,1,4) .
 -    Check if row=4row=4. It's not, so we move.
 -    Check if col=4col=4. It's not, so we move to condition else.
 -    Recursively call NumPaths(2,1,4) and NumPaths(1,2,4).
 2.    NumPaths(2,1,4):
 -    Check if row=4row=4. It's not, so we move.
 -    Check if col=4col=4. It's not, so we move to condition else.
 -    Recursively call NumPaths(3,1,4) and NumPaths(2,2,4).
 3.    NumPaths(3,1,4)
 -    Check if row=4row=4. It's not, so we move.
 -    Check if col=4col=4. It's not, so we move to condition else.
 -    Recursively call NumPaths(4,1,4) and NumPaths(3,2,4)
 4.    NumPaths(4,1,4):
 -    Check if row=4row=4. Yes, it's equal, we return 11.
 -    The reason this algorithm is inefficient is that it performs calculations over and over. It calculates the number of paths repeated plenty of times for the same positions. What causes an exponential increase in the number of function calls and makes the algorithm slow.
 5.    In terms of efficiency the dynamic programming version of NumPaths is more time-efficient. This is due to memoization, preventing redundant calculations. But on the other side, the original recursive version has more time complexity. In terms of space efficiency, they both have the same versions of space complexity, but the dynamic programming version uses additional space.
*/


int NumPaths(int row, int col, int n) {
    if (row == n)
        return 1;
    else if (col == n)
        return 1; // If we reach the rightmost column, there's only one way to move (down).
    else
        return NumPaths(row + 1, col, n) + NumPaths(row, col + 1, n); // Move down or move right.
}


#include <iostream>

using namespace std;

int NumPaths(int row, int col, int n, int dp[101][101]);

int main() {
    int n = 4; // Grid size
    int dp[101][101]; // Dynamic programming array
    memset(dp, -1, sizeof(dp)); // Initialize dp array with -1

    cout << "Number of paths: " << NumPaths(1, 1, n, dp) << endl;

    return 0;
}

#include <iostream>

using namespace std;

int NumPaths(int row, int col, int n, int dp[101][101]);

int main2() {
    int n = 4; // Grid size
    int dp[101][101]; // Dynamic programming array
    memset(dp, -1, sizeof(dp)); // Initialize dp array with -1

    cout << "Number of paths: " << NumPaths(1, 1, n, dp) << endl;

    return 0;
}
