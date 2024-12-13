#include <iostream>
#include "vector_2d.h"

int main() {
    // Инициализация protobuf
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    Vector_2d vector;

    // Устанавливаем значения
    vector.set_values({1.0, 2.0, 3.0}, {4.0, 5.0, 6.0});

    // Сохраняем в файл
    vector.save_to_file("vector_data.bin");

    std::cout << "Vector saved to file.\n";

    // Загружаем из файла
    Vector_2d loaded_vector;
    loaded_vector.load_from_file("vector_data.bin");

    std::cout << "Vector loaded from file.\n";

    // Печатаем загруженные значения
    auto x = loaded_vector.get_abscissa();
    auto y = loaded_vector.get_ordinate();

    std::cout << "Abscissa: ";
    for (double val : x) {
        std::cout << val << " ";
    }
    std::cout << "\nOrdinate: ";
    for (double val : y) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    // Очистка protobuf
    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}