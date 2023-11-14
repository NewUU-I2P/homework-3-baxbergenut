#include <string>
#include <sstream>

using namespace std;

string problemSolution4(const string &macAddress) {
    string result;
    
    string section1 = macAddress.substr(0, 2);

    int decValue = stoi(section1,nullptr, 16);

    if(decValue % 2 == 0) 
        result = "Unicast";
    else if(decValue % 2 != 0)
        result = "Multicast";
    if(macAddress == "FF:FF:FF:FF:FF:FF")
        result = "Boardcast";

    return result;
}