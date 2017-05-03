#include<iostream>
int main()
{
  dijkstra(?,?,?,?);
}
void dijkstra(int v,int a[][18],int dest[],int pre[])
{
    bool visit[v];
    int u=0;
    for(int i=0;i<v;i++){
        dest[i]=a[0][i];
        if(a[0][i]!=9999)
            pre[i]=0;
        else
            pre[i]=-1;
    }
    visit[0]=true;
    for(int k=0;k<v;k++){
        int temp=9999;
        for(int i=0;i<v;i++)
            if(!visit[i]&&dest[i]<temp){
                u=i;
                temp=dest[i];
            }
        for(int j=0;j<v;j++){
            if(dest[j]>dest[u]+a[u][j]){
                dest[j]=dest[u]+a[u][j];
                pre[j]=u;
            }
            visit[u]=true;
        }
    }
}