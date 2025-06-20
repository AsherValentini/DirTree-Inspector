#pragma once
#include <map>
#include <algorithm>
#include <sstream>
#include "dir_node.hpp"

class DirInspector {
public:
  DirInspector() { m_root = std::make_unique<DirNode>(); }
  void add(std::string& dir) {

    DirNode* current = m_root.get();

    for (auto& node : splitPath(dir)) {

      if (current->m_children.count(node)) {
        current = current->m_children[node].get();
      } else {
        current->m_children[node] = std::make_unique<DirNode>();
        current = current->m_children[node].get();
      }
    }
  }

  std::vector<std::string> splitPath(std::string& path) {
    std::vector<std::string> nodes;
    std::stringstream ss(path);
    std::string node;
    while (getline(ss, node, '/')) {
      nodes.push_back(node);
    }
    return nodes;
  }
  void print() {
    DirNode* current = m_root.get();
    printHelper("", current);
  }

  void printHelper(const std::string& indent, const DirNode* node) const {

    for (const auto& [name, child] : node->m_children) {
      std::cout << indent << name << std::endl;
      printHelper(indent + "	", child.get());
    }
  }

private:
  std::unique_ptr<DirNode> m_root;
};