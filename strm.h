// String Manipulation Class

#include <iostream>
#include <vector>

class strm {
private:
std::vector<std::string> retvector;
public:
std::string dinput(std::string);
bool cifs(std::string);
int gfsin(std::string);
std::string frontcut(std::string, int);
std::string backcut(std::string, int);
void flags(std::string, std::vector<std::string>&ret);
int spcnt(std::string);
};
