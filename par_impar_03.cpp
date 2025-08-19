 #include <iostream>
 using namespace std;


 int main(){

  int vetorEx[15];
  string resposta;

  cout << "P ou I" << endl;
  cin >> resposta;

  if (resposta == "P") {
      for(int i=2;i <=15;i+=2){
        vetorEx[i] = i;
        cout << vetorEx[i] <<", ";
    }
  }
  else{
    for(int i=1;i <=15;i+=2){
        vetorEx[i] = i;
        cout << vetorEx[i] << ", ";
    }
  }


    return 0;
 }
