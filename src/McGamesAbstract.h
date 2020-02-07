#ifndef PANDORY_MCGAMESABSTRACT_H
#define PANDORY_MCGAMESABSTRACT_H

#include <string>

class McGamesAbstract {
protected:
    std::string emulatorName;
    std::string romName;
    std::string romDescription;
    std::string language;
    int year;
    std::string romDeveloper;
    std::string romPath;

public:
    virtual void generate(std::string filename) = 0;
    void setLanguage(const std::string &language);
    void setYear(int year);
    void setRomPath(const std::string &romPath);
    void setRomDeveloper(const std::string &romDeveloper);
    void setEmulatorName(const std::string &emulatorName);
    void setRomName(const std::string &romName);
    void setRomDescription(const std::string &romDescription);
};


#endif //PANDORY_MCGAMESABSTRACT_H