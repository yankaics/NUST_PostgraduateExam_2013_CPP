#include<iostream>
#include<cstdio>

using namespace std;

//��int����ת��Ϊstring 
string toString(int a){
	char s[10];
	sprintf(s,"%d",a);
	string str="";
	str+=s;
	return str;
}

//��ʮ����ת��Ϊ������ 
string TenToBin(long tenN){
	string binN="";
	while(tenN>0){
		int a=tenN%2;
		binN=toString(a)+binN;
		tenN/=2; 
	}
	return binN;
}

int main(){
	long a;
	cin>>a;
	cout<<TenToBin(a)<<endl;
	return 0;
} 
