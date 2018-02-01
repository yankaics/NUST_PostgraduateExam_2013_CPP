#include<iostream>
#include<string>

using namespace std;

#define M 30

//ȥ���ظ����ַ� 
string delSame(string str){
	char stack[M];
	int top=-1;
	for(int i=0,size=str.size();i<size;i++){
		bool isok=true;
		for(int j=0;j<=top;j++){
			if(str[i]==stack[j]){
				isok=false;
				break;
			}
		}
		if(isok) stack[++top]=str[i];
	} 
	string result="";
	while(top!=-1){
		result+=stack[top--];
	}
	return result;
} 

//���ַ����򣬱Ƚϴ�Сʵ�����ǱȽ�ASCII�� 
string sortStr(string str){
	for(int i=0,size=str.size();i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(str[j]>str[j+1]){
				char temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	return str;
}

int main(){
	string str;
	cin>>str;
	str=delSame(str);
	str=sortStr(str);
	if(str.size()<3){
		cout<<"û�н��"<<endl;
		return 0;
	}
	for(int i=0,size=str.size();i<size;i++){
		for(int j=i+1;j<size;j++){
			for(int k=j+1;k<size;k++){
				cout<<str[i]<<str[j]<<str[k]<<endl;
			}
		}
	}
	return 0;
}
