class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        sort(arr,arr+n);
        int d=arr[1]-arr[0];
       
        for(int i=1;i<n-1;i++){
            if((arr[i+1]-arr[i])!=d)
            {
                return 0;
                break;
            }
        }
        return 1;
        
    }

};