#include "activity.hpp"

Activity::Activity( int start, int finish ){
    if( finish-start > 0 ){
        this->start = start;
        this->finish = finish;
        this->range = finish - start;
    } else { 
        throw "Finish time can't be less than start time";
    }
}

Activity::Activity(const Activity& A ){
    this->start = A.start;
    this->finish = A.finish;
    this->range = A.range;
}

void Activity::operator=(const Activity& A){ 
    this->start = A.start;
    this->finish = A.finish;
    this->range = A.range;
}