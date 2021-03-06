import sys, itertools
from functools import reduce

class Pipe:
    def __init__(self, func, *args, **kwargs):
        self.func = func
        self.args = args
        self.kwargs = kwargs

    def __ror__(self, lhs):
        return self.op(self.func, lhs)

class Map(Pipe):
    def __ror__(self, lhs):
        return map(
            lambda x: self.func(x, *self.args, **self.kwargs), 
            lhs
        )

class Reduce(Pipe):
    def __ror__(self, lhs):
        return reduce(self.func, lhs)

class Sink(Pipe):
    def __ror__(self, lhs):
        return self.func(lhs, *self.args, **self.kwargs)

### ------------------------------------------------------------------

class Manager(object): pass

p = Manager()
p.dict = Sink(dict)
p.split = Map(str.split)

p.double = Map(lambda x: 2*x)

print(list([1,2] | p.double))



