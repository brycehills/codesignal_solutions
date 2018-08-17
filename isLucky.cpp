bool isLucky(int n) {
    
    //stack data stucture for digits
    std::stack<int> digitStack;
    
    bool returnBool;
    int sumOne = 0;
    int sumTwo = 0;
    
    //convert to string to find length
    int digits = to_string(n).length();
    int half = digits/2;
    
    while (n > 0)
    {
        int digit = n%10;
        n /= 10;
        digitStack.push(digit);
    }
    
    for(int i = 0; i < half; i++)
    {
        sumOne += digitStack.top();
        digitStack.pop();
    }
    
    cout << "sum 1: " << sumOne << endl;
    
    for(int i = 0; i< half;i++)
    {
        sumTwo += digitStack.top();
        digitStack.pop();
    }
    
    cout << "sum two: " << sumTwo << endl;
    
    if(sumOne == sumTwo)
    {
        returnBool = true;
    }
    else{
        returnBool = false;
    }
        
return returnBool;
}
