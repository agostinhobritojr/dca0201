pop(eua, 203).
pop(india, 548).
pop(china, 800).
pop(brasil, 108).
area(eua, 8).
area(india, 3).
area(china, 10).
area(brasil, 8).

dens(X,Y):-
    pop(X,W),
    area(X,Z),
    Y is W/Z.
