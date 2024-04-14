
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
  // TODO: YOUR CODE HERE
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
  
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
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
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE`
  string word = "";
  int nro;
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
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}