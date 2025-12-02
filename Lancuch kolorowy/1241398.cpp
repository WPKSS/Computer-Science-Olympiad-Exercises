#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector<int> pom(m); //pomocnicza tablica
    for(auto& a: pom) cin >> a;
    vector<int> ile(n+1, 0); //wlasciwa tablica
    long long suma_ile = 0; //suma ilosci
    for(int i = 0; i < m; i++) {
        int col; cin >> col;
        ile[col] = pom[i];
        suma_ile += pom[i];
    }
    pom.clear();
    vector<int> tab(n);
    for(auto& a: tab) cin >> a;
    int wynik = 0;
    if(suma_ile > n) { cout << wynik; return 0; }
    //bierzemy pierwsze suma_ile elementow
    int ile_dobrych = 0, ile_zlych = 0;
    vector<int> zlicz(n+1, 0); //licznik dla ciągu
    for(int i = 0; i < suma_ile; i++) {
        if(ile[tab[i]] > zlicz[tab[i]]) ile_dobrych++;
        else ile_zlych++;
        zlicz[tab[i]]++;
    }
    for(int i = suma_ile-1; i < n; i++) {//i to indeks ostatniego elementu dla ciagu/
        //najpierw sprawdzamy liczniki bo mamy juz obliczona tablice dla zakresu [i-suma_ile+1, i]
        if(ile_dobrych == suma_ile && ile_zlych == 0) wynik++;
        //ogarniamy przesuniecie ciagu w prawo
        if(i + 1 == n) break;
        //tab[i-suma_ile+1] - usun
        //tab[i+1] - dodaj
        int us = tab[i-suma_ile+1], dod = tab[i+1];
        if(ile[us] < zlicz[us]) ile_zlych--;
        else ile_dobrych--;// !!!
        zlicz[us]--;
        if(ile[dod] > zlicz[dod]) ile_dobrych++;
        else ile_zlych++;
        zlicz[dod]++;
    }
    cout << wynik;
    /*jakies takie pijane to zadanko, nie lubie go*/
}