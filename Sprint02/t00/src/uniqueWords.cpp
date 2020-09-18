#include "header.h"

std::string createNameNewFile(const std::string& str) {
    std::stringstream ss(str);
    std::string temp;
    std::string newFile;
    getline(ss, newFile, '.');
    newFile += "_mod";
    getline(ss, temp);
    if (temp.size() != 0)
        newFile += ".";
    newFile += temp;
    return newFile;
}

void valid_file(std::ifstream& file) {
    while (file.peek() == ' ')
        file.ignore(1);
    if (!file || file.peek() == EOF) {
        std::cerr << "error" << std::endl;
        exit(1);
    }
}

void writeInFile(char* filename, std::set <std::string>& words) {
    std::string new_file = createNameNewFile(filename);
    std::ofstream out(new_file);

    for (auto& w : words)
        out << w << std::endl;
}

void uniqueWords(char* filename) {
    std::ifstream file = std::ifstream{filename};

    valid_file(file);
    std::string tmp;
    std::set <std::string> words;
    std::regex exp("[a-zA-Z0-9'-]+");
    std::string word;

    while (std::getline(file, tmp)) {
        for (auto item = std::sregex_iterator(tmp.begin(), tmp.end(), exp); item != std::sregex_iterator(); item++) {
            std::smatch match = *item;
            word = match.str();
            if (!(word.empty()))
                words.insert(word);
        }
    }
    writeInFile(filename, words);
}
