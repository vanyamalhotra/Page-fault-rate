#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
//variable declaration
// description added seperately 
double pg_fault_emp; 
double pg_fault_mod;
double acc_time;
double pg_mod_time;
double max_acc_time;
double pg_fault_rate;
double PFE, PFM, tpm;


//function to calculate page fault
double page_fault_rate(double Pg_fault_emp, double Pg_fault_mod, double MA , double timesPgs,double EA)
{ 
 	double a;
   	double b;
	double n;
   	double d;
	double PF;
	a = (1- timesPgs) * Pg_fault_emp;
	b = timesPgs * Pg_fault_mod;
	n =EA - MA;
    d = (a+b);
	PF =n/d;
	return PF;

}

//user input
void userInput()
{
printf("\nEnter time taken to service page fault if there is empty page or un-modified page in millisecond\n");
	
	scanf("%lf",&pg_fault_emp);
	printf("Enter time taken to service page fault if there is a modified page in millisecond\n");
	
scanf("%lf",&pg_fault_mod);
	printf("Enter memory access time in nanosecond\n");
scanf("%lf",&acc_time);

	printf("Enter the percentage of page that are found to be replaced (0-100)\n");
	scanf("%lf",&pg_mod_time);

	printf("Enter Maximum Access time allowed for the system in nanosecond\n");
	scanf("%lf",&max_acc_time);
	
	PFE = (pg_fault_emp*1000000);// 1 milli = 10^6 nano
	PFM = (pg_fault_mod*1000000);
	tpm = (pg_mod_time/100); //0.7 acc to ques
	
	
	//outputs:
   
	printf("\nPage Fault rate calculated For:\n");
	printf("Page Fault (Page Not Modified): %lf \n",PFE);
	printf("Page Fault (Modified Page): %lf \n",PFM);
	printf("Memory Access Time(ns): %lf\n",acc_time);
	printf("Maximum Access Time: %lf\n",max_acc_time);
    	pg_fault_rate =  page_fault_rate(PFE,PFM,acc_time,tpm,max_acc_time);
	printf("\nMaximum Acceptable Page Fault rate: %.3e",pg_fault_rate);
}


//main
int main()
{
	int a;
	A:
	printf("press 1 for finding the maximum page-fault rate\n");
	printf("press 2 to exit");
	scanf("%d",&a);
	switch(a){
		case 1:userInput();
		printf("\n\n\n");
		goto A;
		break;
		case 2:exit(1);
	}
return 0;	
}



