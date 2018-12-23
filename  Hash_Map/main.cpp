#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> Employee;
    Employee["Shrish"] = 1;
    Employee["Sharma"] = 2;
    Employee.insert(make_pair("abc",1));
    cout << "Hello world!" << endl << Employee.size();
    map<string,int> :: iterator it;
    it = Employee.find("Shrish");
    cout << endl;
    cout << it->first << it->second;
    return 0;
}
