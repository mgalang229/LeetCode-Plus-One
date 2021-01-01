class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans=digits;
        int n=digits.size(), c=1;
        //add one to the last digit
        //if its greater than nine, then carry the excess to the previous number
        for(int i=n-1; i>=0; --i) {
            c+=digits[i];
            ans[i]=c%10;
            c/=10;
        }
        //if the excess bits reached the initial point then change it to '1' and add zero to the vector
        if(c) {
            ans[0]=1;
            ans.push_back(0);
        }
        return ans;
    }
};
