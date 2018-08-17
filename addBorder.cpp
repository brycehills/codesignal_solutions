std::vector<std::string> addBorder(std::vector<std::string> picture) {
    
    // length of vector elements
    int length = 0;
    
    // border character
    string star = "*";
    
    // track index
    int count = 0;
    

    // find length for dynamic border creation
    for(auto i : picture) 
    {
        // obtain length
        length = i.length();
        
        // add border to each element
        picture[count].insert(0,star);
        picture[count].append(star);
            
        count++;
    } 
    
    // string variable to become border
    string str;
    
    // dynamic border creation
    for(int i = 0; i < length+2; i++)
    {
        str.push_back('*');
    }
    
    // push string to end of vector (end border)
    picture.push_back(str);
    
    // intialize iterator at front of vector 
    auto it = picture.begin();
    //insert string at front of vector (front border)
    it = picture.insert(it, str);
    
    return picture;
}

