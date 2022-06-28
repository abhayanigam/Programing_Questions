class Solution{
    public:
        bool check(vector<int> &nums){
            int count = 0;
            int size = nums.size();
            for (int i = 1; i < size; i++)
            {
                if (nums[i-1] > nums[i])
                {
                    count ++;
                }
            }

            if (nums[size-1] > nums[0])
            {
                count ++;
            }

            return count<=1;
        }
};