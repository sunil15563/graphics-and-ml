/* Write a prolog program to calculate the nth Fibonacci number */
fib(1,1).
fib(0,0).
fib(N,F):-
	N1 is N-1,
	N2 is N-2,
	fib(N1,F1),
	fib(N2,F2),
	F is F1+F2.
