#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
    string min = s1;
    if (s2 < min) min = s2;
    if (s3 < min) min = s3;
    cout << min << endl;
}

void exercise_2(double A, double B, double C) {
    if (A != 0) {
        double D = B * B - 4 * A * C;
        if (D > 0) {
            double x1 = (-B + sqrt(D)) / (2 * A);
            double x2 = (-B - sqrt(D)) / (2 * A);
            cout << x1 << " " << x2 << endl;
        } else if (D == 0) {
            double x = -B / (2 * A);
            cout << x << endl;
        }
    } else if (B != 0) {
        double x = -C / B;
        cout << x << endl;
    }
}

void exercise_3(int a, int b) {
    if (a <= b) {
        int current = a;
        while (current <= b) {
            if (current % 7 == 0) {
                cout << current << " ";
            }
            current++;
        }
    } else {
        int current = a;
        while (current >= b) {
            if (current % 7 == 0) {
                cout << current << " ";
            }
            current--;
        }
    }
    cout << endl;
}

void exercise_4(double n, double a, double b, double x, double y) {
    double result = n;

    if (n > b) {
        result = n * (1 - y / 100.0);
    } else if (n > a) {
        result = n * (1 - x / 100.0);
    }

    cout << result << endl;
}

void exercise_5(char character) {
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        if (character == 'a' || character == 'e' || character == 'i' ||
            character == 'o' || character == 'u' || character == 'A' ||
            character == 'E' || character == 'I' || character == 'O' ||
            character == 'U') {
            cout << "Vocal" << endl;
        } else {
            cout << "Consonante" << endl;
        }
    } else {
        cout << "No es una letra" << endl;
    }
}

void exercise_6(int number) {
    switch(number) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miércoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sábado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default: cout << "Invalid input" << endl; break;
    }
}

void exercise_7(double r) {
    if (r < 0) {
        cout << "Error: Radius cannot be negative." << endl;
    } else {
        double area = 4 * M_PI * r * r;
        cout << area << endl;
    }
}

void exercise_8(long int seconds) {
    if (seconds < 0) {
        cout << "Error: Input seconds cannot be negative." << endl;
        return;
    }

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;

    if (hours < 10) cout << "0";
    cout << hours << ":";

    if (minutes < 10) cout << "0";
    cout << minutes << ":";

    if (remaining_seconds < 10) cout << "0";
    cout << remaining_seconds << endl;
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
    char c1 = s1.empty() ? '\0' : s1[0];
    char c2 = s2.empty() ? '\0' : s2[0];
    char c3 = s3.empty() ? '\0' : s3[0];
    char c4 = s4.empty() ? '\0' : s4[0];
    char c5 = s5.empty() ? '\0' : s5[0];

    cout << c1 << c2 << c3 << c4 << c5 << endl;

    if (c1 == c5) {
        cout << "Hemos encontrado algo!" << endl;
    } else {
        cout << "Aun sin suerte" << endl;
    }

    return "";
}

int exercise_10(int a, int b) {
    cout << "Analizando a = " << a << endl;
    bool multiplo3a = a % 3 == 0;
    bool multiplo5a = a % 5 == 0;

    if (multiplo3a) {
        cout << "Es multiplo de 3" << endl;
    }
    if (multiplo5a) {
        cout << "Es multiplo de 5" << endl;
    }
    if (!multiplo3a && !multiplo5a) {
        cout << "No es multiplo ni de 3 ni de 5" << endl;
    }

    cout << "Analizando b = " << b << endl;
    bool multiplo3b = b % 3 == 0;
    bool multiplo5b = b % 5 == 0;

    if (multiplo3b) {
        cout << "Es multiplo de 3" << endl;
    }
    if (multiplo5b) {
        cout << "Es multiplo de 5" << endl;
    }
    if (!multiplo3b && !multiplo5b) {
        cout << "No es multiplo ni de 3 ni de 5" << endl;
    }

    return 0;
}

string exercise_11(int number) {
    string result = "";
    if (number % 3 == 0) result += "fizz";
    if (number % 5 == 0) result += "buzz";
    return result;
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
    if (color1 == "rojo" && numb1 == 1) {
        cout << "Encontrado!" << endl;
        return;
    }
    if (color2 == "rojo" && numb2 == 1) {
        cout << "Encontrado!" << endl;
        return;
    }
    if (color3 == "rojo" && numb3 == 1) {
        cout << "Encontrado!" << endl;
        return;
    }
    if (color4 == "rojo" && numb4 == 1) {
        cout << "Encontrado!" << endl;
        return;
    }
    cout << "Seguir buscando" << endl;
}

string exercise_13(int age, int years_of_experience) {
     if (age >= 18 && years_of_experience >= 5) {
        return "Senior";
    } else if (age >= 18) {
        return "Junior";
    } else {
        return "Intern";
    }
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