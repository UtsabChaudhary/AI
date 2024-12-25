% Facts
likes(ziggy, fish).
is_cat(ziggy).

% Rules
eats(X, Y) :-
    is_cat(X),
    likes(X, Y).
