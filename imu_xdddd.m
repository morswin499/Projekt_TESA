
clear a
clear imu
 a = arduino('/dev/tty.usbserial-A5069RR4','Uno', 'Libraries','I2C')
 fs=100;
 
imu=lsm9ds1(a,'SampleRate',fs,'OutputFormat','matrix');
viewer = HelperOrientationViewer

for i = 1:1000
 
    [accel,gyro,mag] = read(imu);
  % accel(:,[1, 2]) = fliplr(accel(:,[1, 2]))
    mag_avg = mean(mag)
    mag_cal = (mag_avg-b)*A
    mag_cal = mag_cal *[0 1 0; 1 0 0; 0 0 -1];
    mag_unit = (mag_cal ./ norm(mag_cal));

    acc_avg = mean(accel);
    acc_unit = acc_avg ./ norm(acc_avg)

    U = acc_unit;
    E = cross(mag_unit,U);
    E= E ./ norm(E);
    N = cross (U,E);
    N= N ./ norm(N);
    C=[E',N',U'];
    Q=quaternion(dcm2quat(C));
    [x,y,z]=dcm2angle(C);
    viewer(Q)
    pause(.1)

end
