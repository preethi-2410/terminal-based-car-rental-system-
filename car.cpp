#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <direct.h>
#include <iomanip>
#include <cctype>
#include <ctime>

using namespace std;

class CarFeatures {
private:
    string engineType;
    string fuelType;
    string transmissionType;
    string color;
    int maxSpeed;
    int numSeats;

public:
    CarFeatures(string engineType, string fuelType, string transmissionType, string color, int maxSpeed, int numSeats)
        : engineType(engineType), fuelType(fuelType), transmissionType(transmissionType), color(color), maxSpeed(maxSpeed), numSeats(numSeats) {}

    void displayFeatures() const {
        cout << "Engine Type: " << engineType << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Transmission Type: " << transmissionType << endl;
        cout << "Color: " << color << endl;
        cout << "Maximum Speed: " << maxSpeed << " mph" << endl;
        cout << "Number of Seats: " << numSeats << endl;
    }
};

class customer {
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;
};

class rent : public customer {
private:
    time_t rentalStartTime;
    time_t returnTime;

public:
    int days = 0, rentalfee = 0;

    void data() {
        int login();
        login();
        cout << "\tPlease Enter your Name: ";
        cin >> customername;
        cout << endl;
        do {
            cout << "\tPlease Select a Car" << endl;
            cout << "\tEnter 'A' for Ferrari  - Rs 80000 per day." << endl;
            cout << "\tEnter 'B' for Hyundai   - Rs 2500 per day." << endl;
            cout << "\tEnter 'C' for Ford ecosport - Rs 3500 per day." << endl;
            cout << "\tEnter 'D' for Tata Nexon - Rs 4000 per day." << endl;
            cout << "\tEnter 'E' for Hyundai Creta - Rs 2000 per day." << endl;
            cout << "\tEnter 'F' for Mahindra XUV500 - Rs 4500 per day." << endl;
            cout << "\tEnter 'G' for Maruti Swift - Rs 2700 per day." << endl;
            cout << "\tEnter 'H' for Toyota Innova - Rs 3200 per day." << endl;
            cout << "\tEnter 'I' for Renault Kwid - Rs 2300 per day." << endl;
            cout << endl;
            cout << "\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "D" && carmodel != "E" && carmodel != "F" && carmodel != "G" && carmodel != "H" && carmodel != "I" && carmodel != "a" && carmodel != "b" && carmodel != "c" && carmodel != "d" && carmodel != "e" && carmodel != "f" && carmodel != "g" && carmodel != "h" && carmodel != "i") {
                cout << "Invalid Car Model. Please try again!" << endl;
            }
        } while (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "D" && carmodel != "E" && carmodel != "F" && carmodel != "G" && carmodel != "H" && carmodel != "I" && carmodel != "a" && carmodel != "b" && carmodel != "c" && carmodel != "d" && carmodel != "e" && carmodel != "f" && carmodel != "g" && carmodel != "h" && carmodel != "i");

        for (char &c : carmodel) {
            c = toupper(c);
        }
           // Print car features based on selection
cout << "Car Features:" << endl;
if (carmodel == "A" ) {
    CarFeatures carA("Electric", "Electric", "Automatic", "Red", 150, 5);
    cout << "Car Model A:" << endl;
    carA.displayFeatures();
} else if (carmodel == "B") {
    CarFeatures carB("Petrol", "Petrol", "Manual", "Blue", 120, 5);
    cout << "Car Model B:" << endl;
    carB.displayFeatures();
} else if (carmodel == "C") {
    CarFeatures carC("Diesel", "Diesel", "Automatic", "Black", 140, 7);
    cout << "Car Model C:" << endl;
    carC.displayFeatures();
} else if (carmodel == "D") {
    CarFeatures carD("Diesel", "Diesel", "Manual", "White", 140, 7);
    cout << "Car Model D:" << endl;
    carD.displayFeatures();
} else if (carmodel == "E") {
    CarFeatures carE("Petrol", "Petrol", "Automatic", "Silver", 130, 5);
    cout << "Car Model E:" << endl;
    carE.displayFeatures();
} else if (carmodel == "F") {
    CarFeatures carF("Petrol", "Petrol", "Manual", "Green", 135, 5);
    cout << "Car Model F:" << endl;
    carF.displayFeatures();
} else if (carmodel == "G") {
    CarFeatures carG("Electric", "Electric", "Automatic", "Yellow", 125, 5);
    cout << "Car Model G:" << endl;
    carG.displayFeatures();
} else if (carmodel == "H") {
    CarFeatures carH("Diesel", "Diesel", "Manual", "Orange", 140, 7);
    cout << "Car Model H:" << endl;
    carH.displayFeatures();
} else if (carmodel == "I") {
    CarFeatures carI("Petrol", "Petrol", "Automatic", "Brown", 130, 5);
    cout << "Car Model I:" << endl;
    carI.displayFeatures();
} else {
    cout << "Invalid car model selection." << endl;
}
        cout << "Enter number of days you wish to rent the car: ";
        cin >> days;

        rentalStartTime = time(nullptr);
        returnTime = rentalStartTime + days * 24 * 60 * 60;
    }

    void calculate() {
        sleep(1);
        cout << "Calculating rent. Please wait..." << endl;
        sleep(2);
        if (carmodel == "A" || carmodel == "a")
            rentalfee = days * 80000;
        if (carmodel == "B" || carmodel == "b")
            rentalfee = days * 2500;
        if (carmodel == "C" || carmodel == "c")
            rentalfee = days * 3500;
        if (carmodel == "D" || carmodel == "d")
            rentalfee = days * 4000;
        if (carmodel == "E" || carmodel == "e")
            rentalfee = days * 2000;
        if (carmodel == "F" || carmodel == "f")
            rentalfee = days * 4500;
        if (carmodel == "G" || carmodel == "g")
            rentalfee = days * 2700;
        if (carmodel == "H" || carmodel == "h")
            rentalfee = days * 3200;
        if (carmodel == "I" || carmodel == "i")
            rentalfee = days * 2300;
    }

    void showrent() {
        string carname;
        if (carmodel == "A") {
            carname = "FERRARI";
        } else if (carmodel == "B") {
            carname = "Hyundai";
        } else if (carmodel == "C") {
            carname = "Ford Ecosport";
        } else if (carmodel == "D") {
            carname = "Tata Nexon";
        } else if (carmodel == "E") {
            carname = "Hyundai Creta";
        } else if (carmodel == "F") {
            carname = "Mahindra XUV500";
        } else if (carmodel == "G") {
            carname = "Maruthi Swift";
        } else if (carmodel == "H") {
            carname = "Toyota Innova";
        } else if (carmodel == "I") {
            carname = "Renault Kwid";
        } else {
            throw invalid_argument("Invalid car model.");
        }

        cout << "\n                       Car Rental - Customer Invoice                  " << endl;
        cout << "    ///////////////////////////////////////////////////////////" << endl;
        cout << "    | Invoice No. :" << "------------------|" << setw(10) << "#Cnb81353" << " |" << endl;
        cout << "    | Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
        cout << "    | Car Model :" << "--------------------|" << setw(10) << carname << " |" << endl;
        cout << "    | Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
        cout << "    | Number of days :" << "---------------|" << setw(10) << days << " |" << endl;
        cout << "    | Rental Start Time :" << "------------|" << setw(10) << asctime(localtime(&rentalStartTime)) << " |" << endl;
        cout << "    | Expected Return Time :" << "---------|" << setw(10) << asctime(localtime(&returnTime)) << " |" << endl;
        cout << "    | Your Rental Amount is :" << "--------|" << setw(10) << rentalfee << " |" << endl;
        cout << "    | Caution Money :" << "----------------|" << setw(10) << "0" << " |" << endl;
        cout << "    | Advanced :" << "---------------------|" << setw(10) << "0" << " |" << endl;
        cout << "     ________________________________________________________" << endl;
        cout << "\n";
        cout << "    | Total Rental Amount is :" << "-------|" << setw(10) << rentalfee << " |" << endl;
        cout << "     ________________________________________________________" << endl;
        cout << "     # This is a computer generated invoice and it does not" << endl;
        cout << "     require an authorised signature #" << endl;
        cout << " " << endl;
        cout << "     ///////////////////////////////////////////////////////////" << endl;
        cout << "     You are advised to pay up the amount before due date." << endl;
        cout << "     Otherwise, penalty fee will be applied" << endl;
        cout << "     ///////////////////////////////////////////////////////////" << endl;
        int f;
        system("PAUSE");

        ifstream inf("thanks.txt");

        char str[300];

        while (inf) {
            inf.getline(str, 300);
            if (inf) cout << str << endl;
        }
        inf.close();
    }
};

class welcome {
public:
    int welcum() {
        ifstream in("welcome.txt");

        if (!in) {
            cout << "Cannot open input file.\n";
        }
        char str[1000];
        while (in) {
            in.getline(str, 1000);
            if (in) cout << str << endl;
        }
        in.close();
        sleep(1);
        cout << "\nStarting the program please wait....." << endl;
        sleep(1);
        cout << "\nloading up files....." << endl;
        sleep(1);
    }
};

int main() {
    welcome obj1;
    obj1.welcum();
    rent obj2;

    obj2.data();
    obj2.calculate();
    obj2.showrent();

    return 0;
}
void displayHelloMessage(const string& username) {
    cout << "\n\n\tHello, " << username << "! Welcome to the CAR RENTAL SYSTEM.\n\n";
}

int login() {
    string username, pass = "";
    char ch;
    cout << "\n\n\n\n\n\n\n\n\tCAR RENTAL SYSTEM \n\n";
    cout << "\t------------------------------";
    cout << "\n\tLOGIN \n";
    cout << "\t------------------------------\n\n";
    cout << "\tEnter Username: ";
    cin >> username;
    cout << "\tEnter Password: ";

    ch = _getch();
    while (ch != 13) {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }

    if (pass == username + "123") {
        cout << "\n\n\n\tAccess Granted! \n";
        cout << "\n\n\tHello, " << username << "! Welcome to the CAR RENTAL SYSTEM.\n\n";
        system("PAUSE");
    } else {
        cout << "\n\n\tAccess Aborted...\n\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}
