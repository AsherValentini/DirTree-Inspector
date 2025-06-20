#pragma once
#include <string>
#include <memory>
#include <vector>

struct DirNode {

  std::string m_name;
  std::vector<std::unique_ptr<DirNode>> m_children;

  DirNode(std::string name) : m_name(name) {}
};