#include<iostream>

using namespace std;

#define M 100

//ģ��a*b+give��a�б�����λ��give�д�Ž�λ 
void multi(int &give,int &a,int b){
	int sum=a*b+give;
	a=sum%10;
	give=sum/10;
}

//ģ��result*a
void modelMulti(int result[M],int &top,int a){
	int give=0;
	for(int i=0;i<=top;i++){
		multi(give,result[i],a);
	}
	if(give>0){
		result[++top]=give;
	}
} 

int main(){
	int result[M],top=-1;
	result[++top]=1;
	int flag=1;
	while(top<32){
		flag++;
		modelMulti(result,top,flag);
	}
	cout<<flag-1<<endl;
	return 0;
}
