#include<stdio.h>

int transaction(int account_number,int request_type,int amount,struct customer bank[10])
{
	int i;
	for (i=0;i<10;i++)
	if(account_number==bank[i].number)
	break;
	if(request_type==1)
	{
		bank[i].balance-=amount;
		printf("Balance: %d",bank[i].balance);
		return 1;
	}
	else if(request_type==0)
	{
		bank[i].balance+=amount;
		printf("Balance: %d",bank[i].balance);
		return 1;
	}
	else
	printf("Balance: %d",bank[i].balance);
	return 0;
	
}
               
int main()
{
	struct customer{
		int number;
		char name[50];
		int balance;
	}bank [10];
	bank.number=1000;
	bank.name="ALVIN";
	bank.balance=100000;
	if (transaction(1000,0,10000, bank)
	printf("Transaction is completed ");
	else
	printf("Transaction failed");
	
}


