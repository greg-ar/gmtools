gregsgmtools_sources = [
  'main.cpp',
  'gui/window/window.cpp',
]

gregsgmtools_deps = [
    dependency('gtkmm-4.0', version: '>=4.0')
]

gregsgmtools_includes = [
  include_directories('gui/window')
]


executable('gregsgmtools', gregsgmtools_sources,
  dependencies: gregsgmtools_deps,
  include_directories: gregsgmtools_includes,
  install: true,
)

