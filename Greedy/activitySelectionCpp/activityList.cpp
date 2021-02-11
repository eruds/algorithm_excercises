#include "activityList.hpp"

ActivityList::ActivityList(){ 
    this->Activities = new Activity[this->defaultSize];
    this->Neff = 0;
    this->maxSize = maxSize;
}

ActivityList::ActivityList(int size){
    this->Activities = new Activity[size];
    this->Neff = 0;
    this->maxSize = size;
}

ActivityList::ActivityList( const ActivityList& AL ){ 
    if( maxSize < AL.Neff ){
        this->Activities = new Activity[AL.Neff];
    } else { 
        this->Activities = new Activity[maxSize];
    }
    this->Neff = AL.Neff;
    for (int i = 0; i < AL.Neff; i++)
    {
        this->Activities[i] = AL.Activities[i];
    }
}


void ActivityList::operator=(const ActivityList& AL){ 
    if( maxSize < AL.Neff ){
        this->Activities = new Activity[AL.Neff];
    } else { 
        this->Activities = new Activity[maxSize];
    }
    this->Neff = AL.Neff;
    for (int i = 0; i < AL.Neff; i++)
    {
        this->Activities[i] = AL.Activities[i];
    }
    
}

void ActivityList::add( Activity A ){
    Activities[Neff+1] = A;
    Neff += 1;
    if(Neff == maxSize) {
        Activity * temp = new Activity[maxSize*2];
        for (int i = 0; i < Neff; i++)
        {
            temp[i] = Activities[i];
        }
        maxSize *= 2;
        Activities = temp;
    }
}













