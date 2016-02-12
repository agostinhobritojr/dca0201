p([1,2,3]).
p([o, gato, sentou, [no, vaso]]).

membro(X,Y):- Y=[H|_], H=X.
membro(X,Y):- Y=[_|T], membro(X,T).

