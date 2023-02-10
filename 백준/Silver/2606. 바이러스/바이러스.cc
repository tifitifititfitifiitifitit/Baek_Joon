#include<iostream>
using namespace std;

int n,m,map[101][101],ch[101],cnt=0;

void DFS(int v) {
	if(v>n)return;
	else {
		for(int i=1;i<=n;i++) {
			if(map[v][i]==1 && ch[i]==0) {
				ch[i]=1;
				cnt++;
				DFS(i);
			}
		}
		
	}
}



int main() {
	int i,a,b;
	cin>>n>>m;
	for(i=1;i<=m;i++) {
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
	}
	ch[1]=1;
	DFS(1);
	
	cout<<cnt;
	
	return 0;
}