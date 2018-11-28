k = 8;

d = abs(10-k);

t = linspace(0, 2 * pi, 1000);

x = @(t) (18)*cos(t) - 5*d*cos(9*t);

y = @(t) (18)*sin(t) - 5*d*sin(9*t);

plot(x(t),y(t),'r'); % 'r' means red lines

hold on

for ii = 1:length(t)
    
    h = plot(x(t(ii)),y(t(ii)),'bo'); % 'ro' means red balls
    pause(0.01); % the velocity of the graph's update
    delete(h); % remove old points of graph
    
end