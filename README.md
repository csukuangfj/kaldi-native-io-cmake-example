# Introduction

This project demonstrates how to use [kaldi_native_io][kaldi_native_io]
in CMake-based projects with C++.

It does not describe the C++ APIs of [kaldi_native_io][kaldi_native_io]. It only shows
how to use [kaldi_native_io][kaldi_native_io] in your CMake-based projects with C++.

# Usage

First, please install [kaldi_native_io][kaldi_native_io] using

```bash
pip install --verbose kaldi_native_io
```

After installing [kaldi_native_io][kaldi_native_io], you can run this project
with the following commands:

```bash
export kaldi_native_io_DIR=$(python -c 'import kaldi_native_io; print(kaldi_native_io.cmake_prefix_path)')

git clone https://github.com/csukuangfj/kaldi-native-io-cmake-example
cd kaldi-native-io-cmake-example
mkdir build
cd build
cmake ..
make
./main
```

You will get the following output after executing `./main`:

```
standard input
```

[kaldi_native_io]: https://github.com/csukuangfj/kaldi_native_io
