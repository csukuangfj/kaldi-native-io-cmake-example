// main.cc
//
// Copyright (c)  2022  Xiaomi Corporation (authors: Fangjun Kuang)

#include "kaldi_native_io/csrc/kaldi-io.h"
#include <iostream>

int main() {
  std::cout << kaldiio::PrintableRxfilename("-") << "\n";
  return 0;
}
