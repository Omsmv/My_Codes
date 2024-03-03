%% Atmospheric correction of LANDSAT 7 images in MATLAB
clc                                     % clear the command window
clear all                               % clear the workspace
%Read image
DN=imread('L7_B5_Bhopal.tif');          % Image read

%DN(DN==255)=nan;
DN(DN==255)=min(min(DN));

subplot(221)
%show image
h=imshow(DN);
axis image off
title('LANDSAT 7 (Band 5) image')
colorbar
caxis([min(min(DN)) max(max(DN))])
% See the cell values; 
% Data type?
%% Step 1: DN to radiance (L) using Gain and Bias method
% Variable declaration from META-DATA file
G = 0.12622;   %RADIANCE_MULT_BAND_5
B = -1.12622;  %RADIANCE_ADD_BAND_5
L = (double(DN)*G)+B; %Radiance
subplot(222)
imshow(L)
axis image off
title('Radiance using Gain and Bias')
colorbar
caxis([min(min(L)) max(max(L))])
% Again see the cell values; 

%% Step 1: DN to radiance (Lsrc) using Spectral radiance scaling method
% Variable declaration from META-DATA file
Lmax = 31.060; %RADIANCE_MAXIMUM_BAND_5
Lmin = -1;     %RADIANCE_MINIMUM_BAND_5
DNmax = 255;   %QUANTIZE_CAL_MAX_BAND_5
DNmin = 1;     %QUANTIZE_CAL_MIN_BAND_5
Lsrc = ((Lmax-Lmin)/(DNmax-DNmin))*(double(DN)-DNmin)+Lmin;
subplot(223)
imshow(Lsrc)
axis image off
title('Radiance using SR Scaling')
colorbar
caxis([min(min(Lsrc)) max(max(Lsrc))])
% Again see the cell values;

%% Step 2:  Radiance (L) to Reflectance (rho)
% Variable declaration from META-DATA file
d = 0.9848119;      %EARTH_SUN_DISTANCE
ESUN= 225.7;
theta= 38.16625491; %SUN_ELEVATION
phi= 90-theta;
%Formula
rho=(pi*L*d^2)/(ESUN*cosd(phi));
subplot(224)
imshow(rho)
axis image off
title('Reflectance')
colorbar
caxis([min(min(rho)) max(max(rho))])
% Again see the cell values;
