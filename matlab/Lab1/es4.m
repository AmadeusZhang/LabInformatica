function vk = es4(k)
    vk = ones(1,k);
    for ii = 1:(k+1)
        vk(ii) = (2*(ii-1)+1)^2;
    end
end