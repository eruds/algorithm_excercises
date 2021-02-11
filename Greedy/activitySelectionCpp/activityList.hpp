// A List of activity is [A1, A2, ..., An]

#include "activity.hpp"
class ActivityList { 
    int Neff; //List Neff 
    int maxSize; // List Max size
    const int defaultSize = 100;
    Activity *Activities; 
    void sort();
    public : 
        ActivityList(); // create a list of activity objects with 30 Activities
        ActivityList(int size); // create a list of activity objects with custom size 
        void operator=(const ActivityList& AL );
        ~ActivityList();
        
        // Methods
        void add( Activity A ); // add a new activity
        void arrange();
};