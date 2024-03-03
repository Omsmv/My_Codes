%%
clc
clear all

%%
img = imread('LC08_L1TP_146044_20201226_20201226_01_RT_B5.TIF');
gimg = im2gray(img);
%gimg = zeros(256, 256)
%gimg(125:126, 125:126) = 1;
imshow(gimg)

P = size(gimg);
M = P(1); N = P(2);
F = fft2(gimg, M, N);
subplot(332)
%imshow(uint8(abs(fftshift(F))));
imshow(uint8(abs((F))));
u0 = 100; %remove freq. greater than u0
u = 0: (M-1);
v = 0: (N-1);
idx = find(u > M/2);
u(idx) = u(idx) - M;
idy = find(v > N/2);
v(idy) = v(idy) - N;
[V, U] = meshgrid(v, u);
D = sqrt(U.^2 + V.^2);

%% Butterworth low pass
n = 1; %Butterworth filter of order n
H = 1./(1 + (D./u0).^(2*n));
subplot(335)
imshow(abs(fftshift(H)));
subplot(336)
G = H.*F;
g = (ifft2(G));
imshow(uint8(g))