class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        int n= (nums.size()/2);

        for(auto &p: freq)
        {
            if(p.second>n)
            {
                return p.first;
            }
        }
        return 0;
    }

    // Here freq[nums[i]] will contain the value of the array elemtn and ++ will make increment if the same value occurs again;
};