# "DirTree Inspector" 

## Challenge Overview

You're building a directory tree analyzer. Given a list of file paths like:

{
  "/home/asher/docs/resume.pdf",
  "/home/asher/music/rock/song1.mp3",
  "/home/asher/music/jazz/song2.mp3",
  "/var/log/syslog",
  "/home/asher/docs/taxes/2023/report.xlsx"
}

Construct an in-memory directory tree representation. Then print it in a human-readable indented format:

/
├── home
│   └── asher
│       ├── docs
│       │   ├── resume.pdf
│       │   └── taxes
│       │       └── 2023
│       │           └── report.xlsx
│       └── music
│           ├── jazz
│           │   └── song2.mp3
│           └── rock
│               └── song1.mp3
└── var
    └── log
        └── syslog

## Requirements

    Model each node as a class or struct (DirNode?) with a name and child directories/files.

    Tree can be implemented with maps or vectors.

    Preserve lexicographic order within each level (use std::map?).

    A recursive print() or traverse() would be natural here.

## Bonus (Optional)

    Add bool isFile to distinguish files from folders.

    Add a method to count how many files exist in a given directory (including subfolders).

    Support find("resume.pdf") to return the full path(s) to all matches.


