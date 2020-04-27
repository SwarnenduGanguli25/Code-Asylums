#include <bits/stdc++.h>
 
using namespace std;
 
// Complete the powerSum function below.
int dp[1001][1001],n;
int rec(int i,int j){
    if(j==0)return 1;
    if(i==0||j<0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int num = 1;
    for(int i1=1;i1<=n;i1++){
        num = num*i;
        if(num>1000)
            break;
    }
    if(num>1000)
        return dp[i][j] = rec(i-1,j);
    return dp[i][j] = rec(i-1,j-num) + rec(i-1,j);
}
int powerSum(int X, int N) {
    n = N;
    memset(dp,-1,sizeof(dp));
    return rec(1000,X);
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
 
    int X;
    cin >> X;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
    int result = powerSum(X, N);
 
    fout << result << "\n";
 
    fout.close();
 
    return 0;
}