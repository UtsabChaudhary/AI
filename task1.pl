% Facts
is_graduating(ram).

% Rules
happy(X) :- is_graduating(X).
smiles(X) :- happy(X).
