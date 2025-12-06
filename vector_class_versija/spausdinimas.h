#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>

#include "studentai.h"
/**
 * @file spausdinimas.h
 * @brief Studentų duomenų spaudinimo funkcijos.
 *
 */

/**
 * @brief Atspausdina studentų vardus, pavardes ir galutinį rezultatą.
 *
 * Funkcija leidžia atspausditni studentus su galutiniu balu, apskaičiuotu pagal:
 * - 1 - vidurkį,
 * - 2 - medianą,
 * - 3 - abu variantus.
 *
 * @param studentai [in]  vecktorius studentų, kuriuos reikia atspausdinti.
 * @param pasirinkimas [in] spasudinimo kriterijus:
 *      - 1 - vidurkis,
 *      - 2 - mediana,
 *      - 3 - abu variantai.
 */
void spausdinimas(vector<studentas> & studentai, int pasirinkimas);
/**
 * @brief Atspausdina studentų vardus, pavardes ir galutinį rezultatą į failą.
 *
 * Funkcija leidžia atspausdinti studentus su galutiniu balu, apskaičiuotu pagal:
 * - 1 – vidurkį,
 * - 2 – medianą,
 * - 3 – abu variantus.
 *
 * @param studentai [in] Vektorius studentų, kuriuos reikia atspausdinti.
 * @param pav [in] Failo pavadinimas, į kurį bus rašomi duomenys.
 * @param pasirinkimas [in] Spausdinimo kriterijus:
 *        - 1 – vidurkis,
 *        - 2 – mediana,
 *        - 3 – abu variantus.
 */
void spausd_f(vector <studentas> studentai, string pav, int pasirinkimas);
/**
 * @brief Atspausdina studentų vardus, pavardes ir vietą atmintyje.
 *
 * Funkcija leidžia pamatyti, kur atmintyje saugomi kiekvieno studento objektai.
 *
 * @param studentai [in] Vektorius studentų, kuriuos reikia atspausdinti.
 */
void vieta_atmintyje(vector <studentas> studentai);
