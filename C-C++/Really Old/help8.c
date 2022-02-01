#include <stdio.h>

int main(void)
{
	//Weight	1-10 days	+11 days
	//under 10	12			10
	//10-35		16			13
	//+35		19			17
	//a weight table for my if statements
	
	int weight; //dog weight
	int food;   //normal food or premium
	int days;   //days boarded
	int weight_cost; // weight day cost this is teh cost fr the chart above
	int food_cost; //food 
	int daily_rate; //daily rate 
	int monthly_rate; // monthly rate
	// having the extra variable makes thinking about it simpler and less confusing for me to code and have the dynamic function at the end
	
	printf("How many pounds does your dog weigh?\t"); 
	scanf("%d", &weight); 
	
	
	printf("How many days per month for boarding?\t");
	scanf("%d", &days);
	
	if (days < 10)
	{
		if (weight < 10){
			weight_cost =12;
		}
		if (weight > 10 && weight < 35){
			weight_cost = 16;
		}
		if (weight >= 35){
			weight_cost =19;
		}
	}
	else{
		if (weight < 10){
			weight_cost =10;
		}
		if (weight > 10 && weight < 35){
			weight_cost = 13;
		}
		if (weight >= 35){
			weight_cost =17;
		}
	}
	printf("Premium food? (1 = yes or 2 = no)\t");
	scanf("%d", &food); 
	if (food > 1 && weight < 20){
		food_cost =1;
	}
	if (food > 1 && weight > 20){
		food_cost =2;
	}
	else{
		food_cost = 0;
	}
	daily_rate = food_cost + weight_cost;
	monthly_rate = daily_rate * days;
	puts("");
	printf("To board a %d pound dog for %d days:\n", weight, days);
	printf("Rate per day:\t\t\t$%.2d\n", daily_rate);
	printf("Monthly Charges:\t\t$%.2d\n",monthly_rate);
	
	
	
	
	
	
	
	
	
	
}