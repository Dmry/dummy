A template project for scientific projects in C++.

Dependencies:
- meson
- clang-format
- clang-tidy

Setup:
```
mkdir build
meson setup build
```

Includes libraries for:
- Linear algebra    (Eigen)
- Benchmarking      (Google benchmark)
- Unit testing      (Catch2)
- Python bindings   (Pybind11)

Includes recommended settings for:
- Code formatting   (clang-format)
- Code linting      (clang-tidy)
- CI / CD           (travis)

Installing recommended VScode extensions:
```
code --install-extension asabil.meson notskm.clang-tidy ms-vscode.cpptools
```