std::vector<int> sortByHeight(std::vector<int> a) {
    
    vector<int> temp;

    // create iterator at begin of passed vector
    auto iter = a.begin();
    
    // gather all non trees into temp vec
    while(iter != a.end())
    {
        if(*iter != -1)
        {
            temp.push_back(*iter);
        }
        
        iter++;
    }
    
    // sort non tree numbers (heights)
    std::sort (temp.begin(), temp.end());  
    
    // new iterator for temp vec (heights)
    auto it = temp.begin();
    
    // iterate through original vector and replace original heights with sorted heights
    for(int i = 0; i < a.size();i++)
    {
        if(a[i] > -1)
        {
            a[i] = *it;
            it++;
        }
    }
    
    // return modified vector 
    return a;
    
}
