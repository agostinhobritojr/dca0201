% realizar limitacao de buscas
fat(0, 1):- !.
fat(N, F):- N1 is N-1, fat(N1,F1), F is F1*N.

% combinacao corte-falha
naomembro(X, L):- member(X,L), !, fail.
naomembro(_,_).
nonmember(X, L):- \+ member(X,L).

