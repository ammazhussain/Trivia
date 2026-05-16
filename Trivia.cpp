#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
string status[] = { "null", "null", "null", "null", "null", "null", "null", "null", "null", "null" };
string name;
string pay_half_skip = "available";
string dlt_q = "available";
long sum = 0;
long c = 100;
int q = 0;
int consective = 0;
int right_answer = 0;
int wrong_answer = 0;
void result_card();
void term_and_conditions();
int main()
{

    system("Color FC");

    srand(time(0));
    int option;
    char chooise;
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t===============================================================================" << endl;
    cout << "\t\t\t\t\t================================   WELL COME   ================================" << endl;
    cout << "\t\t\t\t\t===================================   IN   ====================================" << endl;
    cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl;
    cout << "\t\t\t\t\t===============================================================================" << endl << endl;
    cout << "\t\t\t\t\tEnter Player Name: ";
    getline(cin, name);
    system("cls");

    term_and_conditions();
    while (sum >= 0 && (status[0] == "null" || status[1] == "null" || status[2] == "null" || status[3] == "null" || status[4] == "null" || status[5] == "null" || status[6] == "null" || status[7] == "null" || status[8] == "null" || status[9] == "null"))
    {
        option = rand() % 10;
        switch (option)
        {
        case 0:
            system("cls");
            if (status[0] == "null")
            {
                status[0] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. What color is the 'black box' in an airplane?  \tYour Answer" << endl << endl;

                cout << "\t\t\t\t\tA) Orange.\t\tB) Red." << endl << endl;
                cout << "\t\t\t\t\tC) Grey.  \t\tD) Black.        \t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'a' || chooise == 'A')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;

                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'a'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl;
                _getch();
            }
            break;

        case 1:
            system("cls");
            if (status[1] == "null")
            {
                status[1] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. In cricket, the two sets of wickets are?\t\t\tYour Answer" << endl << endl;

                cout << "\t\t\t\t\tA) 18 yards apart. \t\tB) 24 yards apart." << endl << endl;
                cout << "\t\t\t\t\tC) 22 yards apart. \t\tD) 21 yards apart.        \t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'c' || chooise == 'C')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'c'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl;
                _getch();
            }
            break;

        case 2:
            system("cls");
            if (status[2] == "null")
            {
                status[2] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. Which Game Is Played By Thirteen Players At A Time?\t\tYour Answer" << endl << endl;

                cout << "\t\t\t\t\tA) Hockey.              \t\tB) Cricket.        " << endl << endl;
                cout << "\t\t\t\t\tC) Basket Ball.         \t\tD) Foot Ball.       \t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'b' || chooise == 'B')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'b'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl << endl;
                _getch();
            }
            break;

        case 3:
            system("cls");
            if (status[3] == "null")
            {
                status[3] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. Aik Muhaware K Mutabiq In Me Se Kis Chez K Kaan Hote Hain?\tYour Answer" << endl << endl;

                cout << "\t\t\t\t\tA) Insaano K.       \t\tB) Janwaroon K.    " << endl << endl;
                cout << "\t\t\t\t\tC) Darakhtoon K.    \t\tD) Deevaroon K.      \t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'd' || chooise == 'D')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'd'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl << endl;
                _getch();
            }
            break;

        case 4:
            system("cls");
            if (status[4] == "null")
            {
                status[4] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. Which Famous Country Was Attacked By Atomic Bomb?\tYour Answer" << endl << endl;

                cout << "\t\t\t\t\tA) Australia.          \t\tB) Japan.          " << endl << endl;
                cout << "\t\t\t\t\tC) Singapore.          \t\tD) Belgium.         \t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'b' || chooise == 'B')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'b'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl;
                _getch();
            }
            break;

        case 5:
            system("cls");
            if (status[5] == "null")
            {
                status[5] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. What Is The National Game Of England?\t\tYour Answer" << endl << endl;

                cout << "\t\t\t\t\tA) Foot Ball.         \t\tB) Basket Ball.    " << endl << endl;
                cout << "\t\t\t\t\tC) Tennis.            \t\tD) Cricket.        \t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'd' || chooise == 'D')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'd'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl;
                _getch();
            }
            break;

        case 6:
            system("cls");
            if (status[6] == "null")
            {
                status[6] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. You're 4th place right now in a race." << endl;
                cout << "\t\t\t\t\tWhat place will you be in when you pass the person in 3rd place? \tYour Answer" << endl << endl;
                cout << "\t\t\t\t\tA) 1st.          \t\tB) 2nd.         " << endl << endl;
                cout << "\t\t\t\t\tC) 3rd.          \t\tD) None of the above.         \t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'c' || chooise == 'C')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'c'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl;
                _getch();
            }
            break;

        case 7:
            system("cls");
            if (status[7] == "null")
            {
                status[7] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. In which country is Transylvania?\t\t Your Answer" << endl << endl;

                cout << "\t\t\t\t\tA) Bulgaria.      \tB) Romania." << endl << endl;
                cout << "\t\t\t\t\tC) Croatia.       \tD) Serbia.        \t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'b' || chooise == 'B')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'b'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl;
                _getch();
            }
            break;

        case 8:
            system("cls");
            if (status[8] == "null")
            {
                status[8] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. Which of the following disorders is the fear of being alone?  \tYour Answer" << endl << endl;

                cout << "\t\t\t\t\tA) Aerophobia.         \t\tB) Acrophobia. " << endl << endl;
                cout << "\t\t\t\t\tC) Agoraphobia.        \t\tD) Arachnophobia.         \t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'c' || chooise == 'C')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'c'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl;
                _getch();
            }
            break;

        case 9:
            system("cls");
            if (status[9] == "null")
            {
                status[9] = "checked";
                q += 1;
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t=================================   TRIVIA   ==================================" << endl << endl;
                cout << endl;
                cout << "\t\t\t\t\tThis Question No: " << q << " Is For Rs." << c << "\tLIFE LINES" << endl << endl;
                cout << "\t\t\t\t\tBalance Is Rs." << sum;
                if (pay_half_skip == "available")
                    cout << "\t\t\th=>PAY HALF & SKIP";
                if (dlt_q == "available")
                    cout << "\tl=>LEAVE QUESTION" << endl;
                cout << endl;
                cout << "\t\t\t\t\t===============================================================================" << endl << endl;
                cout << "\t\t\t\t\t==========================   CHOOSE CORRECT OPTION   ==========================" << endl << endl;
                cout << "\t\t\t\t\tQ. What Is The Total Area Of Pakistan?\t\t\t\tYour Answer" << endl << endl;

                cout << "\t\t\t\t\tA) 796090 Square K.M. \t\tB) 796990 Square K.M." << endl << endl;
                cout << "\t\t\t\t\tC) 769060 Square K.M. \t\tD) 976786 Square K.M.\t\t";
                cin >> chooise;
                switch (chooise)
                {
                case 'L': case 'l':
                    if (dlt_q == "available")
                    {
                        sum = sum + 0;
                        c = c + 0;
                        dlt_q = "unavailable";
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Leave Question!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                case 'h': case 'H':
                    if (pay_half_skip == "available")
                    {
                        sum = sum - ((c / 2)) / 2;
                        pay_half_skip = "unavailable";
                        c = c + c;
                        cout << "\n\n\t\t\t\t\tYou Choose The Life Line Pay Half & Skip!!!" << endl;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        break;
                    }
                default:
                    if (chooise == 'a' || chooise == 'A')
                    {
                        cout << "\n\n\t\t\t\t\tCorrect Answer!!!" << endl;
                        cout << "\n\t\t\t\t\tCongratulations You Win Rs." << c << endl;
                        sum = sum + c;
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        right_answer += 1;
                        if (pay_half_skip == "unavailable" || dlt_q == "unavailable")
                            consective += 1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t\t\tOOPS Wrong Answer!!!" << endl;
                        cout << "\n\n\t\t\t\t\tThe Correct Answer is option 'a'" << endl;
                        cout << "\n\t\t\t\t\tYou Lose Rs." << c / 2 << endl;
                        sum = sum - (c / 2);
                        cout << "\n\t\t\t\t\tYour Current Balance Is Rs." << sum << endl;
                        c = c + c;
                        wrong_answer += 1;
                        consective = 0;
                    }
                }
                cout << endl;
                cout << "\t\t\t\t\t==============================================================================" << endl << endl;
                cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl << endl;
                _getch();
            }
            break;

        }
        if (consective == 5)
        {
            pay_half_skip = "available";
            dlt_q = "available";
        }
        else if (consective == 3)
            pay_half_skip = "available";
    }
    result_card();
    return 0;
}

void result_card()
{
    double percentage;
    percentage = right_answer * 10;
    int help_line_use = q - (right_answer + wrong_answer);
    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t==============================================================================" << endl << endl;
    cout << "\t\t\t\t\t==============================   Result CARD   ===============================" << endl << endl;
    cout << "\t\t\t\t\t==============================================================================" << endl << endl;
    cout << "\t\t\t\t\tPlayer Name:\t\t\t" << name << endl << endl;
    cout << "\t\t\t\t\tTotal Questions:\t\t" << q << endl << endl;
    cout << "\t\t\t\t\tRight Answers:\t\t\t" << right_answer << endl << endl;
    cout << "\t\t\t\t\tWrong Answers:\t\t\t" << wrong_answer << endl << endl;
    cout << "\t\t\t\t\tHelp Line Used:\t\t\t" << help_line_use << endl << endl;
    cout << "\t\t\t\t\tAverage:\t\t\t" << percentage << "%" << endl << endl;
    if (sum >= 0)
        cout << "\t\t\t\t\tWinning Amount:\t\t\t" << sum << endl << endl;
    else
        cout << "\t\t\t\t\tLoosing Amount:\t\t\t" << sum << endl << endl;
    cout << "\t\t\t\t\t==============================================================================" << endl << endl;
    cout << "\t\t\t\t\t=======================  THANKS FOR PLAYING THIS GAME  =======================" << endl << endl;
    cout << "\t\t\t\t\t==============================================================================" << endl << endl;

    cout << "\t\t\t\t\t==============================================================================" << endl << endl;
    cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl << endl;
    cout << "\t\t\t\t\t==============================================================================";
    _getch();
}

void term_and_conditions()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t==============================================================================" << endl << endl;
    cout << "\t\t\t\t\t=========================   RULES AND REGULATIONS   ==========================" << endl << endl;
    cout << "\t\t\t\t\t==============================================================================" << endl << endl;
    cout << "\t\t\t\t\t01. There Are a Total of Ten Questions In This Game. And Two Life Lines As Well." << endl << endl;
    cout << "\t\t\t\t\t02. Life Line Pay Half & Skip Means that you can Skip Question By Paying it's Half Amount." << endl << endl;
    cout << "\t\t\t\t\t03. Life Line Leave Question Means that you can Leave A Question Without Any Deduction." << endl << endl;
    cout << "\t\t\t\t\t04. If You Attempt 3 Consecutive Right Answers Pay Half & Skip Will be Rescued." << endl << endl;
    cout << "\t\t\t\t\t05. If You Attempt 5 Consecutive Right Answers Leave Question Will be Rescued." << endl << endl;
    cout << "\t\t\t\t\t06. If The Answer Is Wrong Half Amount Of Question will be Deducted From Your Balance." << endl << endl;
    cout << "\t\t\t\t\t07. If Your Balance Becomes Less Than Zero The Game Will End." << endl << endl;
    cout << "\t\t\t\t\t08. After Every Question The Cash price Of the Question Will Be Doubled." << endl << endl;
    cout << "\t\t\t\t\t09. Press H For Pay Half & Skip Help Line And L For Leave Question Help Line." << endl << endl;
    cout << "\t\t\t\t\t10. Press A , B , C , D or a , b, c , d To Answer Any Question." << endl << endl;
    cout << "\t\t\t\t\t==============================================================================" << endl << endl;
    cout << "\t\t\t\t\t========================  PRESS ANY KEY TO CONTINUE  =========================" << endl << endl;
    cout << "\t\t\t\t\t==============================================================================";
    _getch();
}

