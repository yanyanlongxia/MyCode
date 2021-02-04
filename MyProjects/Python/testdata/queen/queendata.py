from cyaron import *
import random

for i in range(1, 21):
    io = IO(file_prefix="queen", data_id=i)
    n = random.randint(1, 16000)
    io.input_writeln(n)
    for j in range(0, n):
        a = random.randint(-1000, 1000)
        io.input_write(a, separator=' ')
    tree = Graph.tree(n)
    io.input_writeln(tree.to_str(output=Edge.unweighted_edge))
    io.output_gen("std.exe")
io = 1
