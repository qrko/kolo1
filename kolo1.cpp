// Arkadiusz Machnik, Informatyka (Zintegrowane systemy zarzadzania i analizy danych), 101519

#include <iostream>
using namespace std;

void pytanie()
{
  cout<<"Q1) Jak wyswietlic roznice miedzy drugim a trzecim zatwierdzeniem wykonanym w galezi master?"<<endl;
  cout<<"A1) git diff HEAD^^ HEAD^^^"<<endl;
  cout<<"Q2) Co sie zmienilo?"<<endl;
  cout<<"A2) zmienil sie punkt pierwszy (rperlinski/kolo1 na kolo1/kolo1)"<<endl;
}

int main(int argc, char **argv) {
  cout<<"I don't like git"<<endl;
  return 0;
}

