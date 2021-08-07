Question 1
Find the output of the following code snippet: 
int i =0, j = 0;
int *p = &i, *q = &j;
q = p;
*q = 2
cout<<i<<" "<<j;

Ans=As p is pointing towards the addresses of i and q is pointing towards addresses of j initially 
then after the assignment of q=p now q starts pointing towards i and updates the value at i=0 to 2 
so values at the output be :-
2 0


