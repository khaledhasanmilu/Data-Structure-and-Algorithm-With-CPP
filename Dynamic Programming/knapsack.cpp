#include<iostream>
using namespace std;
int dp[1000][1000];
int tab[1000][1000];
//Recursion and brute force

int knapsackRecursion(int weight[], int profit[],int n, int W){

//base condition
if(n==0 || W==0){
    return 0;
}

//choice diagram

if(weight[n-1]<=W){

    int included = profit[n-1]+ knapsackRecursion(weight,profit,n-1,W-weight[n-1]);
    int excluded =  knapsackRecursion(weight,profit,n-1,W);
    return max(included,excluded);

}
else{
    return  knapsackRecursion(weight,profit,n-1,W);
}

}

//Memorizaion
int knapsackMemorization(int weight[], int profit[],int n, int W ){

if(dp[n][W]!=-1){
    return dp[n][W];
}

if(weight[n-1]<=W){
     int included = profit[n-1]+ knapsackRecursion(weight,profit,n-1,W-weight[n-1]);
     int excluded =  knapsackRecursion(weight,profit,n-1,W);
     return dp[n][W] = max(included,excluded);
}
else{
    return dp[n][W] = knapsackRecursion(weight,profit,n-1,W);
}




}

//tabulation

int knapsackTabulation(int weight[], int profit[],int n, int W ){


for(int i=0;i<=n;i++){
    for(int j=0;j<=W;j++){
        if(i==0||j==0){
        tab[i][j]=0;
        }
        else{

            if(weight[i-1]<=j){
                int included = profit[i-1]+ tab[i-1][j-weight[i-1]];
                int excluded =  tab[i-1][j];
                tab[i][j]=max(included,excluded);

            }
            else{
                tab[i][j] = tab[i-1][j];
            }
        }
    }
}

return tab[n][W];


}


int main(){

//inputs

int weight[] = {2,1,3,2};
int profit[] = {12,10,20,15};
int n = sizeof(weight)/sizeof(weight[0]);
int W = 5;

int maxProfit = knapsackRecursion(weight,profit,n,W);
cout<<maxProfit<<endl;

//memorization
//storage creation

//initialization for base case

for(int i=0;i<=n;i++){
    for(int j=0;j<=W;j++){
        if(i==0||j==0){
        dp[i][j]=0;
        }
        else{
            dp[i][j]=-1;
        }
    }
}
maxProfit = knapsackMemorization(weight,profit,n,W);
cout<<maxProfit<<endl;

maxProfit = knapsackTabulation(weight,profit,n,W);
cout<<maxProfit<<endl;


}
