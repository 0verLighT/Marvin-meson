project(
  '.marvin',
  'c',
  meson_version : '>= 1.3.0',
  version : '0.1',
  default_options : ['warning_level=3'],
)

inc = [include_directories('includes')]

files = [
  'main.c',
  'src/commands/cmd_bbl.c',
  'src/commands/cmd_help.c',
  'src/commands/cmd_update.c',
  'src/commands/list_cmd.c',
  'src/utils/alloc.c',
  'src/utils/printable.c',
  'src/utils/warping.c'
]

executable('marvin', files, include_directories:inc)

