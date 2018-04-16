sum_list([H|T],X):-

    X is H+X1;

sum_list(T,X1)


.
