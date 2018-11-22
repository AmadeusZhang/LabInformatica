syms z

syms a b real

k = 8;

sol = solve( (k+1)*real(z)+imag(z) == 3, abs(z-i-1) == 1);

compass(sol)