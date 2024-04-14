
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
    for(int i=0; i<=s1.size(); ++i ){
    if(s1[i]==' '){
      cout << i << endl;
    }
  }
  cout << s1.size() << endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
  string word ="";
  string caracter;
  int fin;
  fin = s1.size();
    for(int i=0; i<=s1.size(); ++i ){
    caracter = s1[i];
    if (s1 == "" || s1 == " ") {
      cout << "";
    }
    else if (caracter == " " || i == fin) {
      cout << "["<< word << "]" << endl ;
      word = "";
    }
    else {
      word = word + caracter;
    }
  }
  
}

void exercise_3(string s1) {
  //  TODO: YOUR CODE HERE
  for ( int i = 0 ; i < 20; ++i) {
    string caracter;
    caracter = s1[i];
      if (caracter ==" ") {
        cout << "";
      }
      else if (caracter == "1") {
        cout << "Om-nom-nom :P" << endl;
      }
      else if (caracter == "0") {
        cout << "No cake :(" << endl;
        break;
      }
    }
  }

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
  if (n > 0 && n<=14 && n != 1) {
    int i;
    i = n-1;
    int result;
    result = n* i;
    int factor;
    factor = i - 1;
    for ( factor ; factor > 0 ; --factor) {
      result= result * factor;
      if (factor == 1) {
        cout << result << endl;
      }
    }
  }
  else if (n > 14 ) {
    cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  }
  else if (n == 1) {
    cout << "1" << endl;
  }
  else if ( n == 0) {
    cout << "1" << endl;
  }
  else {
    cout <<"El numero es negativo. Intentelo de nuevo" << endl;
  }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
  string word;
  word = "";
  string espacios;
  string i1;
  int inicios;
  if (n == 1) {
    cout << " 1  2  3  4  5  6  7" << endl;
    for(int i = 8 ; i <= k ; ++i) {
      if (i < 8 && i != 1) {
        i1 = to_string(i);
        espacios = "  ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if(i < 15 && i >= 8 || i == 8 ) {
        i1 = to_string(i);
        espacios = " ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if( i >= 15) {
          inicios = (i-1) % 7;
          i1 = to_string(i);
          espacios = " ";
          if (inicios == 0) {
              word = word + i1;
          }
          else {
              word = word + espacios + i1;
              if (word.size() == 20) {
                  cout << word << endl;
                  word = "";
              }
              else if( i == k) {
                  cout << word << endl;
              }
          }
      }
    }
  }
  else if (n == 2) {
    cout << "    1  2  3  4  5  6" << endl;
    for(int i = 7 ; i <= k ; ++i) {
      if (i < 7 && i != 2) {
        i1 = to_string(i);
        espacios = "  ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if(i < 14 && i >= 7 ) {
        i1 = to_string(i);
        espacios = " ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if( i >= 14) {
          inicios = (i) % 7;
          i1 = to_string(i);
          espacios = " ";
          if (inicios == 0) {
              word = word + i1;
          }
          else {
              word = word + espacios + i1;
              if (word.size() == 20) {
                  cout << word << endl;
                  word = "";
              }
              else if( i == k) {
                  cout << word << endl;
              }
          }
      }
    }
  }
  else if (n == 3) {
    cout << "       1  2  3  4  5" << endl;
    for(int i = 6 ; i <= k ; ++i) {
      if (i < 6 && i != 1) {
        i1 = to_string(i);
        espacios = "  ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if(i < 13 && i >= 6 || i == 6 ) {
        i1 = to_string(i);
        espacios = " ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if( i >= 13) {
          inicios = (i-6) % 7;
          i1 = to_string(i);
          espacios = " ";
          if (inicios == 0) {
              word = word + i1;
          }
          else {
              word = word + espacios + i1;
              if (word.size() == 20) {
                  cout << word << endl;
                  word = "";
              }
              else if( i == k) {
                  cout << word << endl;
              }
          }
      }
    }
  }
  else if( n == 4) {
    cout << "          1  2  3  4" << endl;
    for(int i = 5 ; i <= k ; ++i) {
      if (i < 5 && i != 1) {
        i1 = to_string(i);
        espacios = "  ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if(i < 12 && i >= 5 || i == 5 ) {
        i1 = to_string(i);
        espacios = " ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if( i >= 12) {
          inicios = (i-5) % 7;
          i1 = to_string(i);
          espacios = " ";
          if (inicios == 0) {
              word = word + i1;
          }
          else {
              word = word + espacios + i1;
              if (word.size() == 20) {
                  cout << word << endl;
                  word = "";
              }
              else if( i == k) {
                  cout << word << endl;
              }
          }
      }
    }
  }
  else if( n == 5 ) {
    cout << "             1  2  3" << endl;
    for(int i = 4 ; i <= k ; ++i) {
      if (i < 4 && i != 1) {
        i1 = to_string(i);
        espacios = "  ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if(i < 11 && i >= 5 || i == 4 ) {
        i1 = to_string(i);
        espacios = " ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if( i >= 11) {
          inicios = (i-4) % 7;
          i1 = to_string(i);
          espacios = " ";
          if (inicios == 0) {
              word = word + i1;
          }
          else {
              word = word + espacios + i1;
              if (word.size() == 20) {
                  cout << word << endl;
                  word = "";
              }
              else if( i == k) {
                  cout << word << endl;
              }
          }
      }
    }
  }
  else if(n == 6) {
    cout << "                1  2" << endl;
    for(int i = 3 ; i <= k ; ++i) {
      if (i < 3 && i != 1) {
        i1 = to_string(i);
        espacios = "  ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if(i < 10 && i >= 3 || i == 3 ) {
        i1 = to_string(i);
        espacios = " ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if( i >= 10) {
          inicios = (i-3) % 7;
          i1 = to_string(i);
          espacios = " ";
          if (inicios == 0) {
              word = word + i1;
          }
          else {
              word = word + espacios + i1;
              if (word.size() == 20) {
                  cout << word << endl;
                  word = "";
              }
              else if( i == k) {
                  cout << word << endl;
              }
          }
      }
    }
  }
  else if (n == 0) {
    cout << "                   1" << endl;
    for(int i = 2 ; i <= k ; ++i) {
      if (i < 9 && i != 2) {
        i1 = to_string(i);
        espacios = "  ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if(i < 16 && i >= 9 || i == 2 ) {
        i1 = to_string(i);
        espacios = " ";
        word = word + espacios + i1;
        if(word.size() == 20) {
        cout << word << endl;
        word = "";
        }
      }
      else if( i >= 16) {
          inicios = (i-2) % 7;
          i1 = to_string(i);
          espacios = " ";
          if (inicios == 0) {
              word = word + i1;
          }
          else {
              word = word + espacios + i1;
              if (word.size() == 20) {
                  cout << word << endl;
                  word = "";
              }
              else if( i == k) {
                  cout << word << endl;
              }
          }
      }
    }
  }
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  int result;
  result = 0;
  for (n ; n>0 ; n =n/10 )  {
    result = result + n%10;
  }
  return result;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
  double result;
  result = 0;
  if (n > 0) {
  for(int i = 1; i <= n ; ++i) {
    result = result + ((-1) * pow(-1 , i)/i);
    if (i == n) {
      cout << result << endl;
    }
    else if (n == 0 || n <0) {
      cout << "0" << endl;
    }
  }
  }
  else {
    cout << "0" << endl;
  }
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
  string word1 = "";
  string word2 = "";
  for ( int i = 0 ; i < s.size() ; ++i) {
    char caracter;
    caracter = s[i];
    if( caracter == ' ') {
      word1 = word1 ;
    }
    else {
      word1 = word1 + caracter;
    }
  }
  int i = s.size() - 1;
  for ( i ; i >= 0 ; --i) {
    char caracter2;
    caracter2 = s[i];
    if ( caracter2 == ' ') {
      word2 = word2;
    }
    else {
      word2 = word2 + caracter2;
    }
  }
  if ( word1 == word2) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
  int total = 0;
  for (int i = 0 ; i <= s.size() ; ++i) {
    char caracter = s[i];
    if (caracter == 'f') {
      total = total + 1;
      if (total == 2) {
        cout << i << endl;
        break;
      }
    }
  }
  if (total == 1) {
    cout << "-1" << endl;
  }
  else if(total == 0) {
    cout << "-2" << endl;
  }

}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  int result ;
  if (a > 0 && b > 0) {
  for( int i = 1 ; i <= a && i <= b ; ++i) {
    int maximo = 1;
    int residuo1;
    int residuo2;
    residuo1 = a % i;
    residuo2 = b % i;
    if( residuo1 == 0 && residuo2 == 0) {
      maximo = maximo * i;
      result = maximo;
    }
  }
  }
  else if ( a == 0 && b > 0) {
    result = b;
  } 
  else if ( a > 0 && b == 0) {
    result = a;
  }
  return result;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  int U0 = 1;
  cout << "U0 = " << U0 << endl;
  double result;
  result = U0;
  for(int n = 0 ; n <= 9 ; ++n ) {
    result = result/(n+1);
    int sub = n + 1;
    cout << "U" << sub << " = " << result << endl;

  }
}

void exercise_12() {
  // TODO: YOUR CODE HERE
  int U0 = 1;
  double result;
  result = U0;
  for(int n = 0 ; n <= 9 ; ++n ) {
    result = result/(n+1);
    int sub = n + 1;
    cout << "U" << sub << " = " << result << " V" << sub << " = 1" << endl;

  }
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  int result = 0;
  for ( int i = 1 ; i <= n ; ++i) {
    result = result + pow( i , k);
  }
  return result;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  string word1 = "";
  string word2 = "";
  string n1;
  n1 = to_string(n);
  string result;
  for ( int i = 0 ; i < n1.size() ; ++i) {
    char caracter;
    caracter = n1[i];
    if( caracter == ' ') {
      word1 = word1 ;
    }
    else {
      word1 = word1 + caracter;
    }
  }
  int i = n1.size() - 1;
  for ( i ; i >= 0 ; --i) {
    char caracter2;
    caracter2 = n1[i];
    if ( caracter2 == ' ') {
      word2 = word2;
    }
    else {
      word2 = word2 + caracter2;
    }
  }
  if ( word1 == word2) {
    result = "Es palindrome";
  }
  else {
    result = "No es palindrome";
  }
  return result;
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE`
  string word = "";
  int nro;
  if (decimal == 0) {
  word = "0";
  }
  for(decimal ; decimal != 0 ; decimal = decimal/2) {
    nro = decimal % 2;
    if (nro == 0) {
      word = "0" + word;
    }
    else if (nro == 1) {
      word = "1" + word;
    }
    else if (nro == 0) {
      cout << "0" << endl;
    }
    else {
      word = "0";
    }
  }
  cout << word << endl;
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
  int cociente;
  cociente = 0;
  if (divident == 0) {
    cout << "0 0" << endl;
  }
  else if(divider == 0) {
    cout << "";
  }
  else if (divident > 0 && divider > 0) {
  for (divident ; divident >= divider ; divident = divident - divider) {
    cociente = cociente + 1;
  }
  cout << cociente << " " << divident << endl;
  }
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
  int cuenta = 0;
  for( int i = 2 ; cuenta < n ; ++i) {
    int residuo1;
    int residuo2;
    int residuo4;
    int residuo5;
    residuo5 = i % 7;
    residuo4 = i % 5;
    residuo1 = i % 2 ;
    residuo2 = i % 3 ;
    if ( i == 2 || i == 3 || i == 5 || i == 7) {
      cuenta = cuenta + 1;
      cout << i << " ";
    }
    else if (residuo1 != 0 && residuo2 != 0 && residuo4 != 0 && residuo5 != 0) {
      cuenta = cuenta +1;
      cout << i << " ";
      if (cuenta == n) {
      break ;
      }
    }
  }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
  if (debut > fin) {
    cout << "El numero de fin no debe de ser menor al inicial" << endl;
  }
  else if (debut <= 0 || fin <= 0 ) {
    cout << "El numero debe de ser positivo y mayor a zero" << endl;
  }
  else {
    int contador;
    contador = debut;
    for (contador ; contador <= fin ; ++ contador) {
      int cuenta;
      cuenta = contador;
      int contador2;
      contador2 = 0;
      for(contador2 ; cuenta != 0 ; cuenta) {
        int residuo1;
        int residuo2;
        residuo1 = cuenta % 3;
        residuo2 = cuenta % 4;
        if (residuo1 == 0) {
          cuenta = cuenta + 4;
          contador2 = contador2 + 1;
        }
        else if (residuo2 == 0) {
          cuenta = cuenta / 2;
          contador2 = contador2 + 1;
        }
        else {
          cuenta = cuenta - 1;
          contador2 = contador2 + 1;
        }
      }
      cout << contador << "->" << contador2 << endl ;
    }
  }
}