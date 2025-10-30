#include <iostream>
using namespace std;







float FtoC(float stopnie); //prototyp funkcji Fahr to Celsius (FtoC)
//float FtoC(float); //alternatywna wersja prototypu, bez nazw zmiennych
float FtoK(float stopnie);
float CtoF(float stopnie);
float CtoK(float stopnie);
float KtoC(float stopnie);
float KtoF(float stopnie);

float CtoF(float stopnie) {
	float C = stopnie;
    float wynik = C * (9.0 / 5.0) + 32.0;
    return wynik;
}
float CtoK(float stopnie) {
	float C = stopnie;
    float wynik = C + 273.15;
    return wynik;
}
float FtoC(float stopnie) { //naglowek funkcji
	float F = stopnie;
    float wynik = (5.0 / 9.0) * (F - 32.0);
    return wynik;
}
float FtoK(float stopnie) {
	float F = stopnie;
    float wynik = (F + 459.67) * (5.0 / 9.0);
    return wynik;
}
float KtoC(float stopnie) {
	float K = stopnie;
    float wynik = K - 273.15;
    return wynik;
}
float KtoF(float stopnie) {
	float K = stopnie;
    float wynik = K * (9.0 / 5.0) - 459.67;
    return wynik;
}





int main() { //kod 04_02
	float stopnie;

    int wybor;
    cout << "Wybierz przeliczenie (wpisz numer):\n";
    cout << "1. Fahr -> Celsius\n";
    cout << "2. Fahr -> Kelwin\n";
    cout << "3. Celsius -> Fahr\n";
    cout << "4. Celsius -> Kelwin\n";
    cout << "5. Kelwin -> Celsius\n";
    cout << "6. Kelwin -> Fahr\n";
    cout << "Twoj wybor: ";
    cin >> wybor;

	cout << "Podaj temperature do przeliczenia: ";
	cin >> stopnie;

    
    switch (wybor) {
    case 1:
        cout << "przelicz Fahr -> Celsius " << FtoC(stopnie) << endl;
        break;
    case 2:
        cout << "przelicz Fahr -> Kelwin " << FtoK(stopnie) << endl;
        break;
    case 3:
        cout << "przelicz Celsius -> Fahr " << CtoF(stopnie) << endl;
		break;
    case 4:
		cout << "przelicz Celsius -> Kelwin " << CtoK(stopnie) << endl;
		break;
    case 5:
		cout << "przelicz Kelwin -> Celsius " << KtoC(stopnie) << endl;
		break;
	case 6:
		cout << "przelicz Kelwin -> Fahr " << KtoF(stopnie) << endl;
		break;
    default:
        cout << "Nieznana opcja." << endl;
    }


}

