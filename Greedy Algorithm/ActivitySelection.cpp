#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Activity{
    int start_time,finish_time;
    Activity(int s,int f):start_time(s),finish_time(f){}
    void display(){
        cout<<"start time:"<<start_time<<" finish time:"<<finish_time<<endl;
    }
};

vector<Activity> ActivitySelection(vector<Activity> activities){
    //sort the activities based on earliest finish time
    sort(activities.begin(),activities.end(),
         [](struct Activity a1,struct Activity a2){
            return a1.finish_time<a2.finish_time;
         });
         //print to check if sort works properly
    for(Activity a:activities) a.display();
    cout<<endl;
    vector<Activity> activityList;
    //choose the 1st activity
    activityList.push_back(activities[0]);
    int l=0;//track the last chosen activity

    for(int m=1;m<activities.size();m++){
        if(activities[m].start_time >= activities[l].finish_time+1){
            activityList.push_back(activities[m]);
            l=m;
        }
    }
    return activityList;
}

int main(){
    vector<Activity> activities={
        Activity(11,13),Activity(9,12),Activity(8,10)
    };
    vector<Activity> selectedActivity=ActivitySelection(activities);
    int m=selectedActivity.size();
    cout<<"maximum number of activities:"<<m<<endl;
    cout<<"Selected activities:"<<endl;
    for(Activity a:selectedActivity) a.display();
}