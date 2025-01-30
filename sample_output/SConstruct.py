import os
env = Environment(ENV=os.environ.copy())

env.Program(target='main', source=['main.cc'])
