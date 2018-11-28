syms x

cx = ceil(x);
fx = floor(x);
rx = round(x);
ix = fix(x);

y = [-3, 3];

figure
ezplot(cx, y)
hold on
ezplot(fx, [-3, 3])
ezplot(rx, [-3, 3])
ezplot(ix, [-3, 3])
hold off

legend('ceil(x)','floor(x)', 'round(x)', 'fix(x)')