%%
clc
clear all

%%
img = imread('Fake_AI_Generated_Image.png');
gimg = rgb2gray(img);
%gimg = zeros(256, 256)
%gimg(125:126, 125:126) = 1;
imshow(gimg)

%% Ideal high pass
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
H = 1 - double(D <= u0);
%display
subplot(333)
imshow(abs(fftshift(H)), []);
subplot(334)
G = H.*F;
g = (ifft2(G));
imshow(uint8(g))

%% Butterworth high pass
n = 1; %Butterworth filter of order n
H = 1 - (1./(1 + (D./u0).^(2*n)));
subplot(335)
imshow(abs(fftshift(H)));
subplot(336)
G = H.*F;
g = (ifft2(G));
imshow(uint8(g))

%% Gaussian high pass filter
H = 1 - exp(-(D.^2)./(2*(u0^2)));
subplot(337)
imshow(abs(fftshift(H)));
subplot(338)
G = H.*F;
g = (ifft2(G));
imshow(uint8(g))