#include <bits/stdc++.h>

using namespace std;

int main(){
    double volume, diametro;
    double pi = 3.14;
    while(scanf("%lf %lf", &volume, &diametro) != EOF){
        double raio, altura, area;

        raio = diametro/2;

        altura = volume/(pi*pow(raio, 2.0));
        area = pi*raio*raio;

        cout << fixed << setprecision(2);
        cout << "ALTURA = " << altura  << endl;
        cout << "AREA = " << area << endl;

        //printf("ALTURA = %.2lf\nAREA = %.2lf\n", altura, area);
    }

    return 0;
}