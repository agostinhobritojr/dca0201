p([1,2,3]).
p([o, gato, sentou, [no, vaso]]).

% determina se X eh membro da lista Y
membro(X,Y):- Y=[H|_], H=X.
membro(X,Y):- Y=[_|T], membro(X,T).

% membro de lista mais elegante
membro2(X,[X|_]).
membro2(X,[_|T]):- membro2(X,T).

% determina o tamanho de uma lista
listlen([],0).
listlen([H|T], N):- listlen(T,N1), N is N1+1.

% reverso de uma lista
rev(L1,L3):- revacc(L1,[],L3).

revacc([],L3,L3).
revacc([H|L1],L2,L3):- revacc(L1,[H|L2],L3).

