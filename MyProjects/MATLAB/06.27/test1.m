function Pos=TestFigure(Cx,Cy,R)

%图形计算
if nargin<3
   Cx=500;Cy=500;R=400;
end

sitaStep=0.0001;
fprintf('input：X = %d,Y = %d,R = %d\n', Cx,Cy,R);
L=sqrt(R^2-(R*cos(18*pi/180))^2)/sin(54*pi/180);%圆心到五角星内拐点的距离
P1.x=Cx+R*cos(18*pi/180);      P1.y=Cy+R*sin(18*pi/180);
P2.x=P1.x;                     P2.y=Cy+R;
P3.x=P2.x-2*R*cos(18*pi/180);  P3.y=P2.y;
P4.x=P3.x;                     P4.y=P1.y;
P5.x=Cx-L*cos(54*pi/180);      P5.y=Cy+L*sin(54*pi/180);
P6.x=Cx;                       P6.y=Cy+R;
P7.x=Cx+L*cos(54*pi/180);      P7.y=Cy+L*sin(54*pi/180);
P8.x=P1.x;                     P8.y=P1.y;
P9.x=Cx+L*cos(18*pi/180);      P9.y=Cy-L*sin(18*pi/180);
P10.x=Cx+R*cos(54*pi/180);     P10.y=Cy-R*sin(54*pi/180);
P11.x=Cx;                      P11.y=Cy-L;
P12.x=Cx-R*cos(54*pi/180);     P12.y=Cy-R*sin(54*pi/180);
P13.x=Cx-L*cos(18*pi/180);     P13.y=Cy-L*sin(18*pi/180);
P14.x=P4.x;                    P14.y=P4.y;
sita =(180-18)*pi/180:sitaStep:(2*pi+(180-18)*pi/180);%整圆
Arc_x = R*cos(sita)+Cx;%圆轨迹
Arc_y = R*sin(sita)+Cy;
sita =(180+72*2-54)*pi/180:sitaStep:(72*pi/180+(180+72*2-54)*pi/180);
C1.x=Cx-2*R*cos(36*pi/180)*cos(54*pi/180);%圆弧1的圆心
C1.y=Cy+2*R*cos(36*pi/180)*sin(54*pi/180);
Arc1x=  R*cos(sita)+C1.x;%弧轨迹
Arc1y=  R*sin(sita)+C1.y;
sita =(180+72-54)*pi/180:sitaStep:(72*pi/180+(180+72-54)*pi/180);
C2.x=Cx+2*R*cos(36*pi/180)*cos(54*pi/180);%圆弧2的圆心
C2.y=Cy+2*R*cos(36*pi/180)*sin(54*pi/180);
Arc2x=  R*cos(sita)+C2.x;
Arc2y=  R*sin(sita)+C2.y;
sita =(180-54)*pi/180:sitaStep:(72*pi/180+(180-54)*pi/180);
C3.x=Cx+2*R*cos(36*pi/180)*cos(18*pi/180);
C3.y=Cy-2*R*cos(36*pi/180)*sin(18*pi/180);
Arc3x=  R*cos(sita)+C3.x;
Arc3y=  R*sin(sita)+C3.y;
sita =(180-54-72)*pi/180:sitaStep:(72*pi/180+(180-54-72)*pi/180);
C4.x=Cx;
C4.y=Cy-2*R*cos(36*pi/180);
Arc4x=  R*cos(sita)+C4.x;
Arc4y=  R*sin(sita)+C4.y;
sita =(180-54-72*2)*pi/180:sitaStep:(72*pi/180+(180-54-72*2)*pi/180);
C5.x=Cx-2*R*cos(36*pi/180)*cos(18*pi/180);
C5.y=Cy-2*R*cos(36*pi/180)*sin(18*pi/180);
Arc5x=  R*cos(sita)+C5.x;
Arc5y=  R*sin(sita)+C5.y;
AxisX=[P1.x P2.x P3.x P4.x P5.x P6.x P7.x P8.x P9.x P10.x P11.x P12.x P13.x P14.x Arc_x Arc1x Arc2x Arc3x Arc4x Arc5x];
AxisY=[P1.y P2.y P3.y P4.y P5.y P6.y P7.y P8.y P9.y P10.y P11.y P12.y P13.y P14.y Arc_y Arc1y Arc2y Arc3y Arc4y Arc5y];

%返回值
Pos=[AxisX(1:14) AxisX(1) Cx C1.x C2.x C3.x C4.x C5.x;
   AxisY(1:14)  AxisY(1) Cy C1.y C2.y C3.y C4.y C5.y];

figure(1);
plot(AxisX,AxisY);
%text(Pos(1,1:14),Pos(2,1:14),{'P1','P2','P3','P4(14)','P5','P6','P7','P1(8,15)','P9','P10','P11','P12','P13','P4(14)'});
axis equal;
grid on;
hold on;

for n=1:21
    if n<16
       fprintf('Pos(%d)：X= %f,Y = %f\n', n,Pos(1,n),Pos(2,n));
    elseif n==16
       fprintf('Center：X = %f,Y = %f\n',Pos(1,n),Pos(2,n));
    else
       fprintf('Arc(%d)：X = %f,Y = %f\n',n-16,Pos(1,n),Pos(2,n));
    end
end
end