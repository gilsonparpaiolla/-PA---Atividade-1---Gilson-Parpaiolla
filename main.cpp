//Gilson Luiz Pimentel Parpaiolla
//Programação Aplicada - Atividade 1
//Problema 2
#include <iostream>
#include <string>

using namespace std;
string palavra;

void EscreverLetras(){
   for (int i =0; i < palavra.length(); i++){

   if(palavra[i] == 'a' ){
      cout << "#2=1"<< endl;
    }else if (palavra[i] == 'b'){
      cout<<"#2=2"<< endl;
    }else if (palavra[i] == 'c'){
      cout<<"#2=3"<< endl;
    }

    if(palavra[i] == 'd'){
      cout << "#3=1"<< endl;
    }else if (palavra[i] == 'e'){
      cout<<"#3=2"<< endl;
    }else if (palavra[i] == 'f'){
      cout<<"#3=3"<< endl;
    }

    if(palavra[i] == 'g'){
      cout << "#4=1"<< endl;
    }else if (palavra[i] == 'h'){
      cout<<"#4=2"<< endl;
    }else if (palavra[i] == 'i'){
      cout<<"#4=3"<< endl;
    }

    if(palavra[i] == 'j'){
      cout << "#5=1"<< endl;
    }else if (palavra[i] == 'k'){
      cout<<"#5=2"<< endl;
    }else if (palavra[i] == 'l'){
      cout<<"#5=3"<< endl;
    }

    if(palavra[i] == 'm'){
      cout << "#6=1"<< endl;
    }else if (palavra[i] == 'n'){
      cout<<"#6=2"<< endl;
    }else if (palavra[i] == 'o'){
      cout<<"#6=3"<< endl;
    }

    if(palavra[i] == 'p'){
      cout << "#7=1"<< endl;
    }else if (palavra[i] == 'q'){
      cout<<"#7=2"<< endl;
    }else if (palavra[i] == 'r'){
      cout<<"#7=3"<< endl;
    }else if (palavra[i] == 's'){
      cout << "#7=4" << endl;
    }

    if(palavra[i] == 't'){
      cout << "#8=1"<< endl;
    }else if (palavra[i] == 'u'){
      cout<<"#8=2"<< endl;
    }else if (palavra[i] == 'v'){
      cout<<"#8=3"<< endl;
    }

    if(palavra[i] == 'w'){
      cout << "#9=1"<< endl;
    }else if (palavra[i] == 'x'){
      cout<<"#9=2"<< endl;
    }else if (palavra[i] == 'y'){
      cout<<"#9=3"<< endl;
    }else if( palavra[i] == 'z'){
      cout << "#9=4" << endl;
    }
  }
}

int main() {
string loop="s";
 while (loop == "s"){
 cout << "Digite uma palavra com até 50 letras:" << endl;
 cin >> palavra;

  if (palavra.length() < 50){
    cout << "A palavra digitada é: " << palavra << endl;
	EscreverLetras();
  }
  else{
  cout << "O limite é 50 letras." << endl;
  }
  cout << "Gostaria de digitar outra palavra? s/n"<< endl;
  cin >> loop;
  }
  
}