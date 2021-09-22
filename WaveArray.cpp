class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        int last = arr[n-1];
        for(int i=0;i<n;i +=2){
            
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            if(n%2 != 0){
                arr[n-1] = last;
            }
        }
    }
};