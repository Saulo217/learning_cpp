env = Environment()

env['CXX'] = '/bin/clang++'

env.Program(target='main', source=['main.cc'])
