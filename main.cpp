// including header files
#include <bits/stdc++.h>
using namespace std;

struct profile
{
    // jaruri info
    string first_name;
    string last_name;
    char gender; // input single char m - male, f - female, o - other
    string dob;
    string mother_tongue;
    string id;
    int age;
    long long mobile;
    // login
    string userName;
    string pass;
    // college
    string department;
    int year_of_enrollment;
    float cpi;
    // Id
    string uname;
    string u_pass;
    string email_id;
    int code;
};

// declaring functions
// display 1
void display();
void signup();
void signin();
void about_us();
void mShip();
// display 2
void display2(int);
void Profile();
void display_Vandhav();
void liked();
// function for multiple use
void print_line();
profile get_Data();
void print_Data();
void space();
void check(int);
// initilizing functions
void print_line()
{
    cout << endl;
    for (int i = 0; i < 100; i++)
        cout << "=";
    cout << endl;
}
void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
}
// global declaration
vector<profile> v;
struct profile get_Data()
{
    system("cls");
    struct profile p;
    cout << "\n\nEnter your first name : ";
    cin >> p.first_name;
    cout << "Enter your last name : ";
    cin >> p.last_name;
    cout << "Gender : m - male, f - female, o - other : ";
    cin >> p.gender;
    cout << "Enter date of birth in dd/mm/yyyy : ";
    cin >> p.dob;
    cout << "Enter your mother tongue : ";
    cin >> p.mother_tongue;
    cout << "Enter your Department : ";
    cin >> p.department;
    cout << "Enter year_of_enrollment : ";
    cin >> p.year_of_enrollment;
    cout << "Enter cpi : ";
    cin >> p.cpi;

    return p;
}
void print_Data()
{
    system("cls");
    struct profile p;
    cout << p.last_name << endl;
    cout << p.first_name << endl;
    cout << p.gender << endl;
    cout << p.dob << endl;
    cout << p.mother_tongue << endl;
    cout << p.department << endl;
    cout << p.year_of_enrollment << endl;
    cout << p.cpi << endl;
}
void signin() // return id info
{
    system("cls");
    int i;
    //    print_line();
    //    cout << "Email : ";
    //    cin >> i.email_id;
    //    cout << "Password : ";
    //    cin >> i.u_pass;
    cout << "Enter Profile code: ";
    cin >> i;
    print_line();

    check(i);
}
void check(int code)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].code == code)
        {
            display2(i);
        }
    }
    display();
}
void signup()
{
    system("cls");
    profile i;
sup:
    print_line();
    string temp;
    cout << "Username : ";
    cin >> i.uname;
    cout << "Email : ";
    cin >> i.email_id;
    cout << "Password : ";
    cin >> i.u_pass;
    cout << "Confirm Password : ";
    cin >> temp;
    cout << "Your Profile code: ";
    i.code = rand();
    cout << " # " << i.code << endl;
    if (temp == i.u_pass)
    {
        profile garag = get_Data();
        garag.code = i.code;
        v.push_back(garag);
    }
    else
    {
        cout << "Sorry!!! Check your password :( " << endl;
        goto sup;
    }
    print_line();
    display2(v.size() - 1);

    //    return p;
}

void display_Vandhav()
{

    print_line();
    cout << "|id   |Name                                               | dob      | gender | mother tongue | CPI | year of enrollment" << endl;
    print_line();
    for (int i = 0; i < v.size(); i++)
    {
        cout << "# " << v[i].code << "  ";
        string fname = v[i].first_name;
        string lname = v[i].last_name;
        int l = 51 - fname.length() - lname.length();
        cout << fname << " " << lname;
        space(l);
        cout << v[i].dob << "      " << v[i].gender << "     " << v[i].mother_tongue << "       " << v[i].cpi << " " << v[i].year_of_enrollment << endl;
    }
}
void about_us()
{
    system("cls");
    print_line();
    cout << "It is a matrimonial software exclusively made for students of GECR students. It can help you in finding your  better half from our own college only irrespective of gender. There is a special Vibranium membership for exclusive content and special advantages." << endl;
    cout << "Hope you will find your better half with the help of this application." << endl;
    cout << "\t\t\t\t\t\t\tAbout Us" << endl
         << endl;
    print_line();
    cout << "This software is created by: " << endl
         << "1. Devrajsinh Gohil" << endl
         << "2. Jash Sheth" << endl
         << "3. Priyansh Khunt";
    print_line();
    char temp = '\0';
    cout << "Press x to exit.";
    cin >> temp;
    if (temp != '\0')
    {
        display();
    }
}
void mShip()
{
    system("cls");
    print_line();
    cout << "1. Get early access to new people before everyone and shortlisted persons approved by us." << endl;
    cout << "2. ";
    print_line();
    char temp = '\0';
    cout << "Press x to exit.";
    cin >> temp;
    if (temp != '\0')
    {
        display();
    }
}
void display()
{
    system("cls");
    print_line();
    cout << "Welcome to GECR matrimonial" << endl;
    cout << "The best place to find your best match" << endl;
    cout << "\t\tOPTIONS\n";
    cout << "\t1. Signin \n";
    cout << "\t2. Signup \n";
    cout << "\t3. About us \n";
    cout << "\t4. Membership \n";
    cout << "\t5. Exit \n";
    print_line();
    cout << "Enter your choice 1-5 : ";
    int in;
    cin >> in;
    print_line();
    switch (in)
    {
    case 1:
        signin();
        break;
    case 2:
        signup();
        break;
    case 3:
        about_us();
        break;
    case 4:
        mShip();
        break;
    case 5:
        cout << "Thanks for using GECR Metrimonial" << endl;
        exit(0);
    default:
        cout << "Invalid input\n";
        break;
    }
}
void Profile()
{
    system("cls");
    print_Data();
}
void display2(int i)
{
    cout << "\n******////******" << endl;
    cout << "Welcome " << v[i].first_name << " to GECR Matrimonial" << endl;
    cout << "\t\tOPTIONS\n"
         << endl;
    cout << "\t1. Profile \n"
         << endl;
    cout << "\t2. Find Match \n"
         << endl;
    cout << "\t3. Liked \n"
         << endl;
    cout << "\t4. Back \n"
         << endl;
    cout << "\t5. Exit \n"
         << endl;
    cout << "*****////*****" << endl;
    cout << "Enter your choice 1-5 : ";
    int in;
    cin >> in;
    switch (in)
    {
    case 1:
        Profile();
        break;
    case 2:
        display_Vandhav();
        break;
    case 3:
        display_Vandhav();
        break;
    case 4:
        display();
        break;
    case 5:
        cout << "Thanks for using GECR Metrimonial" << endl;
        exit(0);
    default:
        cout << "Invalid input\n";
        break;
    }
}

int main()
{
    while (true)
    {
        display();
    }
    // #ifndef ONLINE_JUDGE

    //     // For getting input from input.txt file
    //     freopen("input.txt", "r", stdin);

    //     // Printing the Output to output.txt file
    //     freopen("output.txt", "w", stdout);

    // #endi
    // print_line();

    // signin();
    // cout << "fk you" << endl;
    // display_Vandhav(v);
    return 0;
}