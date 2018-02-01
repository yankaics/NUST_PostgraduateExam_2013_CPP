#include<iostream>

using namespace std;

int childSum(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
}

int main(){
	bool visited[3001];
	for(int i=1;i<=3000;i++){
		if(!visited[i]){
			int brother=childSum(i);
			//��ȡi����֮��brother
			//��brother���㣺������i����1-3000֮�䡢δ���ʡ�����֮�͵���i
			//��i��brotherΪһ�������� 
			if(brother!=i&&brother>=1&&brother<=3000&&!visited[brother]&&childSum(brother)==i){
				cout<<i<<"-"<<brother<<endl;
				visited[brother]=true;
			}
			visited[i]=true; 
		}
	}
	return 0;
}
