#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <chrono>

#include "studentai.h"
#include "balu_vardu_meniu_ivestys.h"

/**
 * @file ivestys.h
 * @brief Studento duomenų įvedimo funkcijos.
 *
 */

/**
 * @brief Nuskaito studentų duomenis iš failo.
 * @param studentai [out] vektorius į kurį įrašomi nuskaityti studentai.
 * @param stud_n [out] nuskaitytų studentų skaičius.
 * @param pav [in] failo pavadinimas, iš kurio nuskaitomi studentų duomenys.
 * @param testavimas [out] studentų nuskaitymo laikas milisekundėmis.
 */
void ivest_f(vector <studentas> & studentai, int & stud_n, string & pav, double & testavimas);
/**
 * @brief Nuskaito studentų duomenis iš komandinės eilutės.
 * Funkcija leidžia įvesti studentų duomenis įvairiais režimais:
 * - su žinomu pažymių  skaičiumi,
 * - su nežinomu pažymių skaičiumi,
 * - automatiškai sugeneruotais balais.
 *
 * @param studentai [out] vektorius į kurį įrašomi nuskaityti studentai.
 * @param n [out] studentų skaičius.
 * @param funkc [in] funkcija, pagal, kurią nuskaitome studentus.
 * @note Funkcija kviečia perduotą funkciją `funkc` kiekvienam studentui.
 */
void stud_iv(vector <studentas> & studentai, int & n, studentas (*funkc)());

