syms x
k = 8;

f = (x^2 - 3)/5;

g = (-x^2+4+k)/5;

sol = solve(g-f,x);

a = sol(1);
b = sol(2);

area = int(g-f, a, b);

double(abs(area))

x = linspace(-5, 5, 1000);

f = @(x) (x.^2  - 3) ./ 5;

g = @(x) (-x.^2 + 4 + k) ./ 5;

plot(x, f(x), 'r');
hold on;
plot(x,g(x),'b');
