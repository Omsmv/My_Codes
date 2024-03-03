function nroll = ngetsix(n)
for i = 1:n
    k = 1;
    while randi(6) ~= 6
        k = k+1;
    end
    nroll(i)= k
end
    hist(nroll)