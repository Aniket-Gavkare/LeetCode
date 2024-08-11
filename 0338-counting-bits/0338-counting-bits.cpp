class Solution {
public:

    int countSetBits(int n)
    {
        int cnt = 0;
        while(n)
        {
            int bit = n&1;
            if(bit) cnt++;
            n >>= 1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i=0;i<=n ; i++)
        {
            ans.push_back(countSetBits(i));
        }
        return ans;
    }
};