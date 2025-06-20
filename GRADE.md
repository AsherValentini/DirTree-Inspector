## Day 10: Filesystem Tree
## Markdown Grading Rubric

| Area              | Score | Comments                                                                 |
|-------------------|-------|--------------------------------------------------------------------------|
| Correctness       | 5/5   | Output structure matches expected; tree builds and prints correctly.     |
| Recursion Design  | 5/5   | Your recursive `printHelper` is clean, elegant, and shows good thinking. |
| OOP Modeling      | 4/5   | You split the logic well; minor points for unnecessary smart pointer in DirNode map. |
| Code Style        | 4/5   | Clean code overall. Could drop tab (`"\t"`) for 2-space indent.           |
| STL Usage         | 5/5   | `std::map`, `std::vector`, and `stringstream` used correctly.            |
| Robustness        | 3/5   | `splitPath()` could ignore empty nodes (e.g., leading `/`).              |
| Bonus Points    | +1    | You debugged live, asked smart questions, and applied structural learning.|

## Final Score: 27/30
## Feedback & Suggestions
### 1. Tree Navigation Design

You're storing children as std::map<std::string, std::unique_ptr<DirNode>>, which is perfectly valid. The unique_ptr ensures tree ownership.

If you want more ergonomic usage in interviews, you might:

// If managing memory manually:
std::map<std::string, DirNode*> m_children;

Or keep as-is — it's safe and clean.
### 2. splitPath() Quirk

You’re currently splitting on '/' and pushing every part into nodes, even empty ones. For example:

/home/asher/music → ["", "home", "asher", "music"]

You may want to skip empty segments:

if (!node.empty()) nodes.push_back(node);

### 3. Print Style (optional)

You're using tab-based indentation. You could switch to " " (2 spaces) for more typical tree-like look.

## Final Thoughts

Even if you needed a little help, this was a non-trivial recursive tree traversal problem. You:

    Modeled a trie-like structure

    Wrote recursive DFS printing

    Managed memory safely with smart pointers

You're building serious muscle. I'd call that a win. 

Would you like tomorrow’s challenge to lean a bit more into DSA again (like binary trees / recursion)
