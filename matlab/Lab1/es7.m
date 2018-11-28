z = (1:8);
compass(0);
hold on;
for k = 1: 8
    z(k) = (3)^(1/8) * exp( ( (2*pi) * 1i * (k-1) / 8 ) );
    compass( z(k) );
end
hold off;