int centuryFromYear(int year) 
{
    int quotient;
    
    int result = 0;
    int comp   = 0;
    
    quotient = year/100;
    comp     = 100 * quotient;
    
    // check for yr less than 100
    if(quotient < 1)
    {
        result = 1;
    }
    
    // find if year round off evely or not
    if(comp < year)
    {
        result = quotient + 1;
    }
    else
    {
        result = quotient;
    }
    

    // return
    return result;
}
