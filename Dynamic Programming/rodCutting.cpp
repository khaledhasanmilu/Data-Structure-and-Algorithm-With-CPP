#include<iostream>
using namespace std;
int dp[1000][1000];

int rodCutting(int price[],int n,int length){

if(dp[n][length]!=-1){
    return dp[n][length];
}

if(n<=length){

    int include = price[n-1] + rodCutting(price,n,length-n);
    int exclude = rodCutting(price,n-1,length);
    return dp[n][length]= max(include,exclude);

}
else{
    return dp[n][length]= rodCutting(price,n-1,length);
}

}

int rodCuttingDp(int price[],int n, int length ){


for(int i=0;i<=n;i++){
    for(int j=0;j<=length;j++){
        if(i==0||j==0){
        tab[i][j]=0;
        }
        else{

            if(i<=j){
                int included = profit[i-1]+ tab[i][j-i];
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

int price[]= {1,5,8,9,10,17,17,20};
int n = sizeof(price)/sizeof(price[0]);
int length=n;

for(int i=0;i<=n;i++){
    for(int j=0;j<=length;j++){
        if(i==0||j==0){
            dp[i][j]=0;
        }
        else{
            dp[i][j]=-1;
        }
    }
}

int res = rodCutting(price,n,length);
cout<<res;


}

