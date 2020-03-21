//variable descriptions
double pg_fault_emp; // time taken to service fault page when empty or un-modified page is available eg in ques 8 ms
double pg_fault_mod;// time taken to service fault page when modified pages are being dealt with eg in ques 20 ms
double acc_time;// time taken to access memories eg in ques 100ns
double pg_mod_time;// percentage of modified pages eg in ques 70%
double max_acc_time;// maximum time to be allowed eg in ques 200ns
double pg_fault_rate;// the solution page fault rate
double PFE, PFM, tpm;// variables used to convert into proper units(millisec to nanosec

