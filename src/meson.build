src_files = files('dummy.cpp')

eigen = subproject('eigen')
eigen_dep = eigen.get_variable('eigen_dep')

clangtidy = find_program('clang-tidy', required: false)
if clangtidy.found()
    run_target(
        'tidy',
        command: [
            clangtidy,
            '-p', meson.build_root()
        ] + src_files)
endif

executable('dummy', src_files, dependencies : [eigen_dep], install : true, install_dir : 'bin')