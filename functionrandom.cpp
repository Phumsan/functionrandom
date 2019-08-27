#include<iostream>
#include<iomanip>
using namespace std;
int checkNum(int,int);
int main()
{	
	int num,num1,round=0;
	cout<<"###Welcome to guessing number game###\n";
	cout<<"Secret number has been chosen\n";
	srand(time(NULL));
	num1=1+rand()%10;
	do{
	cout<<"Guess the number(1 to 10) : ";
	cin>>num;
	checkNum(num,num1);
	round += 1;
	}while(num!=num1);
	cout<<"You made "<<" "<< round <<" "<<" guesses "<<endl;
	return(0);
}
int checkNum(int n,int n1)
{
	if(n<n1)
	{
		cout<<"The secret number is lower\n";
	}
	else if(n>n1)
	{
		cout<<"The secret number is higher\n";
	}
	else if(n==n1)
	{
		cout<<"Congratulations!\n";
		cout<<"The secret number is"<<" "<<n1<<endl;
	}
	
	return(n,n1);
}