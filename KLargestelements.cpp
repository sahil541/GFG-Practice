class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int>result;
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        sort(arr, arr + n, greater<int>());
        for(int i=0;i<k;i++){
            result.push_back(arr[i]);
        }
        return result;
    }
};