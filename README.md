# Page-fault-rate
/*Ques. 21. Consider a scenario of demand paged memory. Page table is held in registers. It takes 8 milliseconds to service a page fault if an empty page is available or the replaced page is not modified and 20 milliseconds if the replaced page is modified. Memory access time is 100 nanoseconds. Assume that the page to be replaced is modified 70 percent of the time. Generate a solution to find maximum acceptable page-fault rate for access time that is not more than 200 nanoseconds.*/

#for_solution
/*
If P is the page-fault rate then P is the probability that a memory access causes a page fault
If there is no page-fault then the memory access time is 100 nano-seconds
Also (1-P)=Q(let) is the probability that the memory acceess doesn't cause a page-fault
Therefore (1-P) is the probability that a memory access costs 100 nano secs
The probability that a page fault costs 20 milli-seconds is 0.7*P
The probability that a page fault costs 8 milli-seconds is (1-0.7=)0.3*P
Since 1 nsec = 10^6 msec and access time should not be more than 200 nano-seconds:
[(1-P)*100] +[ 0.7*P*20000000] + [0.3*P*8000000] = 200
(14000000 + 2400000 - 100)P = 100
P = 100/(16400100) 
P = 6.1 * 10^-6 
P = .0000061 
P = .00061%
*/
