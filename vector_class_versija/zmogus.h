#pragma once
#include <iostream>
#include <string>

using std::string;

class zmogus{
protected:
    string var_;
    string pav_;
    
public:
    zmogus(): var_(""), pav_("") {}
    zmogus(const string& vardas, const string& pavarde): var_(vardas), pav_(pavarde) {}
    
    virtual string vardas() const = 0;
    virtual string pavarde() const = 0;
    
    //Destruktorius
    virtual ~zmogus() {
            var_.clear();
            pav_.clear();
    }
    
};
