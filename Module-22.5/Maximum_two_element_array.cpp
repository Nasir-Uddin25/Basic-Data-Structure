#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0;

        // Find the two largest elements
        for (int num : nums) {
            if (num > max1) {
                max2 = max1; // Update second largest
                max1 = num;  // Update largest
            } else if (num > max2) {
                max2 = num;  // Update second largest
            }
        }

        // Return the product of (max1 - 1) and (max2 - 1)
        return (max1 - 1) * (max2 - 1);
    }
};

// Example usage
int main() {
    vector<int> nums = {3, 4, 5, 2};
    Solution solution;
    cout << "Maximum Product: " << solution.maxProduct(nums) << endl;
    return 0;
}
