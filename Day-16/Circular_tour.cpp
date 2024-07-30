class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
       for(int i = 0; i < n; i++){
            int totalFuel = 0;
            int stopCount = 0, j = i;
            while(stopCount < n){
                totalFuel += p[j % n].petrol - p[j % n].distance;
                if(totalFuel < 0) break; 
                stopCount++;
                j++;
            }
            if(stopCount == n && totalFuel >= 0) return i;
        }
        return -1;
    }
};              