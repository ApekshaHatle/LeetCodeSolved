<<<<<<< HEAD
//Jan 3 Daily Challenge Question

=======
//Jan 3 Daily Question
>>>>>>> 11895faf3af8f69f5abb4316b9f98c010961ea62
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        vector<int> edge={};
        int rows = bank.size();
        int cols = (rows > 0 && !bank[0].empty()) ? bank[0].length() : 0;
        
        if(rows==1)
            return 0;
        for (int i = 0; i < rows; ++i) 
        {
            int c=0;
            for (int j = 0; j < cols; ++j) 
            {
                if(bank[i][j] =='1')
                    c++;
            }
            
            if(c==0)
            {
                continue;
            }
            else 
                edge.push_back(c);
        }
        
        if(edge.empty())
        {
            edge.push_back(0);
        }
        int total=0;
        for(int i = 0 ; i < edge.size()-1 ;i++ )
        {
            total=total+(edge[i]*edge[i+1]);
        }
        
        return total;
    }
};
