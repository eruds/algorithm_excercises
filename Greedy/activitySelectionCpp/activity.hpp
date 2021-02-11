// Activity Structure 
// An Activity is : (start time, finish time)

#ifndef ACTIVITY_HPP

class Activity { 
    int start; // start time
    int finish; // finish time
    int range; // time range
    public : 
        // Constructors  
        Activity();
        Activity(int start, int finish);
        Activity(const Activity& A);
        void operator=(const Activity& A); 
        ~Activity(){};
        
        // Methods
        int values(); 


};
#endif 



