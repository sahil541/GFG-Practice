class Solution{
public:
    int mthHalf(int N, int M){
        // code here
        int result;
        if(N == 1) return 1;
        if(M == 1) return N;
        for(int i=0;i<M-1;i++){
            result = N/2;
            N = result;
        }
        return result;
    }
};