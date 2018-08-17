std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    
    int largest = 0;
    
    if(inputArray.size() == 1)
    {
        return inputArray;
    }   
    
        if(inputArray.size() == 0)
    {
        return inputArray;
    }   
    
   int firstLargest = inputArray[0].length();
    
    
    for(int i = 0; i < inputArray.size(); i++)
    {
        
        if(inputArray[i].length() > inputArray[i-1].length())
        {
            largest = inputArray[i].length();
        }
        
    }    
    
    if(largest < firstLargest)
    {
        largest = firstLargest;
    }
    
    cout << "largest: " << largest << endl;

    
    for(int i = 0; i < inputArray.size(); i++)
    {
        
        if(inputArray[i].length() != largest)
        {
            cout << "removing: " << inputArray[i] << endl;
            inputArray.erase(inputArray.begin()+i);
            i--;
        }
        
    }
    
    
    
    return inputArray;

}
