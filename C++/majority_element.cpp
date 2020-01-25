#include <map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int times = nums.size() / 2;        
        map<int, int> mapElement;
        int i = 0;
        
        for(i; i < nums.size(); i++) {
            if(mapElement.find(nums[i]) != mapElement.end()) {
                mapElement[nums[i]] += 1;
                if(mapElement[nums[i]] > times) break;
            }
            else {
                mapElement[nums[i]] = 1;
                if(mapElement[nums[i]] > times) break;
            }
        }
        return nums[i];
    }
};
