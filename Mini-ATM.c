#include <stdio.h>
int main() {
	
	int budget = 6666;
	
	printf("Welcome to FinanceBank ATM!\n");
	printf("1 - View Budget\n");
	printf("2 - Withdraw Money\n");
	printf("3 - Deposit Money\n");
	printf("4 - Exit\n");
	int option;
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		printf("Your Updated Budget:");
		printf("%d", budget);

		break;
	case 2:;
			
		int withdrawn_amount;

		
		printf("Enter the amount of money you want to withdraw: ");
		scanf("%d", &withdrawn_amount);
		
		if (withdrawn_amount > budget) {
			printf("You can't withdraw more money than your current budget!");
		}
		else{
			printf("Your Remaining Budget:");
			printf("%d", budget-withdrawn_amount);
		}
		break;
	case 3:;
		int deposited_amount;
		
		printf("Enter the amount of money you want to deposit: ");
		scanf("%d", &deposited_amount);
		printf("Your Updated Budget:");
		printf("%d", deposited_amount+budget);

		
		break;
	case 4:
		printf("Checking Out from your Account....\n");
		printf("Check Out Completed,Have a Good Day!\n");
		break;
	default:
		printf("Please select a valid option.");
		break;
	}
	return 0;

}