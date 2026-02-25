#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
   
   Rectangle Q1;

   double x1, y1, x2, y2;
   cout << "Введіть,будь ласка,координатy x1"<< endl;
   cin >> x1;
   cout << "Введіть,будь ласка,координатy y1"<<endl;
   cin >> y1;
   cout << "Введіть,будь ласка,координатy x2"<<endl;
   cin >> x2;
   cout << "Введіть,будь ласка,координатy y2"<<endl;
   cin >> y2;

   Rectangle Q2(x1, y1, x2, y2);
   Rectangle Q3(Q2);

   cout <<"Початкові прямокутники:"<<endl;
   cout << "Q2: " << Q2.GetInformation() << endl;
   cout << "Q3: " << Q3.GetInformation() << endl;

   Q2 = Q2 / 2;
   cout << "Q2 після ділення на 2: " << Q2.GetInformation() << endl;

   Q1 = Q3 - Q2;
   cout << "Q1 після Q3 - Q2 " << Q1.GetInformation() << endl;

   cout <<"Значення всіх прямокутників :"<<endl;
   cout << "Q1: " << Q1.GetInformation() << endl;
   cout << "Q2: " << Q2.GetInformation() << endl;
   cout << "Q3: " << Q3.GetInformation() << endl;
}