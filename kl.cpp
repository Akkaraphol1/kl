#include<iostream>
#include<time.h>
using namespace std;
void checkNum(int,int);
int c ;
int main()
{
	srand(time(0));
	int k = rand()%10;
	int l;
	cout<<"### Welcome to guessing number game ###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	do{
	cout<<"Guess the number (1 to 10): ";
	cin>>l;
	checkNum(k,l);
	c=c+1;
	}while(k!=l);
	
	cout<<"The secret number is "<< k <<endl;
	cout<<"You made "<< c <<" guesses "<<endl;
	return (0);

}
void checkNum(int a,int b)
{
		if(a==b) cout<<"Congratulations!."<<endl;
		else if(a > b) cout<<"The secret number is higher"<<endl;
		else cout<<"The secret number is lower"<<endl;
}