project(
    'Mirco',
    ['cpp'],
    version: '0.1.0',
    license: 'LGPLv3',
    meson_version: '>=0.45.1',
)

add_project_arguments(
    [
        '-pthread',
        '-Werror',
        'warning_level=3',
        'cpp_std=c++17',
    ],
    language: 'c++',
)

miral_dep = dependency('miral')

srcs = [
    'main.cpp',
    'window_manager_policy.cpp',
    'window_manager_policy.h',
]

example = executable(
    'mirco',
    srcs,
    dependencies: [miral_dep],
)
