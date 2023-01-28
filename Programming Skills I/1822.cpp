#include <iostream>
#include <vector>

using namespace std;

/*
1822. Sign of the Product of an Array

There is a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.

You are given an integer array nums. Let product be the product of all values in the array nums.
Return signFunc(product).

Constraints:

1 <= nums.length <= 1000
-100 <= nums[i] <= 100
*/

int arraySign(vector<int>& nums) {
        int negatives = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                return 0;
            }
            if (nums[i] < 0) {
                negatives ++;
            }
        }
        if (negatives % 2 == 1) {
            return -1;
        }
        return 1;
    }

int main()
{
    vector<int> v1 = {-1, -2, -3, -4, 3, 2, 1};
    cout << arraySign(v1) << endl; // 1
    vector<int> v2 = {1, 5, 0, 2, -3};
    cout << arraySign(v2) << endl; // 0
    vector<int> v3 = {-1, 1, -1, 1, -1};
    cout << arraySign(v3) << endl; // -1
}