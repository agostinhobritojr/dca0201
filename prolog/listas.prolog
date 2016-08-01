p([1,2,3]).
p([4,5,6,7]).
p([8]).
membro(X,Y):- Y=[Z|_], X=Z.
membro(X,Y):- Y=[_|W], membro(X,W).
appendi([],L,L).
appendi([X|L1],L2,[X|L3]):- appendi(L1,L2,L3).
lista([]).
lista([_|_]).
listlen([],0).
listlen([_|T],N):- listlen(T,N1), N is N1+1.


% reverso de uma lista
rev(L1, L3):- revacc(L1,[],L3).
revacc([],L3,L3).
revacc([H|L1],L2,L3):- revacc(L1,[H|L2],L3).
