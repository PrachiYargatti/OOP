class Solution {
public:
    void moveZeroesToEnd(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                nums[j]=nums[i];
                j++;
            }
            else{
                count++;
            }
        }

        for(int i=n-count;i<n;i++){
            nums[i]=0;
        }
    }
};
