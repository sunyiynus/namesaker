#ifndef __NAMESAKER_FILEWALKER_HPP
#define __NAMESAKER_FILEWALKER_HPP


#include <string>

class FileWalker {
public:
    FileWalker(const std::string& workspaceroot):workspaceRoot (workspaceroot) {}


private:
    const std::string workspaceRoot;
};

#endif //__NAMESAKER_FILEWALKER_HPP 