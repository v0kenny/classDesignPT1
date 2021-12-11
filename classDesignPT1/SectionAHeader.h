#include <string>
class URLparser {
private:
    std::string URL;
    std::string scheme;
    std::string auth;
    std::string path;
public:
    URLparser(std::string inputedURL);

    std::string getURL();
    std::string getScheme();
    std::string getAuthority();
    std::string getPath();

}; 
