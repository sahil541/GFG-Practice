class Solution
{
    public:
    void funrec(vector<string>& result,string s, int count,int i,int &n){
        //Base case
        if(i == 2*n && count == 0)
        {
            result.push_back(s);
            return;
        }
        if(i==2*n || count<0) return;
        if(count<n) funrec(result, s+"(", count+1, i+1, n);
        if(count>0) funrec(result, s+")", count-1, i+1, n);
        return;
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>result;
        string s = "";
        int count = 0,i=0;
        funrec(result,s,count,i,n);
        return result;
    }
};

// N = 2
//       Possible strings:  ( ( ) )  ( ) ( )
//            count      :  1 2 1 0  1 0 1 0