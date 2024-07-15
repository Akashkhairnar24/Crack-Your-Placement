class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0,j=0;
        do{
            j = nums[j];
            j = nums[j];
            i = nums[i];
        }while(i!=j);
        i = 0;
        while(i!=j){
            i = nums[i];
            j = nums[j];
        }
        cout<<i<<" "<<j<<endl;
        return i;
    }
};