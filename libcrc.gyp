{
  'targets': [{
    'target_name': 'libcrc',
    'type': 'static_library',
    'include_dirs': [
      './include',
    ],
    'sources': [
      './src/arm.c',
      './src/endian.c',
      './src/generic.c',
      './src/lookup.c',
    ],
    'direct_dependent_settings': {
      'include_dirs': [
        './include',
      ],
    },
    'configurations': {
      'Debug': {
        'defines': ['DEBUG'],
      },
      'Release': {
        'defines': ['NDEBUG'],
      },
    },
  }]
}
