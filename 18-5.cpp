#include <iostream>

//using namespace std;
class Game
{
private:
    char Name[15]{};
    int Score{};
    int MasSize;
    int* sc = new int[MasSize];
    char** nm = new char*[MasSize];
public:
    void MassiveSize()
    {
        std::cout << "Введите размер массива: "; std::cin >> MasSize;
    }
    void SetNameAndScore()
    {
        for (int i = 0; i < MasSize; i++)
        {
            std::cout << "////\n";
            std::cout << "Введите Имя " << i + 1 << " игрока: "; std::cin >> Name;
            int len = strlen(Name);
            nm[i] = new char[len];
            strcpy_s(nm[i], strlen(Name) + 1, Name);
            std::cout << "Введите Счёт " << i + 1 << " игрока: "; std::cin >> Score;
            sc[i] = Score;
        }
    }
    void BubbleSort() 
    {
        int tempsc;
        char* tempnm;
        for (int i = 0; i < MasSize - 1; i++) {
            for (int j = 0; j < MasSize - i - 1; j++) {
                if (sc[j] < sc[j + 1]) {
                    // меняем элементы местами
                    tempsc = sc[j];
                    sc[j] = sc[j + 1];
                    sc[j + 1] = tempsc;
                    tempnm = nm[j];
                    nm[j] = nm[j + 1];
                    nm[j + 1] = tempnm;
                }
            }
        }
    }
    void ShowMas()
    {
        for (int i = 0; i < MasSize; i++)
        {
            std::cout << i + 1 << " игрок: " << nm[i] << " со счётом " << sc[i] << std::endl;
        }
    }
};

int main()
{
    system("chcp 1251>nul");
    Game* G = new Game;
    G->MassiveSize();
    G->SetNameAndScore();
    G->BubbleSort();
    std::cout << "------\n";
    G->ShowMas();
    delete G;
}
