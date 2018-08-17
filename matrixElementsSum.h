int matrixElementsSum(std::vector<std::vector<int>> matrix) {

    int size = 0;
    
    // grabbing size of vector
    for (vector<vector<int> >::const_iterator it = matrix.begin(); it != matrix.end(); ++it)
    size += it->size();
    
    //cout << "size: " << matrix[0].size();
    
    // initalize sum 
    int sum = 0;
    
    // iterate through respective matrix and accumulate appropriate numbers
    for(int row = 0; row < matrix.size(); ++row)
    {
        for(int col = 0; col < matrix[0].size(); ++col)
        {
            cout << "current value of row: " << row << endl << endl;
            
            if(row != matrix.size() - 1 && matrix[row][col] == 0)
            {
               
                cout << "editing row: " << row+1 << " col: " << col << endl;
                
                cout << "previous value: " << matrix[row+1][col] << endl;
                
                // edit value in cell under 0
                matrix[row+1][col] = 0;
                
                cout << "new value  : " << matrix[row+1][col] << endl << endl;
            }
            
            sum += matrix[row][col];
            //cout << matrix[row][col] << " + ";
            
        }
    }
        
    // cout << sum;
    return sum;

}







//             if(row == 0)
//             {
//                 sum += matrix[row][col];
//                 cout << matrix[row][col] << " + ";
//             }
            
//             if(row > 0 && matrix[row-1][col] != 0)
//             {
//                 sum += matrix[row][col];
//                 cout << matrix[row][col] << " + ";
//             }