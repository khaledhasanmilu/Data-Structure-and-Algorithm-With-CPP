#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct item{
    double w,v,unit_value;
    item(double w,double v):w(w),v(v),unit_value(v/w){}
    void display(){
        cout<<"w:"<<w<<" v:"<<v<<" unit value:"<<unit_value<<endl;
    }
};

void FillKnapsack(vector<item> items,double W){
    //sort the items based on unit value in descending order
    sort(items.begin(),items.end(),[](item i1,item i2){
         return i1.unit_value>i2.unit_value;
         });
    for(item i:items) i.display();
    cout<<"\nselected items:"<<endl;

    double profit=0;
    int n=items.size();
    int i=0;
    while(W>0 && i<n){
        if(items[i].w <= W){
            items[i].display();
            profit+=items[i].v;
            W=W-items[i].w;
        }else{
            double x=W;
            double p=x*items[i].unit_value;
            cout<<"w:"<<x<<" v:"<<p<<endl;
            profit+=p;
            W=0;
        }
        i++;
    }
    cout<<"Total profit:"<<profit<<endl;

}
int main(){
    vector<item> items={
        item(2,5),item(3,7),item(1,4),item(2,6)
    };
    int knapsackCapacity=4;
    FillKnapsack(items,knapsackCapacity);
}