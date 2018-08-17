int arrayChange(std::vector<int> inputArray) 
{
    
    double count = 0;        // index of vector
    double num = 0;          // amount of moves
    
    // number of changes
    double changeCount = 0;
            
    //iterate array and accumulate moves
    for(auto it = inputArray.begin(); it != inputArray.end()-1; it++)
    {
        // if next number is smaller than current number
        if(inputArray[count+1] <= inputArray[count])
        {       
            //difference
            num = inputArray[count] - inputArray[count+1];
            // add one to exceed prev number
            num += 1;
            // add change to vector @ index
            inputArray[count+1] += num;
            
            // accumluate changes
            changeCount += num;
                        
        }
            // inc count to iterate
            count++;
    }
    
    // return moves num
    return changeCount;
    
}
