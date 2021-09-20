vector<string> generate(int N)
{
	// Your code here
	vector<string>result;
	for(int i=1;i<=N;i++){
	    string s = bitset<64> (i).to_string();
        const auto loc1 = s.find('1');
     
        if(loc1 != string::npos)
            result.push_back(s.substr(loc1));
	}
	return result;
}