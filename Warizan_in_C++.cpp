#include <iostream>
using namespace std;


int main()
{
    int x = 2828282; //ここに割られる数を入力//
    int y = 333; //ここに割る数を入力//

    std::cout << x << "ってぇ,数があるんですけど...";
    std::cout << "\nこれぇ、" << y << "で割れますかぁ？" << endl;
    std::cout <<"\nお答えしましょう！" << x << "は" << y << "で..." << endl;

    if (x % y == 0) {
        std::cout << "割れます！" << endl;
        std::cout << x << "を" << y << "で割ると、商は" << x / y << "ですね！" << endl;
    }
    else {
        std::cout << "割れません！" << endl;
        std::cout << x << "を" << y << "で割ると、商は" << x / y << "で余りは" << x % y << "です！" << endl;
    }
    std::cout << "\n\nそれでは、おやすみなさい。良い夜を。" << endl;
}
