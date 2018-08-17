int makeArrayConsecutive2(std::vector<int> statues) {
     
     int count = 0;
     int difference;
     std::sort (statues.begin(), statues.end());
     
     for(int i = 0; i<statues.size()-1; i++)
     { 
          difference = statues[i+1] - statues[i];
         
          if(difference != 1)
          {
               statues.insert(statues.begin()+(i+1), statues[i] + 1);
              count++;
          }
          
     }
    
      for(int index = 0; index<statues.size()-1; index++)
     {
           cout << statues[index] << ", ";
      }
     
    
     return count;
    
}
