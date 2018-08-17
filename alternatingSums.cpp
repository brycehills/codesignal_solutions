std::vector<int> alternatingSums(std::vector<int> a) 
{
    
        //variables
        int count = 0;
        int teamOne = 0;
        int teamTwo = 0;
        
        //vector containing each sum
        vector<int> sumVec;
    
    for (auto it = a.begin(); it != a.end(); ++it) 
    { 
        // check alternating indexes
        if(count % 2==0)

        {
            //accumulate sum of team1
            teamOne += *it;
        }
        else
        {
             // accumulate sum of team2   
             teamTwo += *it;
        }

        // index tracker
        count++;

    }
        
        //add sums to new vector for return
        sumVec.push_back(teamOne);
        sumVec.push_back(teamTwo);
    
        return sumVec;

}
