close all
clear all
a = arduino('/dev/tty.usbserial-A5069RR4','Uno', 'Libraries','I2C')
 fs=100;
 
imu=lsm9ds1(a,'SampleRate',fs,'OutputFormat','matrix');

num_points = 100;

mag_avg = zeros(num_points,3);
for i = 1:num_points
    [accel,gyro,mag] = read(imu)
    mag_avg(i, :) = mean(mag);
    pause(0.2);
end

scatter3(mag_avg(:,1), mag_avg(:,2),mag_avg(:,3));
hold all
[A,b,expMFS] = magcal(mag_avg);
xCorrected = (mag_avg-b)*A;

scatter3(xCorrected(:,1),xCorrected(:,2),xCorrected(:,3));
display(A);
display(b);
