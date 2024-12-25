% Facts
is_equilateral(abc).

% Rules
is_isosceles(X) :- is_equilateral(X).
equal_sides_ab_ac(X) :- is_isosceles(X).
equal_angles_b_c(X) :- equal_sides_ab_ac(X).
