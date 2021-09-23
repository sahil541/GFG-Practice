#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	
	while(t--)
	{
	    unsigned long long int N,D;cin>>N>>D;
	    long long int arr[N];
	    vector<long long int> result;
	    for(long long int i=0;i<N;i++){
	        cin>>arr[i];
	        if(i >= D){
	            result.push_back(arr[i]);
	        }
	    }
	    for(long long int i=0;i<D;i++){
	        result.push_back(arr[i]);
	    }
	    for(long long int i=0;i<N;i++){
	        cout<<result[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}