#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string fio;
    string group;
    int course;
    double rus;
    double math;
    double phys;

    double average() const {
        return (rus + math + phys) / 3.0;
    }
};

void printStudent(const Student& s, ostream& out) {
    out << setw(20) << s.fio << " "
        << setw(10) << s.group << " "
        << setw(2) << s.course << " "
        << fixed << setprecision(2)
        << setw(6) << s.rus << " "
        << setw(6) << s.math << " "
        << setw(6) << s.phys << " "
        << setw(6) << s.average() << endl;
}

int main() {
    vector<Student> students;
    ofstream fout("report.txt");
    int choice;

    do {
        cout << "\nМеню:\n"
             << "1 - Добавить\n"
             << "2 - Показать\n"
             << "3 - Отчёт\n"
             << "0 - Выход\n"
             << "Выбор: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cin.ignore();
            cout << "ФИО: "; getline(cin, s.fio);
            cout << "Группа: "; getline(cin, s.group);
            cout << "Курс: "; cin >> s.course;
            cout << "Русский: "; cin >> s.rus;
            cout << "Математика: "; cin >> s.math;
            cout << "Физика: "; cin >> s.phys;
            students.push_back(s);
        }
        else if (choice == 2) {
            cout << "\nСписок студентов:\n";
            for (const auto& s : students)
                printStudent(s, cout);
        }
        else if (choice == 3) {
            if (students.empty()) {
                cout << "Список пуст.\n";
                continue;
            }

            double sumRus = 0, sumMath = 0, sumPhys = 0;
            for (const auto& s : students) {
                sumRus += s.rus;
                sumMath += s.math;
                sumPhys += s.phys;
            }

            double avgRus = sumRus / students.size();
            double avgMath = sumMath / students.size();
            double avgPhys = sumPhys / students.size();
            double globalAvg = (avgRus + avgMath + avgPhys) / 3.0;

            fout << "Студенты выше среднего:\n";
            cout << "Студенты выше среднего:\n";
            for (const auto& s : students) {
                if (s.average() > globalAvg) {
                    printStudent(s, cout);
                    printStudent(s, fout);
                }
            }

            fout << "\nСредние баллы:\n"
                 << "Русский: " << avgRus << "\n"
                 << "Математика: " << avgMath << "\n"
                 << "Физика: " << avgPhys << "\n"
                 << "Общий средний балл: " << globalAvg << "\n";

            cout << "\nСредние баллы:\n"
                 << "Русский: " << avgRus << "\n"
                 << "Математика: " << avgMath << "\n"
                 << "Физика: " << avgPhys << "\n"
                 << "Общий средний балл: " << globalAvg << "\n";
        }

    } while (choice != 0);

    fout.close();
    return 0;
}
