bool areSimilar(std::vector<int> a, std::vector<int> b) {
    
    // -----------------------------------------------------------------------
    //comapre an element from both vectors together (as if they are a pair)
    //
    //if all match, return true
    //
    //if one mismatch - return false since you cant swap anything.
    //
    //if there are 2 mismacthes - try swapping then check if ALL elements are equal
    // if not return false
    // 
    // any more than 2 mismatches, it wont be possible
    // -----------------------------------------------------------------------

    int mismatch = 0;
    int indexOne = 0;
    int indexTwo = 0;
    int temp = 0;
    
    bool retBool = false;
    
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i]!=b[i])
        {
            mismatch++;
            
            if(mismatch == 1)
            {
                indexOne = i;
            }
            else
            {
                indexTwo = i;
            }
        }
    }
    
    if(mismatch == 0)
    {
        return true;
    }
    
    if(mismatch != 2)
    {
        return false;
    }
    else
    {
        temp = a[indexOne];
        //swap indexes where mismatched
        a[indexOne] = a[indexTwo];
        a[indexTwo] = temp;
    }
    
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    
    
    return true;

}
 