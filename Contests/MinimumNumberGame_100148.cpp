class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr = {};
        while(!nums.empty())
        {
            int min=INT_MAX;
            for (auto k : nums) 
            {
                if(k<min)
                    min=k;
            }
            int A=min;
            int valueToBeDeleted = min;
            auto it = find(nums.begin(), nums.end(),valueToBeDeleted);

            if (it != nums.end()) 
                nums.erase(it);
            
            min=INT_MAX;
            for (auto k : nums) 
            {
                if(k<min)
                    min=k;
            }
            int B=min;
            valueToBeDeleted = min;
            it = find(nums.begin(), nums.end(),valueToBeDeleted);

            if (it != nums.end()) 
                nums.erase(it);
            
            arr.push_back(B);
            arr.push_back(A);
        }
        
        return arr;
    }
};

//weekly contest 377
//learn DP for next contest useful !!