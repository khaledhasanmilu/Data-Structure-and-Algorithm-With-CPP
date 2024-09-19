#include<iostream>
using namespace std;
int memo[100][100];
int dp[100][100];
int coinChange(int coins[],int sum, int n){

if(sum==0){
    return 0;
}
if(n==0){return INT_MAX-1;}
if( coins[n-1]<=sum ){
    return min(1+coinChange(coins,sum-coins[n-1],n) , coinChange(coins,sum,n-1));
}

else{
    return coinChange(coins,sum,n-1);
}


}


int coinChangeDp(int coins[],int sum, int n){

for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){

        if(j==0){
            dp[i][j]=0;
        }
        else if(i==0)
            {dp[i][j]=INT_MAX-1;}

        else{

        if(coins[i-1]<=j){
            dp[i][j]= min(1+dp[i][j-coins[i-1]] , dp[i-1][j]);
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

int coins[]={4, 6, 5};
int sum =5;
int n=3;
for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){\
        memo[i][j]=-1;
    }
}

int res = coinChangeDp(coins, sum,n);
cout<<res<<endl;
}

