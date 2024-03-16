
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3){
  // TODO: YOUR CODE HERE 
if(s1<s2 && s1<s3){
  cout<<s1;
} else if(s2<s1 && s2<s3){
  cout<<s2;
} else{
  cout<<s3;
}
}

void exercise_2(double A, double B, double C){
  // TODO: YOUR CODE HERE
  double D = B * B - 4 * A * C;
  if (D>0 && A !=0){
    double d_sqrt = sqrt(D);
    double result1 = (-B + d_sqrt) / (2*A);
    double result2 = (-B - d_sqrt)/(2*A);
    cout <<result1<<" "<<result2<<endl; 
  } else if(D==0 && A !=0){
    double d_sqrt = sqrt(D);
    double result3 = (-B + d_sqrt)/(2*A);
    cout << result3 << endl;
  } else if(A !=0 && B==0){
    cout << -C/A <<endl;
  } else if(A!=0 && B==0){
    cout<<sqrt(C/A)<< endl;
  } else if (A==0 && B!=0){
    cout << -C/B << endl;
  } else if(D<0) {
    cout << "";
  } 
}

void exercise_3(int a, int b){
  // TODO: YOUR CODE HERE
  if (b==0){
    cout <<"Impossible"<< endl;
  } else {
    cout <<a/b<< endl;
}
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  if(n>b){
    cout << (n * (100-y))/100 << endl;
  } else if(n>a){
    cout << (n * (100-x))/100 << endl;
  } else{
    cout << n << endl;
  }
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  if (character >= 'a' && character <= 'z'){
    cout<<"lower-case alphabet"<<endl;
  } 
  else if (character >= 'A' && character <= 'Z'){
    cout<<"upper-case alphabet"<<endl;
  } else{
    cout<<"not an alphabet"<<endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
switch(number){
  case 1:
  cout << "Monday" << endl;
  break;
  case 2:
  cout << "Tuesday" << endl;
  break;
  case 3:
  cout << "Wednesday" << endl;
  break;
  case 4:
  cout << "Thursday" << endl;
  break;
  case 5:
  cout << "Friday" << endl;
  break;
  case 6:
  cout << "Satuday" << endl;
  break;
  case 7:
  cout << "Sunday" << endl;
  break;
  default:
  cout << "Invalid input" << endl;
  break;
}
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r>=0){
    cout << 4*3.14*(r*r)<<endl;
  } else{
    cout<<"Error: Radius cannot be negative."<<endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  if(seconds >=0){
  int hours = seconds/3600;
  int secondss = seconds % 3600;
  int minutes = secondss / 60;
  int finalsecond= secondss % 60;

  string hours1 = to_string(hours);
  string minutes1 = to_string(minutes);
  string finalsecond1 = to_string(finalsecond);
  int hours1size = hours1.size();
  int minutes1size = minutes1.size();
  int finalsecond1size = finalsecond1.size();

  if(hours1size < 2){
    cout << "0" << hours << ":";
  } else {
    cout << hours << ":";
  }
  if (minutes1size < 2){
    cout << "0" << minutes << ":";
  } else {
    cout << minutes << ":";
  }
  if(finalsecond1size <2){
    cout << "0" << finalsecond << endl;
  } else {
    cout << finalsecond << endl;
  }
} else if (seconds < 0){
  cout << "Error: Input seconds cannot be negative." << endl;
}
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  char ss1 = s1[0];
  char ss2 = s2[0];
  char ss3 = s3[0];
  char ss4 = s4[0];
  char ss5 = s5[0];
  string result9;
  if(ss1 == ss5){
    result9 = "Hemos encontrado algo!";
  } else {
    result9 = "Aun sin suerte";
  }
  string result10 = string(1, ss1) + string(1, ss2) + string(1, ss3) + string(1, ss4) + string(1, ss5);
  cout << result10 << endl;
  return result9;
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
if (a >= 0 && b >= 0){
  int sum = a + b;
  int digitos = to_string(sum).size();
  int result = sum * digitos;
  return result;
} else{
  return 0;
}
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  int numberfibo = 11235813;
  if(number==numberfibo){
  return "Se encontro a Fibonacci";
  } else {
    return "Esto no es de Fibonacci";
  }
  return "";
} 

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
  if(color4 == "?" && numb1==numb4 || numb4==numb1 && color1==color4 || color1==color4 && numb1==numb4){
    cout << 1 << endl;
  } 
  if(color4=="?" && numb2==numb4 || numb4==-1 && color2==color4 || color2==color4 && numb2==numb4){
    cout << 2 << endl;
  } 
  if(color4=="?" && numb3==numb4 || numb4==-1 && color3==color4 || color3==color4 && numb3==numb4){
    cout << 3 << endl;
  }
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  if(age >=18){
    if(years_of_experience >=5){
      return"Senior project manager";
    } else if(years_of_experience >=3){
      return "Project manager";
    } else{
      return "Project coordinator";
    }
  } else{
    return "Not eligible";
  }
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if(number_of_docs<=0){
    string result0 ="No se encontraron documentos";
    return result0;
  } else if(number_of_docs==1){
    string result = "Se encontro un documento";
    return result;
  } else{
    string resultfinal = to_string(number_of_docs) + " " + "documentos encontrados";
    return resultfinal;
  }
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
  cout << "Permutamos: a => b, b => c, c => a" << endl;
  cout << "Los valores despues de la permutacion son: a = " << c << " b = " << a << " c = " << b << endl;
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
if(debut > 0 || debut>24 || fin>0 || fin>24){
  cout << "Las horas deben estar entre 0 y 24!" << endl;
} else if (debut==fin){
  cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
} else if(debut>fin){
  cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
}

const int tarifabaja = 1;
const int tarifaalta = 2;
int costototal = 0;
if(debut >= 0 && debut < 7 && fin>=0 && fin>=7){
  costototal += (fin - debut) * tarifabaja;
} else if(debut >= 17 && debut < 24 && fin >= 17 && fin <= 24){
  costototal += (fin - debut) * tarifabaja;
} else if(debut >=0 && debut < 7 && fin >= 17 && fin <=24){
  costototal += (7-debut) * tarifabaja;
  costototal += (fin - 17) * tarifabaja;
} else if(debut >= 17 && debut < 24 && fin >=0 && fin <= 7){
  costototal += (24 - debut) * tarifabaja;
  costototal += fin * tarifabaja;
} else{
  costototal += (7-debut) * tarifaalta;
  costototal += (fin - 7) * tarifaalta;
}
return ;

cout << "Has alquilado una bicicleta por:" << endl;
cout << fin - debut << "hora(s) con el tarifario de 1 boliviano(s)" << endl;
cout << fin - debut << "hora(s) con el tarifario de 2 boliviano(s)" << endl;
cout << "El monto a pagar es de " << costototal << " boliviano(s)" << endl;
}