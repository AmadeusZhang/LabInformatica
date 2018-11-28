series = [1:10];

for k = 1:10
    if ( k == 2 || k == 6 )
        series(k) = 1/k;
    
    else
        series(k) = 1/[(k-2)*(k-6)];
        
    end
end

series