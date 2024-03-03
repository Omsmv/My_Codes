%%
clc
clear all
%%
tic
img = imread("simple.png");
gimg = rgb2gray(img);
subplot(221)
imshow(gimg)
title('Original image')
Gx = [+1 +2 +1; 0 0 0; -1 -2 -1];
Gy = Gx';
PQ = (size(gimg));
F = fft2(double(gimg), PQ(1), PQ(2));
H = fft2(double(Gx), PQ(1), (PQ(2)));
F_fh = H.*F;
ffix = ifft2(F_fH);

%Display results (show all values)
imshow(uint8(ffix))
title('Frequency x')
%%
subplot(223)

F = fft2(double(gimg), PQ(1), PQ(2));
%F = fft2(double(f));
H = fft2(double(Gy), PQ(1), PQ(2));
%H = fft2(double(H));
F_fH = H.*F;
ffiy = ifft2(F_fH);

%Display results (show all values)
imshow(uint8(ffiy))
title('Frequency y')
%%
G = sqrt(iffx.^2 + iffy.^2);
subplot(224)
imshow(uint8(G))
title('Frequency Domain')
toc