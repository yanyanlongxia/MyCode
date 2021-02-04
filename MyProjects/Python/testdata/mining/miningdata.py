from cyaron import *
import random

for i in range(1, 21):
    io = IO(file_prefix="mining", data_id=i)
    m = random.randint(1, 1000000000)
    n = random.randint(1, min(100000, m))

    io.input_writeln(n)
    io.input_writeln(m)
    s = set()
    s.clear()
    for j in range(0, n):
        a = random.randint(1, 10000)
        b = random.randint(1, m)
        while b not in s:
            b = random.randint(1, m)
        s.add(b)
        io.input_writeln(a)
        io.input_writeln(b)
    io.output_gen("std.exe")
io = 1
