#include<iostream>
using namespace std;
const int N=1e3+10;
int n,m,q;
int a[N][N],S[N][N]={0};

int main(){
    scanf("%d%d%d",&n,&m,&q);
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)
    {
        scanf("%d",&a[i][j]);
        S[i][j]=S[i-1][j]+S[i][j-1]-S[i-1][j-1]+a[i][j];
    }
    for(int i=0;i<q;i++)
    {
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("%d\n", S[x2][y2] - S[x2][y1 - 1] - S[x1 - 1][y2] + S[x1 - 1][y1 - 1]); 
    }
    return 0;

}