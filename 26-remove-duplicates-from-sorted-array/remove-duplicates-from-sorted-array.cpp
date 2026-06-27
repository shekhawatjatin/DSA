class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int officer = 0;
        int res = 1;
        int cm = 1;
        while(cm<nums.size()){
            if(nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            nums[officer+1] = nums[cm];
            officer ++;
            cm ++;
            res ++;
        } 
        return res ;
    }
};