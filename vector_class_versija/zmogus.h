#pragma once
#include <iostream>
#include <string>

using std::string;

/**
 * @file zmogus.h
 * @brief Klasė 'zmogus'.
 *
 */

/**
 * @brief Bazinė abstrakti klasė, reprezentuojanti žmogų.
 *
 * Klasė saugo vardą ir pavardę bei numato virtualias funkcijas jų gavimui.
 */

class zmogus{
protected:
    string var_; /**< Vardas */
    string pav_; /**< Pavardė */
    
public:
    /**
     * @brief Konstruktorius.
     * Vardas ir Pavardė tuščios eilutės.
     */
    zmogus(): var_(""), pav_("") {}
    
    /**
     * @brief Konstruktorius su parametrais.
     * @param vardas Žmogaus vardas.
     * @param pavarde Žmogaus pavardė.
     */
    zmogus(const string& vardas, const string& pavarde): var_(vardas), pav_(pavarde) {}
    
    virtual string vardas() const = 0; /**< Grąžina žmogaus vardą */
    virtual string pavarde() const = 0; /**< Grąžina žmogaus pavardę */
    
    /**Destruktorius */
    virtual ~zmogus() {
            var_.clear();
            pav_.clear();
    }
    
};
