#include <iostream>

using namespace std; // bruker standard navnerom


double read_from_user(int count) {
  cout << "Temperatur nr " << count + 1 << ": ";
  double returnNumber;
  cin >> returnNumber;
  return returnNumber;
}

int main() {
  const int length = 5;

  int underTi;
  int mellomTiogTjue;
  int overTjue;
  double temperatures[length];

  cout << "Du skal skrive inn 5 temperaturer." << endl;

  
  for (int i = 0; i < length; i++)
  {
    temperatures[i] = read_from_user(i);
    if (temperatures[i] < 10)
    {
      underTi++;
    }else if (temperatures[i] >=10 && temperatures[i] <= 20)
    {
      mellomTiogTjue++;
    }else if (temperatures[i] > 20)
    {
      overTjue++;
    }
    
    
    
  }
  cout << "Antall under 10 er " << underTi << endl;
  cout << "Antall mellom 10 og 20 inkludert 10 og 20 er " << mellomTiogTjue  << endl;
  cout << "Antall over 20 er " << overTjue  << endl;
}
