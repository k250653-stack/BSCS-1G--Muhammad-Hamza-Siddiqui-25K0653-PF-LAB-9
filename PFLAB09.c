#include<stdio.h>
//Q1
void banking(void){
	int climit, tamount;
	printf("Enter Your Current Remaining Limit: ");
	scanf("%d", &climit);
	printf("Enter Your Transaction Amount: ");
	scanf("%d", &tamount);
	if(tamount <= climit){
		printf("Transaction Accepted\n");
		printf("Transaction Amount: %d\n", tamount);
		printf("Remaining Limit: %d\n", climit-tamount);
	}else {
		printf("Transaction Rejected\n");
		printf("Remaining Limit: %d\n", climit);
	}
}
//Q2
float marks(void){
	int marks[3];
	int sum=0, count = 0;
	float avg=0;
	for(int i =0; i<3; i++){
		printf("Enter Marks#%d: ", i+1);
		scanf("%d", &marks[i]);
		sum += marks[i];
		if (marks[i] < 40 ){
			count++;
		}
	}
	avg = (float)sum/3;
	if(count >0){
		printf("FAILED Due to less than 40 marks in one subject!\n");
	}else if(avg < 50){
		printf("FAILED Due to average being less than 50!\n");
	}else {
		printf("PASS\n");
	}
	printf("Average: %.1f\n", avg);
	return avg;
}
//Q3
void temp(void) {
    float temp;

    printf("Enter current temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp > 35)
        printf("HEAT ALERT\n");
    else if (temp < 10)
        printf("COLD ALERT\n");
    else if (temp >= 15 && temp <= 25)
        printf("COMFORT ZONE\n");
    else
        printf("NORMAL CONDITIONS\n");
}
//Q4
float ordercost(void) {
    float orderAmount, weight, totalCost, shipping = 0;

    printf("Enter order amount: ");
    scanf("%f", &orderAmount);
    printf("Enter package weight (kg): ");
    scanf("%f", &weight);

    if (orderAmount > 100)
        shipping = 0;
    else if (weight < 2)
        shipping = 10;
    else if (weight <= 5)
        shipping = 15;
    else
        shipping = 20;

    totalCost = orderAmount + shipping;
    printf("Total Cost of Order = %.2f\n", totalCost);
}
//Q5
float bill() {
    float foodCost, tax, tip, service = 0, total;
    int people;

    printf("Enter food cost: ");
    scanf("%f", &foodCost);
    printf("Enter number of people: ");
    scanf("%d", &people);

    tax = 0.08 * foodCost;
    tip = (foodCost > 50) ? 0.15 * foodCost : 0.10 * foodCost;
    if (people > 6)
        service = 0.05 * foodCost;

    total = foodCost + tax + tip + service;
    printf("Final Bill = %.2f\n", total);
}
//Q6
void tax(void) {
    float income, tax = 0, net;

    printf("Enter gross income: ");
    scanf("%f", &income);

    if (income <= 20000)
        tax = 0;
    else if (income <= 50000)
        tax = 0.10 * (income - 20000);
    else
        tax = 0.10 * 30000 + 0.20 * (income - 50000);

    net = income - tax;

    printf("Tax amount: $%.2f\n", tax);
    printf("Net income: $%.2f\n", net);
}

//Q7
float rentalcost() {
    int days;
    float km, total, baseRate, extraMileage = 0;

    printf("Enter number of rental days: ");
    scanf("%d", &days);
    printf("Enter kilometers driven: ");
    scanf("%f", &km);

    baseRate = 40 * days;

    if (km > 100 * days)
        extraMileage = 0.25 * (km - 100 * days);

    total = baseRate + extraMileage;

    if (days >= 7)
        total *= 0.9; 

    printf("Total = %.2f\n", total);
}
//Q8
void pointerArrayOperations(void) {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int *ptr = arr;
    int *ptr2;

    printf("=== Pointer Array Operations ===\n");

    printf("1. *ptr: %d\n", *ptr);             
    printf("2. *(ptr + 3): %d\n", *(ptr + 3)); 
    printf("3. ptr[2]: %d\n", ptr[2]);         

    ptr = ptr + 4;  
    printf("4. After ptr + 4: %d\n", *ptr);   
    printf("5. ptr[1]: %d\n", ptr[1]);        

    ptr2 = &arr[5];  
    printf("6. *ptr2: %d\n", *ptr2);           
    printf("7. ptr2[-2]: %d\n", ptr2[-2]);     
}
//Q9
void pointerSwapOperations() {
    int a = 100, b = 200, c = 300;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    int *temp;

    temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;

    *p1 = *p1 + 50;
    *p2 = *p2 - 100;
    *p3 = *p3 * 2;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    *p1 = *p2 + *p3;
    *p2 = *p1 - 100;
    *p3 = *p2 * 2;

    printf("Final Values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}
//Q10
void gridPointerOperations() {
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int *ptr = &grid[0][0];
    int *ptr2 = &grid[1][0];

    printf("Elements using first pointer (some positions):\n");
    printf("%d %d %d\n", *(ptr), *(ptr + 3), *(ptr + 5));

    printf("\nElements using second pointer (with + and - indexing):\n");
    printf("%d %d %d\n", *(ptr2), *(ptr2 + 2), ptr2[-1]);

    printf("\nNumbers divisible by 3 in grid:\n");
    for (int *p = &grid[0][0]; p <= &grid[2][3]; p++) {
        if (*p % 3 == 0)
            printf("%d ", *p);
    }

    printf("\n\nLast element (accessed differently): %d\n", *(&grid[0][0] + 11));
}
int main(){
	banking();
	printf("=========================\n");
	marks();
	printf("=========================\n");
	temp();
	printf("=========================\n");
	ordercost();
	printf("=========================\n");
	bill();
	printf("=========================\n");
	tax();
	printf("=========================\n");
	rentalcost();
	printf("=========================\n");
	pointerArrayOperations();
	printf("=========================\n");
	pointerSwapOperations();
	printf("=========================\n");
	gridPointerOperations();
	return 0;
}
