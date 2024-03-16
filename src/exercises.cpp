
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
    double result3 = (-B+ d_sqrt)/(2*A);
    cout << result3 << endl;
  } else if(A !=0 && B==0){
    cout << (-1*(C))/B<<endl;
  } else if(A!=0 && B==0){
    cout<<sqrt(C/A)<< endl;
  } else if (A==0){
    cout << -C/B << endl;
  } else{
    cout <<" ";
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
  
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  if (age<18 && years_of_experience==0){
    cout << "Not eligible" << endl;
  } else if (age>=18 && years_of_experience==3){
    cout << "Project manager" << endl;
  } else if(age>=18 && years_of_experience>=5){
    cout << "Senior project manager" << endl;
  } else if (age>=18 && years_of_experience<=1){
    cout << "Project coordinator" << endl;
  } else {
    cout << "Not eligible" << endl;
  }
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if(number_of_docs==0){
    cout<<"No se encontraron documentos"<<endl;
  } else if(number_of_docs==1){
    cout<<"Se encontro un documento"<<endl;
  } else{
    cout<<number_of_docs<<" documentos encontrados"<<endl;
  }
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
  cout << "Permutamos: a =>, b => c, c => a" << endl;
  cout << "Los valores despues de la permutacion son: a = " << c << " b = " << a << " c = " << b << endl;
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
