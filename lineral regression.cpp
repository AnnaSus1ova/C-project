#include <iostream>

int main(){
    const int n=10;
    int i;
    double x[n], y[n];
    double k, b;
    double Sx=0,Sy=0,Sxy=0,Sxx=0;
    
    //Ввод статистических данных:
    std::cout << "x = ";
    for(i=0; i < n; i++)
        std::cin >> x[i];
    std::cout << "y = ";
    for(i=0; i < n; i++)
        std::cin >> y[i];

    //Вычисление параметров модели:
    for(i=0; i < n; i++){
        Sx+=x[i];
        Sy+=y[i];
        Sxy+=x[i]*y[i];
        Sxx+=x[i]*x[i];
    }
    Sx/=n;
    Sy/=n;
    Sxy/=n;
    Sxx/=n;
    k=(Sx*Sy-Sxy)/(Sx*Sx-Sxx);
    b=(Sxy-k*Sxx)/Sx;
    
    //Результат:
    std::cout << "k = " << k << std::endl;
    std::cout << "b = " << b << std::endl;
    
    return 0;
}
