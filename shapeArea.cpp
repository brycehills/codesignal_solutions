int shapeArea(int n) {

    int x = 1;
        
    for(int i = 1; i <= n; i++)
    {
        x = x + ((i * 4) - 4);
    }
    
    return x;
    
}
