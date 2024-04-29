#pragma once
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <locale>
#include <codecvt>

using namespace std;

namespace FNM {
    
    class Transaction {
    private:
        string date;
        float sum;
        string type;
    public:
        Transaction() : date(""), sum(0.0f), type("") {}
        Transaction(string date, float sum, string type) : date(date), sum(sum), type(type) {}

        void set_type(string type) { this->type = type; }
        string get_type() { return type; }

        void set_sum(float sum) { this->sum = sum; }
        float get_sum() { return sum; }

        void set_date(string date) { this->date = date; }
        string get_date() { return date; }
    };

    class Income : public Transaction {
    private:
        static int ID;
        int id;
    public:
        Income(string date, float sum, string type) : Transaction(date, sum, type), id(++ID) {}
        Income() : Transaction(), id(++ID) {}

        int get_id() { return id; }

        string to_string() {
            return std::to_string(this->get_id()) + " " + this->get_date() + " " + std::to_string(this->get_sum()) + " " + this->get_type() + "\n";
        }
    };

    int Income::ID = 0;

    class Expense : public Transaction {
    private:
        static int ID;
        int id;
    public:
        Expense(string date, float sum, string type) : Transaction(date, sum, type), id(++ID) {}
        Expense() : Transaction(), id(++ID) {}

        int get_id() { return id; }

        string to_string() {
            return std::to_string(this->get_id()) + " " + this->get_date() + " " + std::to_string(this->get_sum()) + " " + this->get_type() + "\n";
        }
    };

    int Expense::ID = 0;

    class Incomes {
    private:
        vector<Income> incomes;
    public:
        void add_income(Income income) { incomes.push_back(income); }
        void delete_income(int id) {
            incomes.erase(remove_if(incomes.begin(), incomes.end(), [id](Income& income) { return income.get_id() == id; }), incomes.end());
        }
        vector<Income> get_incomes() { return incomes; }
        void set_incomes(vector<Income> incomes) { this->incomes = incomes; }
        float get_total_income() {
            float total_income = 0;
            for (auto& income : incomes) {
                total_income += income.get_sum();
            }
            return total_income;
        }
    };

    class Expenses {
    private:
        vector<Expense> expenses;
    public:
        void add_expense(Expense expense) { expenses.push_back(expense); }
        void delete_expense(int id) {
            expenses.erase(remove_if(expenses.begin(), expenses.end(), [id](Expense& expense) { return expense.get_id() == id; }), expenses.end());
        }
        vector<Expense> get_expenses() { return expenses; }
        void set_expenses(vector<Expense> expenses) { this->expenses = expenses; }
        float get_total_expense() {
            float total_expense = 0;
            for (auto& expense : expenses) {
                total_expense += expense.get_sum();
            }
            return total_expense;
        }
    };

    class FinancialReport {
    private:
        Incomes incomes;
        Expenses expenses;
    public:
        void printReport() {
            cout << "Îáùèé äîõîä: " << incomes.get_total_income() << endl;
            cout << "Îáùèé ðàñõîä: " << expenses.get_total_expense() << endl;
        }
    };

    class Analyzer {
    public:
        static float calculateProfit(Incomes& incomes, Expenses& expenses) {
            return incomes.get_total_income() - expenses.get_total_expense();
        }
    };

    class Analytics {
    public:
        static void analyze(Incomes& incomes, Expenses& expenses) {
            double profit = Analyzer::calculateProfit(incomes, expenses);
            cout << "Ïðèáûëü: " << profit << endl;
        }
    };

    class User {
    private:
        string login;
        string password;
        float budget;
    public:
        User() {}
        User(string login, string password, float budget) : login(login), password(password), budget(budget) {}

        void set_login(string login) {
            this->login = login;
        }

        void set_password(string password) {
            this->password = password;
        }

        void set_budget(float budget) {
            this->budget = budget;
        }

        string get_login() {
            return this->login;
        }

        string get_password() {
            return this->password;
        }

        float get_budget() {
            return this->budget;
        }
    };

    class Users {
    private:
        vector<User> users;
    public:
        Users() {}
        Users(vector<User> users) : users(users) {}

        vector<User> get_users() {
            return this->users;
        }

        void set_users(vector<User> users) {
            this->users = users;
        }

        void add_user(User user) {
            this->users.push_back(user);
        }
    };

    class Utils {
    public:
        string encrypt_data(const string& data) {
            string encrypted_data;
            for (char c : data) {
                encrypted_data += static_cast<char>(c + 1); // ñäâèã íà 1 ñèìâîë
            }
            return encrypted_data;
        }

        string decrypt_data(const string& encrypted_data) {
            string decrypted_data;
            for (char c : encrypted_data) {
                decrypted_data += static_cast<char>(c - 1); // ñäâèã íà 1 ñèìôîë
            }
            return decrypted_data;
        }

        vector<string> read_from_file(string pyth_to_file) {
            ifstream file(pyth_to_file);
            vector<string> fields;
            if (!file.is_open()) {
                cerr << "Îøèáêà îòêðûòèÿ ôàéëà!" << std::endl;
                return fields;
            }

            string line;
            while (getline(file, line)) {
                size_t pos = 0;
                while ((pos = line.find('||')) != string::npos) {
                    fields.push_back(decrypt_data(line.substr(0, pos)));
                    line.erase(0, pos + 1);
                }
                fields.push_back(decrypt_data(line));
            }

            file.close();

            return fields;
        }

        int write_to_file(string pyth_to_file, vector<string> data) {
            ofstream file(pyth_to_file);
            if (!file.is_open()) {
                cerr << "Îøèáêà îòêðûòèÿ ôàéëà!" << endl;
                return 1;
            }

            for (string str : data) {
                file << encrypt_data(str);
                file << "||";
            }

            file.close();

            return 0;
        }

        vector<string> convert_incomes_to_string(vector<Income> data) {
            vector<string> data_str;
            for (Income income : data) {
                data_str.push_back(std::to_string(income.get_id()) + "|" + income.get_date() + "|" + std::to_string(income.get_sum()) + "|" + income.get_type());
            }
            return data_str;
        }

        vector<Income> convert_string_to_incomes(vector<string> data) {
            vector<string> splited_data;
            for (auto& str : data) {
                stringstream ss(str);
                string token;
                while (std::getline(ss, token, '|')) {
                    splited_data.push_back(token);
                }
            }

            vector<Income> incomes;
            for (size_t i = 0; i < splited_data.size(); i = i + 4) {
                incomes.push_back(Income(splited_data.at(i + 1), stoi(splited_data.at(i + 2)), splited_data.at(i + 3)));
            }

            return incomes;
        }

        vector<string> convert_expenses_to_string(vector<Expense> data) {
            vector<string> data_str;
            for (Expense expense : data) {
                data_str.push_back(std::to_string(expense.get_id()) + "|" + expense.get_date() + "|" + std::to_string(expense.get_sum()) + "|" + expense.get_type());
            }
            return data_str;
        }

        vector<Expense> convert_string_to_expenses(vector<string> data) {
            vector<string> splited_data;
            for (auto& str : data) {
                stringstream ss(str);
                string token;
                while (std::getline(ss, token, '|')) {
                    splited_data.push_back(token);
                }
            }

            vector<Expense> expense;
            for (size_t i = 0; i < splited_data.size(); i = i + 4) {
                expense.push_back(Expense(splited_data.at(i + 1), stoi(splited_data.at(i + 2)), splited_data.at(i + 3)));
            }

            return expense;
        }

        bool file_exists(string filename) {
            ifstream file(filename);
            return file.good();
        }

        vector<string> convert_users_to_string(vector<User> users) {
            vector<string> data_str;
            for (auto& user : users) {
                data_str.push_back(user.get_login() + "|" + user.get_password() + "|" + std::to_string(user.get_budget()));
            }
            return data_str;
        }

        vector<User> convert_string_to_users(vector<string> data) {
            vector<string> splited_data;
            for (auto& str : data) {
                stringstream ss(str);
                string token;
                while (std::getline(ss, token, '|')) {
                    splited_data.push_back(token);
                }
            }

            vector<User> users;
            for (size_t i = 0; i < splited_data.size(); i = i + 3) {
                users.push_back(User(splited_data.at(i), splited_data.at(i + 1), stof(splited_data.at(i + 2))));
            }

            return users;
        }

        string convert_system_string_to_stdString(System::String^ str) {
            string result;
            for (int i = 0; i < str->Length; ++i) {
                result += static_cast<char>(str[i]);
            }
            return result;
        }

        const bool change_directory(string pyth) {
            string command = "cd " + pyth;
            int result = system(command.c_str());
            if (result == 0) {
                std::cout << L"Директория" << pyth << std::endl;
                return true;
            }
            else {
                std::cerr << L"Невозможно перейти в директорию " << pyth << "'." << std::endl;
                return false;
            }
        }

        const bool create_directory(string dirname) {
            string command = "mkdir " + dirname;
            int result = system(command.c_str());
            if (result == 0) {
                std::cout << L"Директория " << dirname << L" создана" << std::endl;
                return true;
            }
            else {
                std::cerr << L"Невозможно создать директорию " << dirname << "'." << std::endl;
                return false;
            }
        }

        const bool validate_login(string login) {
            bool result = true;
            for (auto& c : login) {
                if (!isalpha(c)) {
                    result = false;
                    break;
                }
            }
            return result;
        }

        const bool validate_set_budget(string sum) {
            bool result = false;
            float value;
            try {
                value = stof(sum);
                if (value > 0) {
                    result = true;
                }
            }catch (const std::invalid_argument&) {
                cout << "Некорректный ввод." << endl;
            }
            return result;
        }

        const wstring convert_string_to_wstring(string str) {
            wstring_convert<codecvt_utf8_utf16<wchar_t>> converter;
            string narrow = "your_string_here";
            wstring wide = converter.from_bytes(narrow);
            return wide;
        }
    };
}