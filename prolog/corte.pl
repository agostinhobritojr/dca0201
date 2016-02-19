% corte
% indicacao da regra certa
% calculo do fatorial
fat(0,1):- !.
fat(N,F):- N1 is N-1, fat(N1,F1), F is F1*N.

% limitacao de busca
pai(jorge,jose).
pai(jorge,maria).
pai(antonio, isolda).
pai(felipe, mario).

homem(jorge).
homem(antonio).
homem(felipe).

paicorte(X):- homem(X), ehpai(X).
ehpai(X):- pai(X,_), !.

% combinacao corte-falha
naomembro(X,Y):- member(X,Y), fail.
naomembro(_,_).

% simbolo corte-falha
naomembro2(X,Y):- \+ member(X,Y).
