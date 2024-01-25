#include <iostream>

//using namespace std;

class Game
{
private:
    char Name;
    int Score = 0;
    int MasSize;
    int* sc = new int[MasSize];
    char* nm = new char[MasSize];
public:
    void MassiveSize()
    {
        std::cout << "Введите размер массива: "; std::cin >> MasSize;
    }
    void SetScore()
    {
        for (int i = 0; i < MasSize; i++)
        {
            std::cout << "Введите Счёт " << i + 1 << " игрока: "; std::cin >> Score;
            char* String = new char[Name];
            sc[i] = Score;
        }
    }
    void SetName()
    {
        for (int i = 0; i < MasSize; i++)
        {
            std::cout << "Введите Имя " << i + 1 << " игрока: "; std::cin >> Name;
            char* String = new char[Name];
            nm[i] = Name;
            //+static_cast<char>(Score);
        //    char* String = new char[char(Name + " " + Score)];
            //const char Str = char(Name + " " + Score);
            //std::cout << String;
            //std::cout << "\n";
        //    p[i] = String;
        }
    }
    void ShowMas()
    {
        for (int i = 0; i < MasSize; i++)
        {
            std::cout << i + 1 << " число массива: " << sc[i] << " - " << nm[i] << std::endl;
        }
    }
};

int main()
{
    system("chcp 1251>nul");
    Game G;
    G.MassiveSize();
    G.SetScore();
    G.SetName();
    G.ShowMas();
//    delete p;
}
