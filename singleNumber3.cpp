class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> v;
        unsigned long int x=0;
        unsigned long int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            x^=nums[i];
        }
        unsigned long int diff=x&(-1*x);
        for(auto z : nums)
        {
            if((z&diff)!=0)
               temp^=z;
        }
        v.push_back(temp);
        v.push_back(x^temp);
        return v;
    }
};