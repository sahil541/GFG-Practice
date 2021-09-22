void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    
    int n = matrix.size();
    
    //Transpose the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    //Swap the rows
    for(int i=0;i<(n/2);i++){
        for(int j=0;j<n;j++){
            swap(matrix[i][j],matrix[n-1-i][j]);
        }
    }
}