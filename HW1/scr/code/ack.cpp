#include<iostream>
using namespace std;
int ack(int m,int n){
	if(m==0)         //如果m是0，回傳n=n+1; 
		return n+=1;
	
	else if(n==0)    //如果m不是0，且n是0，回傳遞迴m-1，n=1; 
		return ack(m-1,1);
	
	else            //如果都不是0，回傳遞迴m-1，n=ack(m,n-1); 
		return ack(m-1,ack(m,n-1));
}
int main(){
	int m,n;
	cout<<"輸入m,n"<<endl;
	while(cin>>m>>n){  //當我有輸入時，就一直做 
		cout<<"ack("<<m<<","<<n<<")="<<ack(m,n)<<endl;//輸出 
	}
	
	return 0;
}
