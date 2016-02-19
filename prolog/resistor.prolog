lista([]).    % lista vazia
lista([_|_]). % lista nao vazia
% se a lista eh vazia a resistencia eh zero.
equiv([],B) :-
	B is 0. 
% se a lista contem apenas um elemento "A" e ele nao
% eh lista, a resistencia eh igual a "A"
equiv([A],B) :- 
	not(lista(A)),
	B is A.
% se a lista contem uma lista X dentro dela, a resistencia
% eh a resistencia equivalente da lista X
equiv(A,B) :-
	A=[X], 
	lista(X),
	equiv(X,R1),
	B is R1.
% [1,2,[3],...]
equiv(A,B) :- 
	A=[X|Y],
	not(lista(X)),
	Y=[Z|W],
	not(lista(Z)),
	R1 is X+Z,
	equiv(W,R2),
	B is R1+R2.
% [[1],2,[3],...] 
equiv(A,B):-
	A=[X|Y],
	lista(X),
	Y=[Z|W],
	not(lista(Z)),
	equiv(X,R1),
	equiv(W,R2),
	B is R1+Z+R2.
% [1,[2,3],[4],...]
equiv(A,B):-
	A=[X|Y],
	not(lista(X)),
	Y=[Z|W],
	lista(Z),
	equiv(Y,R1),
	B is X+R1.
% [[1],[2],...]
% [ U, ...]
equiv(A,B):-
	A=[X|Y],
	lista(X),
	Y=[Z|W],
	lista(Z),
	paralelo(X,Z,U),
	K=[U|W],
	equiv(K,B).
paralelo(A,B,C):- equiv(A,R1), equiv(B,R2), C = [(R1*R2)/(R1+R2)].
%equiv([[4],[2,[4],[2,[4],[3,1]]],1],X).

