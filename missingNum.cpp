#include <iostream>
#include <vector>

using namespace std;

int missingNum(vector<int>& nums){
    int missing=0;
    for(int i = 0; i < nums.size(); i++){
        missing ^= nums[i] ^ (i+1);
    }
    missing ^= nums.size() + 1;
    
    return missing;
}

int main(){
    // vector<int> nums = {2, 3, 4, 5};
    vector<int> nums = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    cout<< "The Missing Number is: "<< missingNum(nums);

}