class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        long int result =K;
        if(N == 1 || N==2) return K;
        for(int i=2;i<N;i+=2){
            result += K;
        }
        return result;
    }
};