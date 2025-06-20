#pragma once
#include <string>
#include <memory>
#include <vector>
#include <map>

struct DirNode {
  std::map<std::string, std::unique_ptr<DirNode>> m_children;
};