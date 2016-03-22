void Powerset (int n)
// function to generate the power set of {1, .., n} and retrieve the best set int *stack, k;
stack = new int[n+1]; // allocate space for the set stack[0]=0; /* 0 is not considered as part of the set */ k = 0;
while(1) {
if (stack[k] < n) {
stack[k+1] = stack[k] + 1; k++;
} else {
stack[k‐1]++;
k‐‐; }
if (k==0) break; }
delete [ ] stack; // deallocate space for the set
return; }
