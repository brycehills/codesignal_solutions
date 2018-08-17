bool checkPalindrome(std::string inputString) 
{
    bool returnBool = 1;
    
    for(int i = 1; i < inputString.length(); i++)
    {
        
        if(inputString[i-1] != inputString[inputString.length() - i])
        {
            
            cout << "here: " << inputString[i + inputString.length() - 1];
            returnBool = 0;
        }
    }
        
    return returnBool;
    
}
