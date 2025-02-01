env = Environment()

env['CXX'] = '/bin/env clang++'

env.Program(target='main', source=['main.cc'])
