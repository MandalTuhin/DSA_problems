#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> result;
    unordered_map<int, int> match;
    for(int i = 0; i < nums.size(); i++){
        if(match.find(nums[i]) != match.end()){
            result.push_back(match[nums[i]]);
            result.push_back(i);
            return result;
        }
        match[target - nums[i]] = i;
    }
    return result;
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if(!result.empty()){
        cout<< "Indices:"<<endl;
        for(int number : result){
            cout<< number;
        }
        
    } else {
        cout<< "The array doesnt have a solution."
    }
    return 0;
}