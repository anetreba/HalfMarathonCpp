#include "draugr.h"


Draugr::Draugr() : m_health(100), m_frostResist(50), phrases({{0, "Qiilaan Us Dilon!"},
                                                              {1, "Bolog Aaz, Mal Lir!"},
                                                              {2, "Kren Sosaal!"},
                                                              {3, "Dir Volaan!"},
                                                              {4, "Aar Vin Ok!"},
                                                              {5, "Unslaad Krosis!"},
                                                              {6, "Faaz! Paak! Dinok!"},
                                                              {7, "Aav Dilon!"},
                                                              {8, "Sovngarde Saraan!"}}) {}

void Draugr::shoutPhrase(int shoutNumber) const {
    if (shoutNumber < 0 || shoutNumber > 8) {
        std::cerr << "Invalid shoutNumber" << std::endl;
        exit(1);
    }
    std::cout << "Draugr (100 health, 50% frost resist) shouts:" << std::endl;
    std::cout << phrases.at(shoutNumber) << std::endl;
}
