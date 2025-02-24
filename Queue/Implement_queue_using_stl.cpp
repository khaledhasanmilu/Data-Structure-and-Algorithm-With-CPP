#include<bits/stdc++.h>
using namespace std;


class myQue
{
    public:
        list<int> l;
    void push(int val){
            l.push_back(val);
        }

    void pop(){
       l.pop_front();
    }
    int front(){            //O(1)
        return l.front();
    }
    int back(){             //O(1)
        return l.back();
    }
    bool empty(){
        return l.empty();
    }
    int getsize(){
        return l.size();
    }
};

int main()
{
   myQue q;
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
    int val;
    cin>>val;
    q.push(val);
   }
   while (!q.empty())
   {
    cout<<q.front();
    q.pop();
    if (!q.empty())
    {
        cout<<" ";
    }
    
   }
   return 0;
}