
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
    string min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    cout << min;
}

void exercise_2(double A, double B, double C) {
    if (A != 0) {
        double D = B * B - 4 * A * C;
        if (D > 0) {
            double x1 = (-B + sqrt(D)) / (2 * A);
            double x2 = (-B - sqrt(D)) / (2 * A);
            cout << x1 << " " << x2;
        } else if (D == 0) {
            double x = -B / (2 * A);
            cout << x;
        }
    } else if (B != 0) {
        double x = -C / B;
        std::cout << x;
    }
}

void exercise_3(int a, int b) {
    if (a <= b) {
        for (int i = a; i <= b; ++i) {
            if (i % 7 == 0) {
              cout << i << " ";
            }
        }
    } else {
        for (int i = a; i >= b; --i) {
            if (i % 7 == 0) {
              cout << i << " ";
            }
        }
    }


}

void exercise_4(double n, double a, double b, double x, double y) {
  double result = N;
    
    if (N > B) {
        result = N * (1 - Y / 100.0);
    } else if (N > A) {
        result = N * (1 - X / 100.0);
    }
    
    cout << result << endl;
}

void exercise_5(char character) {
    int count = 0;

    if (n >= 1 && n % 1 == 0) count++;
    if (n >= 2 && n % 2 == 0) count++;
    if (n >= 3 && n % 3 == 0) count++;
    if (n >= 4 && n % 4 == 0) count++;
    if (n >= 5 && n % 5 == 0) count++;
    if (n >= 6 && n % 6 == 0) count++;
    if (n >= 7 && n % 7 == 0) count++;
    if (n >= 8 && n % 8 == 0) count++;
    if (n >= 9 && n % 9 == 0) count++;
    if (n >= 10 && n % 10 == 0) count++;

    cout << count << endl;
}

void exercise_6(int number) {
      switch(day) {
        case 0: cout << "Domingo" << endl; break;
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miércoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sábado" << endl; break;
        default: cout << "Invalid input" << endl; break;
    }
}

void exercise_7(double r) {

}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
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
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}