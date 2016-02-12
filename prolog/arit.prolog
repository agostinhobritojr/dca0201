% a populacao do pais eua eh igual a 203 milhoes de hab
pop(eua, 203).
pop(india, 548).
pop(china, 800).
pop(brasil, 108).

% a area do pais eua eh igual a 8 milhores de km2
area(eua,8).
area(india, 3).
area(china, 10).
area(brasil, 8).

dens(X,Y):-
    pop(X,Pop),
    area(X,Area),
    Y is Pop/Area.
