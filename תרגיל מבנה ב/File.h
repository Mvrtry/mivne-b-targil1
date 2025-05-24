#ifndef FILE_H
#define FILE_H
using namespace std;

#include "NodeRecord.h"
#include <string>

class File : public NodeRecord<string> {
private:
    string name;
    string content;

public:
    File(const string& name);
    ~File();
    string getKey() const override;
    string getType() const override;
    string getContent() const;

    bool canHaveChildren() const override;
    void appendContent(const string& newContent);
    bool deleteSubstring(const string& toDelete);
};

#endif  // FILE_H
