function BW = BW(rgb)

%NOT USED 

    BW = zeros(size(rgb));
    
    thresh = mean(mean(rgb));
    
    BW(rgb > thresh) = 255;
    BW(rgb < thresh)  = 0;
end 

%3D Black and white filter 
% NOT USED