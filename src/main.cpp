#include <iostream>

#include "dir_inspector.hpp"

int main() {
  auto dir = std::make_unique<DirInspector>();

  std::vector<std::string> paths{"/home/asher/docs/resume.pdf", "/home/asher/music/rock/song1.mp3",
                                 "/home/asher/music/jazz/song2.mp3", "/var/log/syslog",
                                 "/home/asher/docs/taxes/2023/report.xlsx"};

  for (auto& path : paths) {
    dir->add(path);
  }

  dir->print();

  return 0;
}

