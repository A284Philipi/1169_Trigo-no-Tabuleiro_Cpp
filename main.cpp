#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int casos, cont = 0, casas, kg, graos = 1, cont2 = 0, inter;
    cin >> casos;
    while (cont < casos){
        cin >> casas;
        if (casas == 63 || casas == 64){
            if (casas == 64){
                cout << "1537228672809129 kg" <<endl;
            }else{
                cout << "768614336404564 kg" <<endl;
            }
        }else{
            cont2 = 0;
            inter = 0;
            while (cont2 < casas){
                if (cont2 == 0){
                    graos = 1;
                    inter = 1;
                }else{
                    graos = graos * 2;
                    inter = inter + graos;
                }
                cont2++;
            }
            kg = inter / 600;
            kg = kg / 20;
            cout << kg << " kg" <<endl;
        }
        cont++;
    }
    return 0;
}
