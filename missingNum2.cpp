#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int maxWater(vector<int>& nums){
    int maxArea = 0;
    int i, j, temp;
    i = 0;
    j = nums.size() - 1;
    while (i < j){
        if(nums[i] > nums[j]) {
            temp = nums[j] * (j - i);
        } else {
            temp = nums[i] * (j - i);
        }

        if(maxArea < temp) maxArea = temp;

        // maxWater = max(maxWater, min(nums[i], nums[j]) * (j - i));
        nums[i] < nums[j] ? i++ : j--;
    }
    return maxArea;
}

int main(){
    vector<int> nums = {1, 2, 4, 5, 22, 89, 9, 12};
    cout<< "the maximum water than can be stored is: "<< maxWater(nums);

}