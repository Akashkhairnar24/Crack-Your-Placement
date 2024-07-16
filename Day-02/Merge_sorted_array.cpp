class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        // i pointing the last place of arr1
        // j pointing the last element of arr2
        // k pointing the non zero position from back
        int i = arr1.size()-1;
        int j = arr2.size()-1;
        int k = m-1;
        while(j>=0){
            if(arr1[i]==0){
                if(i==0){
                    arr1[i] = arr2[j];
                    break;
                }
                // catch -> in some cases k will be 0 jaha sare arr1 ke shift ho jayenge aur k se i tak sirf 0 bachega tab sare arr2 ke arr1 me usi order me shift kar do
                if(k<0 || arr1[k]<=arr2[j]){
                    arr1[i] = arr2[j];
                    j--;
                    i--;
                }
                else{
                    // now that k element is bigger than arr2 elemet so we need to place that k element on 0 place
                    arr1[i] = arr1[k];
                    arr1[k] = 0;
                    i--;
                    k--;
                }
            }else{
                break;
            }
        }
    
    }
};