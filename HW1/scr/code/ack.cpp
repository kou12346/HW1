#include<iostream>
using namespace std;
int ack(int m,int n){
	if(m==0)         //�p�Gm�O0�A�^��n=n+1; 
		return n+=1;
	
	else if(n==0)    //�p�Gm���O0�A�Bn�O0�A�^�ǻ��jm-1�An=1; 
		return ack(m-1,1);
	
	else            //�p�G�����O0�A�^�ǻ��jm-1�An=ack(m,n-1); 
		return ack(m-1,ack(m,n-1));
}
int main(){
	int m,n;
	cout<<"��Jm,n"<<endl;
	while(cin>>m>>n){  //��ڦ���J�ɡA�N�@���� 
		cout<<"ack("<<m<<","<<n<<")="<<ack(m,n)<<endl;//��X 
	}
	
	return 0;
}
