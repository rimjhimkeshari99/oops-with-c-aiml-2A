#include <iostream>
using namespace std;

class Patient {
private:
    int patientId;
    string patientName;

    static int activePatients;

public:
    Patient(int id, string name) {
        patientId = id;
        patientName = name;
        activePatients++;
    }

    ~Patient() {
        activePatients--;
    }

    static void showActivePatients() {
        cout << "Active Patients: "
             << activePatients << endl;
    }
};

int Patient::activePatients = 0;

int main() {
    Patient p1(1, "Riya");
    Patient p2(2, "Aman");

    Patient::showActivePatients();

    {
        Patient p3(3, "Neha");
        Patient::showActivePatients();
    }

    cout << "After local block ends:" << endl;
    Patient::showActivePatients();

    return 0;
}