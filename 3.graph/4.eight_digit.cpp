#include<iostream>
#include<unordered_map>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;
const int N=1e5;
unordered_map <string,int> dis;
queue <string>q;
string start;
int bfs(string start){
    string end="12345678x";
    dis[start]=0;q.push(start);
    int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
    while(!q.empty()){
    string t=q.front();
    if(t==end)return dis[end];
    int distance=dis[t];
    q.pop();
    int k=t.find('x');
    int x=k/3,y=k%3;
    for(int i=0;i<4;i++)
    {
        int a=x+dx[i],b=y+dy[i];
        int tk=a*3+b;
        if(a>=0&&a<3&&b>=0&&b<3){
            swap(t[tk],t[k]);
            if(!dis.count(t)){
                dis[t]=distance+1;
                q.push(t);
            }
            swap(t[tk],t[k]);
        }
    }
    }
    return -1;
}
int main()
{
    string end="12345678x";
    for(int i=0;i<9;i++)
    {
        string t;cin>>t;start+=t;
    }
    cout<<bfs(start);
    return 0;
}