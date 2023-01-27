#include <iostream>

using namespace std;

/*
1523. Count Odd Numbers in an Interval Range

Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).

Constraints:

0 <= low <= high <= 10^9
*/

int countOdds(int low, int high) {
        int r = (high - low) / 2;
        if (high%2 == 0 & low%2 == 0) {
            return r;
        }
        return r + 1; 
    }

int main()
{
    cout << countOdds(3, 7) << endl; // 3
    cout << countOdds(8, 10) << endl; // 1
}
