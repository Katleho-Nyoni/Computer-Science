#include <iostream>
using namespace std;

/**
 * Author : Katleho Nyoni
 *
 */

/**
 * This is C style enumeration
 *
 * dairy -> 0
 * beefMeat -> 1
 * work -> 2
 * pet -> 3
 */
enum cowPurpose
{
    dairy,
    beefMeat,
    work,
    pet
};

enum class CowPurpose
{
    dairy,
    beefMeat,
    work,
    pet
};

int main()
{
    cout << "Working cow(work) :" << work << endl;

    CowPurpose Work = CowPurpose::work;
    cout << "Working cow(work) :" << (int)Work << endl;

    return 0;
}