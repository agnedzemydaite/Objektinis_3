#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "studentai.h"

/**
 * @file papildomos_funkcijos.h
 * @brief  Funkcija patikrinti ar įvestis yra natūralusis skaičius bei rikiavimo ir rūšiavimo funkcijos.
 *
 */

/**
 * @brief Patikrina ar pateikta eilutė yra natūralusis skaičius.
 * @param i eilutė.
 * @return true, jei eilutė yra skaičius; false, jei ne.
 */
bool arskaicius(string i);
/**
 * @brief Surikiuoja studentus, pagal parinktą kriterijų.
 *
 * Funkcija leidžia rikiuoti studentus pagal šiuos kriterijus:
 * - vardą,
 * - pavardę,
 * - galutinį balą, apskaičiuotą pagal vidurkį,
 * - galutinį balą, apskaičiuotą pagal medianą.
 *
 * @param studentai [in,out] vektorius studentų, kuris bus surikiuotas.
 * @param pasirinkimas [in] rikiavimo kriterijus:
 *      - 1 - pagal vardą,
 *      - 2 - pagal pavardę,
 *      - 3 - pagal galutinį balą (vidurkis),
 *      - 4 - pagal galutinį balą (mediana).
 */
void rikiavimas(vector<studentas> & studentai, int pasirinkimas);
/**
 * @brief Suskirsto studentus į dvi grupes: vargšiukus ir kietiakus.
 *
 * Funkcija leidžia suskirstyti studentus pagal galutinį balą:
 * - apskaičiuotą pagal vidurkį,
 * - apskaičiuotą pagal medianą.
 *
 * @param studentai [in] vektorius studentų, kuris bus padalintas į dvi naujas grupes.
 * @param vargsai [out] vektorius studentų, kurių galutinis balas < 5.
 * @param kieti [out] vektorius studentų, kurių galutinis balas >= 5.
 * @param pasirinkimas [in] rikiavimo kriterijus:
 *      - 1 - pagal galutinį balą (vidurkis),
 *      - 2 - pagal galutinį balą (mediana).
 */
void rusiavimas_strat1(vector <studentas> & studentai, vector <studentas> & vargsai, vector <studentas> & kieti, int & pasirinkimas);

/**
 * @brief Suskirsto studentus į dvi grupes: vargšiukus ir kietiakus.
 *
 * Funkcija leidžia suskirstyti studentus pagal galutinį balą:
 * - apskaičiuotą pagal vidurkį,
 * - apskaičiuotą pagal medianą.
 *
 * @param studentai [in,out] vektorius studentų, kuris bus padalintas į dvi naujas grupes.
 *      Jame paliekami studentai, kurių galutinis balas >= 5.
 * @param vargsai [out] vektorius studentų, kurių galutinis balas < 5.
 * @param pasirinkimas [in] rikiavimo kriterijus:
 *      - 1 - pagal galutinį balą (vidurkis),
 *      - 2 - pagal galutinį balą (mediana).
 */
void rusiavimas_strat2(vector <studentas> & studentai, vector <studentas> & vargsai, int & pasirinkimas);
/**
 * @brief Suskirsto studentus į dvi grupes: vargšiukus ir kietiakus.
 *
 * Funkcija leidžia suskirstyti studentus pagal galutinį balą:
 * - apskaičiuotą pagal vidurkį,
 * - apskaičiuotą pagal medianą.
 *
 * @param studentai [in] vektorius studentų, kuris bus padalintas į dvi naujas grupes.
 * @param vargsai [out] vektorius studentų, kurių galutinis balas < 5.
 * @param kieti [out] vektorius studentų, kurių galutinis balas >= 5.
 * @param pasirinkimas [in] rikiavimo kriterijus:
 * - 1 - pagal galutinį balą (vidurkis),
 * - 2 - pagal galutinį balą (mediana).
 * @note patobulinta 1 rušiavimo strategija.
 */
void rusiavimas_strat3(vector <studentas> & studentai, vector <studentas> & vargsai, vector <studentas> & kieti, int & pasirinkimas);
