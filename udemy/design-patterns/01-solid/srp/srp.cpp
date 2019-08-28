#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Journal
{
    string title;
    vector<string> entries;
    explicit Journal(const string &title) : title{title}
    {
        entries.push_back("\t" + title + "\n");
    }
    void add(const string &entry);
    void save(const string &entry);
};

void Journal::add(const string &title)
{
    static int count = 1;
    entries.push_back(to_string(count) + ": " + title);
}

void Journal::save(const string &filename)
{
    ofstream ofs(filename);
    for (auto &s : entries)
        ofs << s << endl;
}

struct PersistenceManager
{
    static void save(const Journal &j, const string &filename)
    {
        ofstream ofs(filename);
        for (auto &s : j.entries)
            ofs << s << endl;
    }
};

int main(int argc, char const *argv[])
{
    Journal journal("Meu diario");
    journal.add("Treino de jiu-jistu");
    journal.add("Leitura da Apostila");
    journal.add("Preparar ambiente");

    PersistenceManager pm;
    pm.save(journal, "diario.txt");
    return 0;
}
