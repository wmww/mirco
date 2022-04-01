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
        '-Wl,--as-needed',
    ],
    language: 'cpp',
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
    override_options : [
        'c_std=c11',
        'cpp_std=c++17',
        'warning_level=3',
    ],
    dependencies: [miral_dep],
    install: true,
)
