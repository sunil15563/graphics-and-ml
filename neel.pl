max(X,Y) :-
	X>Y -> write(X) ;
	 X<Y -> write(Y);
	 x==y -> write("both are equal") .
