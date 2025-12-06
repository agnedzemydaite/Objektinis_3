#include "spausdinimas.h"

using std::vector;
using std::string;
using std::cout;
using std::setw;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;
using std::endl;
using std::ofstream;
using std::ostringstream;
using std::ios;
using std::to_string;

void spausdinimas(vector<studentas> & studentai, int pasirinkimas){
    cout << setw(15) << left << "Vardas" << setw(20) << left << "Pavarde";
    
    if (pasirinkimas == 1) {
        isvestis = isvesties_rezimas::vidurkis;
        cout << setw(17) << left << "Galutinis (Vid.)" << endl;
        for(int i = 0; i < 51; i++) cout << "-";
        cout << endl;
        for(auto s:studentai){
            cout << s;
        }
    }
    else if (pasirinkimas == 2) {
        isvestis = isvesties_rezimas::mediana;
        cout << setw(17) << left << "Galutinis (Med.)" << endl;
        for(int i = 0; i < 51; i++) cout << "-";
        cout << endl;
        for(auto s:studentai){
            cout << s;
        }
    }
    else if (pasirinkimas == 3) {
        isvestis = isvesties_rezimas::abu;
        cout << setw(17) << left << "Galutinis (Vid.) " << setw(17) << left << "Galutinis (Med.)" << endl;
        for(int i = 0; i < 69; i++) cout << "-";
        cout << endl;
        for(auto s:studentai){
            cout << s;
        }
    }
}

void spausd_f(vector<studentas> studentai, string pav, int pasirinkimas) {
    pav = pav + ".txt";
    ofstream fout(pav, ios::out | ios::binary);
    ostringstream oss;
    //Antraste
    oss << setw(15) << left << "Vardas"
             << setw(20) << left << "Pavarde";
    if(pasirinkimas == 1){
        oss << setw(17) << left << "Galutinis (Vid.)" << "\n";
    }
    else if(pasirinkimas == 2){
        oss << setw(17) << left << "Galutinis (Med.)" << "\n";
    }
    else if(pasirinkimas == 3){
        oss << setw(17) << left << "Galutinis (Vid.) " << setw(17) << left << "Galutinis (Med.)" << "\n";
    }
    
    //Studentai
    for (const auto& s: studentai) {
        if (pasirinkimas == 1) {
            isvestis = isvesties_rezimas::vidurkis;
            oss << s;
        }
        else if (pasirinkimas == 2) {
            isvestis = isvesties_rezimas::mediana;
            oss << s;
        }
        else if (pasirinkimas == 3) {
            isvestis = isvesties_rezimas::abu;
            oss << s;
        }
    }
    
    string buffer = oss.str();

    if (!buffer.empty()) {
        fout.write(buffer.data(), buffer.size());
    }
    fout.close();
}

void vieta_atmintyje(vector <studentas> studentai){
    cout << setw(15) << left << "Vardas" << setw(20) << left << "Pavarde" << setw(16) << left << "Vieta atmintyje" << endl;
    for(int i = 0; i < 51; i++) cout << "-";
    cout << endl;
    for(auto &s: studentai){
        cout <<setw(15) << left << s.vardas() << setw(20) << left << s.pavarde() << setw(16) << left << &s << endl;

    }
    cout << endl;
}
