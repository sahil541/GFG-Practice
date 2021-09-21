class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string result = "";
	    result.push_back(S[0]);
	    if(S.length() > 1){
	        for(int i=0;i<S.length();i++){
	            if(S[i] == ' ')
	            result.push_back(S[i+1]);
	        }
	    }
	    return result;
	}
};