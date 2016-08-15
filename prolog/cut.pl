homem(jorge).
homem(haroldo).
homem(agostinho).
homem(eduardo).
pai(jorge,maria).
pai(haroldo,sueli).
pai(eduardo,haroldo).
pai(jorge,pedro).

paicorte(X):- homem(X), ehpai(X).
ehpai(X):- pai(X,_),!.
