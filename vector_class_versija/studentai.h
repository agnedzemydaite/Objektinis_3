#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <random>
#include <iomanip>
#include <fstream>

#include "zmogus.h"

using std::string;
using std::vector;
using std::istream;
using std::ostream;

/**
 * @file studentai.h
 * @brief Klasė 'studentas'.
 *
 */

/**
 * @brief Klasė 'studentas', paveldima iš klasės 'zmogus'.
 *
 * Klasė leidžia saugoti studento informaciją:
 * - vardą ir pavardę (paveldima iš zmogus),
 * - pažymius,
 * - egzamino rezultatą,
 * - galutinį balą (vidurkį ir medianą),
 * - namų darbų skaičių,
 * - pažymių sumą.
 *
 * @note Klasėje įgyvendinta Rule of Three (destruktorius, copy konstruktorius, copy assignment).
 */

class studentas: public zmogus {
private:
    vector <int> paz_;  /**< Pažymiai */
    int egz_;           /**< Egzamino rezultatas */
    double gal_vid_;    /**< Galutinis balas, apskaičiuotas pagal vidurkį */
    double gal_med_;    /**< Galutinis balas, apskaičiuotas pagal medianą */
    int n_;             /**< Pažymių skaičius */
    int suma_;          /**< Pažymių suma */
    
public:


    studentas() : zmogus(), egz_(0), n_(0), suma_(0), gal_med_(0), gal_vid_(0) { } /**< Konstruktorius*/
    
    //Reiksmiu gavimas (get'eriai)
    inline string vardas() const { return var_; }
    inline string pavarde() const { return pav_; }
    
    inline int egz() const { return egz_; }
    inline int n() const { return n_; }
    inline int suma() const { return suma_; }
    inline double gal_vid() const { return gal_vid_; }
    inline double gal_med() const { return gal_med_; }
    
    //Įvedimo funkcijos
    void ivest_su_n(); /**< Įveda studentą su žinomu pažymių skaičiumi */
    void ivest_be_n(); /**< Įveda studentą su nežinomu pažymių skaičiumi */
    void rando(); /**< Sugenruoja atsitiktinius studento pažymius ir egzamino rezultatą */
    bool failas(string vardas, string pavarde, string line); /**< Nuskaito studento duomenis iš failo */
    int patikrinimas_n(istream& is); /**< Patikrina įvestą pažymių skaičių */
    int patikrinimas_paz(istream& is); /**< Patikrina įvestą pažymį */
    
    //Skaičiavimai
    void vidurkis(); /**< Apskaičiuoja galutinį balą pagal vidurkį */
    void mediana(); /**< Apskaičiuoja galutinį balą pagal medianą */
    
    // Friend operatoriai
    friend istream& operator>>(istream& is, studentas& s); /**< Įvedimo operatorius*/
    friend ostream& operator<<(ostream& os, const studentas& s); /**< Išvedimo operatorius*/
    
    //RULE OF THREE
    /** Destruktorius */
    ~studentas() {
        paz_.clear();
        gal_vid_ = 0.0;
        gal_med_ = 0.0;
        egz_ = 0;
        n_ = 0;
        suma_ = 0;
    }
    /**Copy konstruktorius */
    studentas(const studentas& kitas)
        : zmogus(kitas.var_, kitas.pav_),
          paz_(kitas.paz_),
          egz_(kitas.egz_),
          gal_vid_(kitas.gal_vid_),
          gal_med_(kitas.gal_med_),
          n_(kitas.n_),
          suma_(kitas.suma_){}
    /** Copy Assignment */
    studentas& operator=(const studentas& kitas) {
        if (this == &kitas) {
            return *this;
        }
        var_ = kitas.var_;
        pav_ = kitas.pav_;
        
        paz_ = kitas.paz_;
        egz_ = kitas.egz_;
        gal_vid_ = kitas.gal_vid_;
        gal_med_ = kitas.gal_med_;
        n_ = kitas.n_;
        suma_ = kitas.suma_;
        return *this;
    }
    
    /** Palyginimo operatorius */
    bool operator==(const studentas& kitas) const{
        return var_ == kitas.var_
        && pav_     == kitas.pav_
        && paz_     == kitas.paz_
        && egz_     == kitas.egz_
        && gal_vid_ == kitas.gal_vid_
        && gal_med_ == kitas.gal_med_
        && n_       == kitas.n_
        && suma_    == kitas.suma_;
    }
    
    //Funkcijos testams
    void setVar(const string& var) { var_ = var; } /**< Studentui priskiria vardą*/
    void setPav(const string& pav) { pav_ = pav; } /**< Studentui priskiria pavardę*/
    void setPaz(const vector<int>& paz) { paz_ = paz; } /**< Studentui priskiria pažymius*/
    void setEgz(const int& egz) { egz_ = egz; } /**< Studentui priskiria egzamino įvertinimą*/
    void setSuma(const double& suma) { suma_ = suma; } /**< Studentui priskiria pažymių sumą*/
    void setN(const double& n) { n_ = n; } /**< Studentui priskiria pažymių kiekį*/
    


};

/**
 * @brief Įvesties režimas: rankinis ar generuojamas.
 */
enum class ivestis_rezimas {rankinis, generuojamas};
extern ivestis_rezimas ivestis;

/**
 * @brief Išvedimo režimas: pagal vidurkį, medianą ar abu.
 */
enum class isvesties_rezimas {vidurkis, mediana, abu};
extern isvesties_rezimas isvestis;

/**
 * @brief Funkcija demonstracijai Rule of Three.
 *
 * @note Paskirta parodyti kopijavimo ir priskyrimo veikimą.
 */
void rule_of_three();
