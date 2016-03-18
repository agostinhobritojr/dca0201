word(cabedal,c,a,b,e,d,a,l).
word(canelas,c,a,n,e,l,a,s).
word(cesareo,c,e,s,a,r,e,o).
word(debater,d,e,b,a,t,e,r).
word(farejar,f,a,r,e,j,a,r).
word(lateral,l,a,t,e,r,a,l).
cruzada(A,B,C,D,E,F) :-
    permutation([A,B,C,D,E,F],[cabedal,canelas,cesareo,
			       debater,farejar,lateral]),
    word(A,_,X1,_,X2,_,X3,_),
    word(B,_,X4,_,X5,_,X6,_),
    word(C,_,X7,_,X8,_,X9,_),
    word(D,_,X1,_,X4,_,X7,_),
    word(E,_,X2,_,X5,_,X8,_),
    word(F,_,X3,_,X6,_,X9,_).

