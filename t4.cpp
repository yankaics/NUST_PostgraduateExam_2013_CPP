#include<iostream>

using namespace std;

//�ж�x�����Ƿ���ԡ��ӵ�һ�����ٷֳ�5�ݡ� 
bool isLegal(int x){
	bool isok=true;
	if(x<=5) isok=false;
	if((x-1)%5!=0) isok=false;
	return isok;
}

//�ж�x�����Ƿ���Թ�5�ηַ� 
bool isEnough(int x){
	bool isok=true;
	for(int i=0;i<5;i++){
		if(!isLegal(x)){
			isok=false;
			break;
		}
		x=x-((x-1)/5)-1;
	}
	return isok;
} 

int main(){
	int x=6;
	while(!isEnough(x)) x++;
	cout<<x<<endl;
	return 0;
}
