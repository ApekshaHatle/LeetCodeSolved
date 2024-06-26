//Jan 2 Daily Challenge Question

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res={};
        for(int z=0;z<nums.size();z++)
        {
            if(res.empty())
            {
                res.push_back({});  
                res.back().push_back(nums[z]);
            }
            else
            {
                int c=-1;
                for(int i=0 ; i<res.size() ; i++)
                {
                   for(int j=0 ; j<res[i].size() ; j++)
                    {
                        if(res[i][j]!=nums[z])
                        {
                           continue;
                        }
                        else
                        {
                            c++;   
                        }
                    } 
                    if(c==-1)
                    {
                        res[i].push_back(nums[z]);
                        break;
                    }
                }
                if(c!=-1)
                {
                    if (c + 1 < res.size()) {
                        // Check if the next row is empty
                        res[c + 1].push_back(nums[z]);
                    } else {
                        // Otherwise, add a new row and push nums[z] to it
                        res.push_back({nums[z]});
                    }
                }
            }
        }
        
        return res;
    }
};