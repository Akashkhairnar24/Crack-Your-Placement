class Solution
{
    public:
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int start,index;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                start = arr[i];
                index = i+1;
                break;
            }
        }
        if(start!=1)
        return 1;
        int cnt = start+1;
        while(index<n){
            if(arr[index]==arr[index-1]){
                index++;
                continue;
            }
            if(arr[index]!=cnt){
                return cnt;
            }else
            {
                index++;
                cnt++;
            }
        }
        return cnt;
    } 
};