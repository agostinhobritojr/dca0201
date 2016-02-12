digito(0).
digito(1).
digito(2).
digito(3).
digito(4).
digito(5).
digito(6).
digito(7).
digito(8).
digito(9).

digit(X):-between(0,9,X).

solucao(Cor, Bol, Pre, Est, Lua, Rep):-
    digito(Cor),
    Cor =\= 0,
    digito(Bol),
    Bol =\= 0,
    digito(Pre),
    Pre =\= 0,
    digito(Est),
    Est =\= 0,
    digito(Rep),
    Rep =\= 0,
    digito(Lua),
    % coracao
    Cor =\= Bol, Cor =\= Pre,
    Cor =\= Rep, Cor =\= Est, 
    Cor =\= Lua,
    % bolacha
    Bol =\= Pre,
    Bol =\= Rep, Bol =\= Est, 
    Bol =\= Lua,
    % pretzel
    Pre =\= Rep, Pre =\= Est, 
    Pre =\= Lua,
    % repolho
    Rep =\= Est, Rep =\= Lua, 
    % estrela
    Est =\= Lua,
 
    (11*Cor) + (10*Bol + Pre) =:= 10*Est + Lua,
    (10*Rep+Bol) + Cor =:= 10*Rep+Est,
    (10*Pre+Bol) + (10*Pre+Cor) =:= 10*Rep+Est,
    (11*Cor) - (10*Rep+Bol) =:= (10*Pre+Bol),
    (10*Bol+Pre) -  Cor =:= (10*Pre+Cor),
    (10*Est+Lua) - (10*Rep+Est) =:= (10*Rep+Est).
