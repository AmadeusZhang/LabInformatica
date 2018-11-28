syms x

f = x^4 - 13*x^2 - 11*x;

solve(f)

xx = linspace(0, pi, 100);

plot(xx, f(xx))