int adjacentElementsProduct(std::vector<int> inputArray) 
{
    using namespace std;
    int product;
    int biggestProd;
   vector<int> productVec;
    
    for(int i = 0; i < inputArray.size()-1; i++)
    {
        // product of array mult
        product = inputArray[i] * inputArray[i+1];
            
        productVec.push_back(product);
        


    }
    
        std::sort (productVec.begin(), productVec.end()); 
        biggestProd = productVec.back();
    
    return biggestProd;
}
