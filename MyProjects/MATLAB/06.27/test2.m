x=10*rand(1,5); y=10*rand(1,5);

    for i=1:length(x)
         for j=1:length(y)
             line([x(i),x(j)],[y(i),y(j)]);
             hold on;
         end
    end
  plot(x,y,'ro');