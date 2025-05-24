#include "File.h"

File::File(const string& name) : name(name), content("") {}

File::~File() {}

string File::getKey() const {
    return name;
}

string File::getType() const {
    return "File";
}

bool File::canHaveChildren() const {
    return false;
}

void File::appendContent(const string& newContent) {
    // TODO: complete

}

bool File::deleteSubstring(const string& toDelete) {
    // TODO: complete
    return false;
}

string File::getContent() const {
    return content;
}
