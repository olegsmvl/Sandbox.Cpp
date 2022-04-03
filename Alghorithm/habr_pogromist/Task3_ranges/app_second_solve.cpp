#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string ranges(vector<int> &nums){
    sort(nums.begin(), nums.end());
    string result;
    int start_range = nums[0];
    int end_range = nums[0];
    for (int i = 0; i < nums.size(); i++){
        if ( i == nums.size() - 1 || nums[i+1] != nums[i] + 1 ){
            if (start_range == end_range)
                result += to_string(start_range) + ",";
            else
                result += to_string(start_range) + "-" + to_string(end_range) + ",";

            if (i != nums.size() - 1){
                start_range = nums[i+1];
                end_range = nums[i+1];
            }  
        }
        else{
            end_range++;
        }
    }

    if (result.length() > 0 && result[result.length()-1] == ','){
        result.erase(result.length() - 1, 1);
    }

    return result;
}

int main(){
    vector<int> nums {1,4,5,2,3,9,8,11,0};
    cout << ranges(nums) << endl;
    
    return 0;
}
