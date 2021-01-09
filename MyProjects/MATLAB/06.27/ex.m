function ex()
    N = 1000000;
    a = 1:N;
    x = 1;
    tic
    p1 =sum(a.*x.^[N-1:-1:0]);
    p1, toc   % 直接计算 方法一

    tic, p2 = a(1)
    for i = 2:N
        p2 = p2*x + a(i);
    end 
    p2, toc   % 嵌套计算 方法二

    tic, p3 = polyval(a,x), toc  % matlab系统自带方法计算 方法三
end 