# Activity Structure 
# An Activity is : (start time, finish time)
# An arrat of activity is [A1, A2, ..., An]

class activity : 
    def __init__(self, start, finish) : 
        self.start = start
        self.finish = finish
    def __str__(self) :
        return "{" + " start : " + str(self.start) + ", " + "finish : " + str(self.finish)  + " }"
class activityList : 
    def __init__(self, activities = []) : 
        self.activities = activities
        self.length = len(activities)
    def __getitem__(self, idx) : 
        return self.activities[idx]
    def __str__(self) :
        statement = "["
        length = len(self.activities)
        i = 0
        for activity in self.activities :
            statement += str(activity)
            if(i != length -1 ) : 
                statement += ","
            i+= 1
        statement += "]"
        return statement
    def __sort(self) : 
        def swap(arr, i, j) : 
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
            return arr 
        activities = self.activities
        lenght = len(activities)
        for i in range(lenght):
            for j in range(lenght) : 
                if activities[j].start > activities[i].start : 
                    activities = swap(activities, i, j)
        self.activities = activities
                


    def add(self, activity) :
        self.activities.append(activity)

    def arrange(self) : 
        activities = self.__sort()
    
A1 = activity(10, 12)
AList = activityList([A1])
AList.add(activity(0,24))
AList.add(activity(0,2))
AList.add(activity(6,23))
AList.arrange()
print(AList)
