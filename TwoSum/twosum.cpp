#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
    public:
    /// Function to find two indices such that the numbers at those indices add up to the target
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            vector<int> result;
            for (int i = 0; i < nums.size(); ++i) 
            {
                
                for (int j = i + 1; j < nums.size(); ++j) 
                {
                    
                    if (nums[i] + nums[j] == target) 
                    {
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
            // If no solution is found, return an empty vector
            return {};
        }
};

int main() {
    Solution solution;
    
    // Test case
    vector<int> nums = {-3,4,3,90};
    int target = 0;
    vector<int> result = solution.twoSum(nums, target);
    cout << "Test case: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
