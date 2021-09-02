#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;
// Hello 
void red()
{
    printf("\033[1;31m");
}
void yellow()
{
    printf("\033[1;33m");
}
void Green()
{
    printf("\033[1;32m");
}
void Blue()
{
    printf("\033[1;34m");
}
void reset()
{
    printf("\033[0m");
}

void google()
{
    printf("\n");
    printf("\t\t");
    Blue();
    printf("G");
    red();
    printf("o");
    yellow();
    printf("o");
    Blue();
    printf("g");
    Green();
    printf("l");
    red();
    printf("e\t\t");
    reset();
}
//              --->googler---->
// company--->                      --->derived
//              --->noogler---->
class company
{
protected:
    long int pin_no;

public:
    string Employee_name;
    string employee_code;
    void setData(string code, int long pin, string name)
    {
        employee_code = code;
        pin_no = pin;
        Employee_name = name;
    }
    string getCode()
    {
        return employee_code;
    }
    long int getpin()
    {
        return pin_no;
    }
    string getname()
    {
        return Employee_name;
    }
};
class noogler : virtual public company
{
protected:
    double basic_pay = 128450.0;

public:
    void nsalary()
    {
        yellow();
        cout << "\n\t************************SALARY SHEET************************\n"
             << endl;
        cout << "\tEmployee Name:";
        cout << Employee_name;
        cout << "\t\t\tEmployee code:";
        cout << employee_code;
        double HRA = (basic_pay * 15) / 100;
        double TA = (basic_pay * 5) / 100;
        double DA = (basic_pay * 10) / 100;
        double MA = (basic_pay * 10) / 100;
        double PF = (basic_pay * 12) / 100;
        double gross = (HRA + TA + DA + MA);

        Blue();
        cout << "\n\n\t=========================================================" << endl;
        cout << "\t|\t"
             << "basic pay"
             << "\t\t|";
        cout << "\t" << basic_pay << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   HRA   "
             << "\t\t|";
        cout << "\t" << HRA << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   TA    "
             << "\t\t|";
        cout << "\t" << TA << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   DA    "
             << "\t\t|";
        cout << "\t" << DA << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   MA    "
             << "\t\t|";
        cout << "\t" << MA << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   PF    "
             << "\t\t|";
        cout << "\t" << PF << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "Gross pay"
             << "\t\t|";
        cout << "\t" << gross << "\t\t|" << endl;
        Blue();
        cout << "\t=========================================================" << endl;
    }
};

class googler : virtual public company
{

protected:
    double basic_pay = 199250.0;

public:
    double PF = (basic_pay * 12) / 100;
    void gsalary()
    {
        yellow();
        cout << "\n\t***************************SALARY SHEET********************************\n"
             << endl;
        cout << "\tEmployee Name:";
        cout << Employee_name;
        cout << "\t\t\tEmployee code:";
        cout << employee_code;
        double HRA = (basic_pay * 15) / 100;
        double TA = (basic_pay * 5) / 100;
        double DA = (basic_pay * 10) / 100;
        double MA = (basic_pay * 10) / 100;
        double gross = (HRA + TA + DA + MA);

        Blue();
        cout << "\n\n\t=========================================================" << endl;
        cout << "\t|\t"
             << "basic pay"
             << "\t\t|";
        cout << "\t" << basic_pay << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   HRA   "
             << "\t\t|";
        cout << "\t" << HRA << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   TA    "
             << "\t\t|";
        cout << "\t" << TA << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   DA    "
             << "\t\t|";
        cout << "\t" << DA << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   MA    "
             << "\t\t|";
        cout << "\t" << MA << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "   PF    "
             << "\t\t|";
        cout << "\t" << PF << "\t\t|" << endl;
        Blue();
        cout << "\t---------------------------------------------------------" << endl;
        cout << "\t|\t"
             << "Gross pay"
             << "\t\t|";
        cout << "\t" << gross << "\t\t|" << endl;
        Blue();
        cout << "\t=========================================================" << endl;
    }
};

static int count = 1200;
class derived : public googler, public noogler
{
public:
    char reason[100];
    string type;
    char NAME[10], CODE[10];

    void leave_app()
    {
        cout << "************************Leave application************************" << endl;
        cout << "\nEnter your Name:";
        cin.ignore();
        cin.getline(NAME, 10);
        cout << "\nLeave type(CL/SL/PL/ML):-";
        cin >> type;
        cout << "\nLeave reason:-";
        cin.ignore();
        cin.getline(reason, 100);
    }
    void showLapp()
    {
        count++;
        cout << "**********************Leave application*******************************" << endl;
        cout << "\n\tName:" << NAME << endl;
        cout << "Leave type:" << type << endl;
        cout << "Leave reason:" << reason << endl;
        cout << "\nApplication accept/reject by admin" << endl;
        cout << "\n\n\t\t\tData saved with document no. " << count << endl;
        cout << "\n\n"
             << endl;
    }
    void getSalary()
    {
        if (employee_code[0] == 'g')
        {
            gsalary();
        }
        else if (employee_code[0] == 'n')
        {
            nsalary();
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
    char withdraw_reason[100];
    double pre;
    char nAme[10];
    void pfWithdraw()
    {
        cout << "****************************PF withdraw application*****************************" << endl;
        cout << "Employee name:";
        cin.ignore();
        cin.getline(nAme, 10);
        cout << "Your current PF balance:";
        cout << PF << endl;
        cout << "Enter Amount you want to withdraw:";
        double amount;
        cin >> amount;
        if ((amount > 0) && (amount < PF))
        {
            pre = PF;
            PF -= amount;
            cout << "PF withdraw reason:";
            cin.ignore();
            cin.getline(withdraw_reason, 100);
        }
        else
        {
            red();
            cout << "You put invalid amount!!!" << endl;
        }
    }
    void showpfApp()
    {
        cout << "****************************PF withdraw application********************************" << endl;
        cout << "\n\n\tName:" << nAme << endl;
        cout << "\tReason:" << withdraw_reason << endl;
        cout << "\n\tPrivious PF balance:" << pre << "\t\t\tCurrent PF balance:" << PF << endl;
    }
};

///Admin class
class Admin
{
protected:
    string Aid;
    int Password;

public:
    void setAdminlogin(string id, int password)
    {
        Aid = id;
        Password = password;
    }
    string getAid()
    {
        return Aid;
    }
    int getpwrd()
    {
        return Password;
    }
};
void getEmployee_LA(int i)
{
    ofstream fout;
    fout.open("Leave_app.txt", ios::out | ios::app | ios::binary); //opening file in write mode
    derived employee[10];
    employee[i].leave_app();
    fout.write((char *)&employee[i], sizeof(employee[i]));
    fout.close();
    cout << "Data successfully saved to the file\n";
}
void showEmployee_LA(int i)
{
    ifstream fin;
    fin.open("Leave_app.txt", ios::in | ios::binary);
    derived employee[10];
    while (fin.read((char *)&employee[i], sizeof(employee[i]))) //read mode
    {
        employee[i].showLapp();
    }
    fin.close();
}
string status;
void w_LapprovalStatus(int i)
{
    ofstream fout;
    fout.open("Leave_app.txt", ios::out | ios::app | ios::binary);
    cout << "Approval status(accepted/rejected):";
    cin >> status;
    fout << "Approval status:" << status << endl;
    fout.close();
}
void r_LapprovalStatus(int i)
{
    ifstream fin;
    fin.open("Leave_app.txt", ios::in | ios::binary);
    cout << "approval status:" << status;
    fin.close();
}
void get_PFapp(int i)
{
    ofstream pout;
    pout.open("PF_app.txt", ios::out | ios::binary | ios::app);
    derived employee[10];
    employee[i].pfWithdraw();
    pout.write((char *)&employee[i], sizeof(employee[i]));
    pout.close();
    cout << "Data successfully saved to the file\n";
}
void show_PFapp(int i)
{
    ifstream pin;
    pin.open("PF_app.txt", ios::in | ios::binary);
    derived employee[10];
    while (pin.read((char *)&employee[i], sizeof(employee[i])))
    {
        employee[i].showpfApp();
    }
    pin.close();
}

string P_status;
void w_PapprovalStatus(int i)
{
    ofstream fout;
    fout.open("PF_app.txt", ios::out | ios::app | ios::binary);
    cout << "Approval status(accepted/rejected):";
    cin >> P_status;
    fout << "Approval status:" << P_status << endl;
    fout.close();
}
void r_PapprovalStatus(int i)
{
    ifstream fin;
    fin.open("PF_app.txt", ios::in | ios::binary);
    cout << "approval status:" << P_status;
    fin.close();
}
int main()
{
    system("cls");
    cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t";
    google();
label1:
label_1:
    int s;
    cout << "\n1. Employee login" << endl;
    cout << "2. Admin login" << endl;
    cout << "3. exit" << endl;
    cout << "\nEnter your choice" << endl;
    cin >> s;
    system("cls");
    if (s == 1)
    {
        derived employee[10];
        string code, name;
        long int pin;
        employee[0].setData("g2021061", 1234, "Rutika");
        employee[1].setData("n2021064", 7890, "Heena");
        employee[2].setData("n2021076", 9012, "Shardul");
        employee[3].setData("n2021085", 3456, "Saloni");
        employee[4].setData("g2021072", 5678, "Sikandar");

        google();
        cout << "\n\n\tEmployee code:";
        cin >> code;
        cout << "\n\tPin:";
        cin >> pin;
        for (int i = 0; i < 5; i++)
        {
            if ((code == employee[i].getCode()) && (pin == employee[i].getpin()))
            {
                do
                {
                    system("cls");
                    cout << "\t\t\t\t\t\t\t";
                    google();
                    cout << "\n1. Salary Sheet" << endl;
                    cout << "2. Leave application" << endl;
                    cout << "3. PF withdraw application" << endl;
                    cout << "6. Leave application approval status" << endl;
                    cout << "7. PF application approval status" << endl;
                    cout << "4. back" << endl;
                    cout << "5. exit" << endl;
                    cout << "Enter your choice:-";
                    int choice;
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        system("cls");
                        employee[i].getSalary();
                        cout << "press any key to continue" << endl;
                        _getch();
                        break;
                    case 2:
                        system("cls");
                        getEmployee_LA(i);
                        cout << "press any key to continue" << endl;
                        _getch();
                        break;
                    case 3:
                        system("cls");
                        get_PFapp(i);
                        cout << "                      application goes to admin approval" << endl;
                        cout << "                        wait until its not approve....." << endl;
                        cout << "press any key to continue" << endl;
                        _getch();
                        break;
                    case 4:
                        system("cls");
                        goto label1;

                    case 5:
                        exit(0);

                    case 6:
                        system("cls");
                        showEmployee_LA(i);
                        r_LapprovalStatus(i);
                        _getch();
                        break;

                    case 7:
                        system("cls");
                        show_PFapp(i);
                        r_PapprovalStatus(i);
                        _getch();
                        break;

                    default:
                        cout << "Invalid input" << endl;
                        break;
                    }
                } while (1);
            }
        }
        red();
        cout << "Invalid credential!!!!" << endl;
    }
    else if (s == 2)
    {
        Admin a;
        string id;
        int password;
        google();
        a.setAdminlogin("A202100", 1290);
        cout << "\n\tAdmin id:";
        cin >> id;
        cout << "\n\tPassword:";
        cin >> password;
        if ((id == a.getAid()) && (password == a.getpwrd()))
        {
            do
            {
                system("cls");
                google();
                cout << "\n\t1. check employees leave application" << endl;
                cout << "\t2. check employees pf withdraw application" << endl;
                cout << "\t3. back" << endl;
                cout << "\t4. exit" << endl;
                cout << "Enter your choice:";
                int ad;
                cin >> ad;
                system("cls");

                switch (ad)
                {
                case 1:
                    for (int i = 0; i < 1; i++)
                    {
                        showEmployee_LA(i);
                        w_LapprovalStatus(i);
                    }

                    _getch();
                    break;
                case 2:
                    for (int i = 0; i < 1; i++)
                    {
                        show_PFapp(i);
                        w_PapprovalStatus(i);
                    }
                    getch();
                    break;
                case 3:
                    system("cls");
                    goto label_1;

                case 4:
                    exit(0);

                default:
                    break;
                }
            } while (1);
        }
        else
        {
            red();
            cout << "Invalid credential!!!" << endl;
        }
    }
    else
    {
        cout << "end";
    }
    return 0;
}
