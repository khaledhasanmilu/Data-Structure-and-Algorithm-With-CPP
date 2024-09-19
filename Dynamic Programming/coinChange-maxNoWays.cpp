#include<iostream>
using namespace std;
int memo[100][100];
int dp[100][100];
int coinChange(int coins[],int sum, int n){

if(sum==0){
    return memo[n][sum]=1;
}
if(n==0){
    return 0;
}
if(memo[n][sum]!=-1){
    return memo[n][sum];
}

if(coins[n-1]<=sum)
{return memo[n][sum]=coinChange(coins,sum-coins[n-1],n) + coinChange(coins,sum,n-1);}

else{
    return memo[n][sum] = coinChange(coins, sum, n - 1);
}
}

int coinChangeDp(int coins[],int sum, int n){

for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
        if(i==0){
            dp[i][j]=0;
        }
        else if(j==0)
            {dp[i][j]=1;}
        else{
        if(coins[i-1]<=j){
            dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
        }
        else{

            dp[i][j]=dp[i-1][j];
        }
        }

    }
}

return dp[n][sum];


}

int main(){

int coins[]={5,1};
int sum =5;
int n=2;
for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){\
        memo[i][j]=-1;
    }
}

int res = coinChangeDp(coins, sum,n);
cout<<res<<endl;
}
