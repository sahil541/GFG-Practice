class Solution{
public:
    int isBitSet(int N){
        // code here 
        if(N == 0) return 0;
        while(N != 0){
            int rem = N%2;
            if(rem  == 0) return 0;
            N /= 2;
        }
        return 1;
    }
};