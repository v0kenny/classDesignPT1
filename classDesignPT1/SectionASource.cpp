#include <iostream>
#include <string>
#include "SectionAHeader.h"

URLparser::URLparser(std::string inputedURL)
    :URL{ inputedURL } 
    {
    }

std::string URLparser::getURL() {
     return URL;
}

std::string URLparser::getScheme() {
    scheme = URL.substr(0, URL.find_first_of("/"));

    return scheme;
}

std::string URLparser::getAuthority() {
    int x = 0;
    int index = 0;
    for (int i = 0; i < URL.length(); i++) {
        if (URL[i] == '/') {
            x += 1;
        }

        if (x == 3) {
            break;
        }
        index += 1;
    }
    auth = URL.substr(URL.find_first_of("//") + 2, index - URL.find("/"));

    return auth;
}

std::string URLparser::getPath() {
    int x = 0;
    int index = 0;
    for (int i = 0; i < URL.length(); i++) {
        if (URL[i] == '/') {
            x += 1;
        }

        if (x == 3) {
            break;
        }
        index += 1;
    }
    path = URL.substr(index, URL.length());

    return path;
}

