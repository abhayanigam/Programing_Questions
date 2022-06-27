class Solution{
    public:
        void moveZeroes(vector<int> &nums){
            int nonZero = 0;

            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] != 0)
                {
                    swap(nums[j],nums[nonZero]);
                    nonZero++;
                }
            }
        }
};

/*
    if (nums == 0) = ignore
    if (nums != 0) = swap, nonZero++

    step 1 : 1  0  0  3  12  0
    step 2 : 1  3  0  0  12  0
    step 3 : 1  3  12 0  0   0
*/