class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      //start the loop from the back of the vector
       for(int i=(int)digits.size()-1; i>=0; --i) {
          //if the digit is less than 9, then increment it and return the vector
           if(digits[i]<9) {
               digits[i]++;
               return digits;
           }
           //otherwise, assign zero to it because its the same thing as getting the last digit of 10
           digits[i]=0;
        }
        //if all the elements in the original vector are zero, then
        //create a new vector with the size of the original plus one
        //assign 1 to the first element
        //explanation: this is like adding 1 in front of the new vector
        vector<int> ans((int)digits.size()+1, 0);
        ans[0]=1;
        return ans;
    }
};
