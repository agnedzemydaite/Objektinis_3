#pragma once
#include <iostream>
#include <string>

#include "papildomos_funkcijos.h"

/**
 * @file balu_vardu_meniu_ivestys.h
 * @brief Studento balų, vardo, pavardės ir meniu pasirinkimo įvedimo funkcijos.
 *
 */

/**
 * @brief Nuskaito įvesties eilutę ir patikrina ar tai sveikasis skaičius intervale [0;10].
 * @param i įvesta eilutė.
 * @return skaičius.
 * @note Jei įvestis neteisinga, funkcija praneša apie klaidą ir prašo įvesti iš naujo.
 */
int skaiciu_iv(string i);
/**
 * @brief Nuskaito įvesties eilutę ir patikrina ar tai sveikasis skaičius >= 0.
 * @param i įvesta eilutė.
 * @return skaičius.
 * @note Jei įvestis neteisinga, funkcija praneša apie klaidą ir prašo įvesti iš naujo.
 */
int n_iv(string i);
/**
 * @brief Nuskaito įvesties eilutę ir patikrina ar ji netuščia.
 * @note Jei įvestis tuščia, funkcija praneša apie klaidą ir prašo įvesti iš naujo.
 */
string vardo_iv();
/**
 * @brief Nuskaito įvesties eilutę ir patikrina ar tai sveikasis skaičius, pateiktame intervale.
 * @param min_r intervalo pradžia.
 * @param max_r intervalo pabaiga.
 * @return skaičius.
 * @note Jei įvestis neteisinga, funkcija praneša apie klaidą ir prašo įvesti iš naujo.
 */
int pasirink_iv(int min_r, int max_r);
