project(
  '.marvin',
  'c',
  meson_version : '>= 1.3.0',
  version : '0.0.1',
  license : 'GNU',
  default_options : ['warning_level=2', 'optimization=3'],
)

inc = [include_directories('includes')]

sources = [
  'main.c',
  'src/alloc.c',
  'src/printable.c',
  'src/warping.c',
  'src/cmd_help.c',
  'src/cmd_update.c',
]

# In C it's not impossible to compile code with same name function because gcc/cc doesn't name mangling
# and in Assembly your code cannont have some function with same name.
# 'cmd/cmd_bubble.c'

marvin = executable(
  'marvin',
  sources,
  include_directories : inc,
)

