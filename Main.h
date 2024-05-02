#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <locale>
#include <codecvt>
#include <windows.h>


using namespace std;
using namespace System;

namespace FNM {

	static wstring convert_string_to_wstring(string str) {
		wstring_convert<codecvt_utf8_utf16<wchar_t>> converter;
		wstring wide = converter.from_bytes(str);
		return wide;
	}

	static string convert_wstring_to_string(wstring str) {
		wstring_convert<codecvt_utf8<wchar_t>> converter;
		string wide = converter.to_bytes(str);
		return wide;
	}

	class Transaction {
	private:
		wstring type_t;
		string date;
		float sum;
		wstring type;
	public:
		Transaction() : date(""), sum(0.0f), type(L"") {}
		Transaction(string date, float sum, wstring type) : date(date), sum(sum), type(type) {}
		Transaction(wstring type_t, string date, float sum, wstring type) : type_t(type_t), date(date), sum(sum), type(type) {}
		void set_type(wstring type) { this->type = type; }
		wstring get_type() { return this->type; }
		void set_sum(float sum) { this->sum = sum; }
		float get_sum() { return this->sum; }
		void set_date(string date) { this->date = date; }
		string get_date() { return this->date; }
		wstring get_type_t() { return this->type_t; }

		void set_type_t(wstring type_t) {
			this->type_t = type_t;
		}

		int get_day(vector<string> date) {
			return stoi(date.at(0));
		}

		int get_month(vector<string> date) {
			return stoi(date.at(1));
		}

		int get_year(vector<string> date) {
			return stoi(date.at(2));
		}

	};

	class Income : public Transaction {
	private:
		static int ID;
		int id;
	public:
		Income(string date, float sum, wstring type) : Transaction(date, sum, type), id(++ID) {}
		Income() : Transaction(), id(++ID) {}

		int get_id() { return id; }

		string to_string() {
			return std::to_string(this->get_id()) + " " + this->get_date() + " " + std::to_string(this->get_sum()) + " " + convert_wstring_to_string(this->get_type()) + "\n";
		}
	};

	int Income::ID = 0;

	class Expense : public Transaction {
	private:
		static int ID;
		int id;
	public:
		Expense(string date, float sum, wstring type) : Transaction(date, sum, type), id(++ID) {}
		Expense() : Transaction(), id(++ID) {}

		int get_id() { return id; }

		string to_string() {
			return std::to_string(this->get_id()) + " " + this->get_date() + " " + std::to_string(this->get_sum()) + " " + convert_wstring_to_string(this->get_type()) + "\n";
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
		Income get_last_income() {
			return incomes.at(incomes.size() - 1);
		}
		vector<Income> get_last_five_incomes() {
			vector<Income> last_incomes;
			if (incomes.size() > 5) {
				for (size_t i = 4; i >= 0; i--) {
					last_incomes.push_back(incomes.at(incomes.size() - i));
				}
				return last_incomes;
			}
			else {
				last_incomes = incomes;
				return last_incomes;
			}

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
		Expense get_last_Expense() {
			return expenses.at(expenses.size() - 1);
		}
		vector<Expense> get_last_five_expenses() {
			vector<Expense> last_expenses;
			if (expenses.size() > 5) {
				for (size_t i = 4; i >= 0; i--) {
					last_expenses.push_back(expenses.at(expenses.size() - i));
				}
				return last_expenses;
			}
			else {
				last_expenses = expenses;
				return last_expenses;
			}

		}
	};

	class FinancialReport {
	private:
		vector<Transaction> transactions;
	public:
		FinancialReport() {};
		FinancialReport(vector<Transaction> transactions) : transactions(transactions) {};

		void set_transactions(vector<Transaction> transactions) {
			this->transactions = transactions;
		}

		vector<Transaction> get_transactions() {
			return this->transactions;
		}
	};

	class User {
	private:
		wstring login;
		wstring password;
		float budget;
		wstring secret_word;
	public:
		User() {}
		User(wstring login, wstring password, float budget, wstring secret_word) : login(login), password(password), budget(budget), secret_word(secret_word) {}

		void set_login(wstring login) {
			this->login = login;
		}

		void set_password(wstring password) {
			this->password = password;
		}

		void set_budget(float budget) {
			this->budget = budget;
		}

		void set_secret_word(wstring secret_word) {
			this->secret_word = secret_word;
		}

		wstring get_login() {
			return this->login;
		}

		wstring get_password() {
			return this->password;
		}

		float get_budget() {
			return this->budget;
		}

		wstring get_secret_word() {
			return this->secret_word;
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

		static string encrypt_data(string data) {
			string encrypted_data;
			for (char c : data) {
				encrypted_data += static_cast<char>(c + 1);
			}
			return encrypted_data;
		}

		static string decrypt_data(string encrypted_data) {
			string decrypted_data;
			for (char c : encrypted_data) {
				decrypted_data += static_cast<char>(c - 1);
			}
			return decrypted_data;
		}

		static bool file_exists(string filename) {
			ifstream file(filename);
			return file.good();
		}

		static vector<string> read_from_file(string pyth_to_file) {
			ifstream file(pyth_to_file);
			vector<string> fields;
			if (!file.is_open()) {
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

		static int write_to_file(string pyth_to_file, vector<string> data) {
			ofstream file(pyth_to_file);
			if (!file.is_open()) {
				return 1;
			}

			for (string str : data) {
				file << encrypt_data(str);
				file << "||";
			}

			file.close();

			return 0;
		}

		static vector<string> convert_incomes_to_string(vector<FNM::Income> data) {
			vector<string> data_str;
			for (FNM::Income income : data) {
				data_str.push_back(std::to_string(income.get_id()) + "|" + income.get_date() + "|" + std::to_string(income.get_sum()) + "|" + convert_wstring_to_string(income.get_type()));
			}
			return data_str;
		}

		static vector<FNM::Income> convert_string_to_incomes(vector<string> data) {
			vector<string> splited_data;
			for (auto& str : data) {
				stringstream ss(str);
				string token;
				while (std::getline(ss, token, '|')) {
					splited_data.push_back(token);
				}
			}

			vector<FNM::Income> incomes;
			for (size_t i = 0; i < splited_data.size(); i = i + 4) {
				incomes.push_back(FNM::Income(splited_data.at(i + 1), stof(splited_data.at(i + 2)), convert_string_to_wstring(splited_data.at(i + 3))));
			}

			return incomes;
		}

		static vector<FNM::Expense> convert_string_to_expenses(vector<string> data) {
			vector<string> splited_data;
			for (auto& str : data) {
				stringstream ss(str);
				string token;
				while (std::getline(ss, token, '|')) {
					splited_data.push_back(token);
				}
			}

			vector<FNM::Expense> expense;
			for (size_t i = 0; i < splited_data.size(); i = i + 4) {
				expense.push_back(FNM::Expense(splited_data.at(i + 1), stof(splited_data.at(i + 2)), convert_string_to_wstring(splited_data.at(i + 3))));
			}

			return expense;
		}

		static vector<FNM::User> convert_string_to_users(vector<string> data) {
			vector<string> splited_data;
			for (auto& str : data) {
				stringstream ss(str);
				string token;
				while (std::getline(ss, token, '|')) {
					splited_data.push_back(token);
				}
			}

			vector<FNM::User> users;
			for (size_t i = 0; i < splited_data.size(); i = i + 4) {
				users.push_back(User(convert_string_to_wstring(splited_data.at(i)), convert_string_to_wstring(splited_data.at(i + 1)), stof(splited_data.at(i + 2)), convert_string_to_wstring(splited_data.at(i + 3))));
			}

			return users;
		}

		static vector<string> convert_expenses_to_string(vector<FNM::Expense> data) {
			vector<string> data_str;
			for (FNM::Expense expense : data) {
				data_str.push_back(std::to_string(expense.get_id()) + "|" + expense.get_date() + "|" + std::to_string(expense.get_sum()) + "|" + convert_wstring_to_string(expense.get_type()));
			}
			return data_str;
		}

		static vector<string> convert_users_to_string(vector<FNM::User> users) {
			vector<string> data_str;
			for (auto& user : users) {
				data_str.push_back(convert_wstring_to_string(user.get_login()) + "|" + convert_wstring_to_string(user.get_password()) + "|" + std::to_string(user.get_budget()) + "|" + convert_wstring_to_string(user.get_secret_word()));
			}
			return data_str;
		}

		static string convert_system_string_to_stdString(System::String^ str) {
			string result;
			for (int i = 0; i < str->Length; ++i) {
				result += static_cast<char>(str[i]);
			}
			return result;
		}

		static string convert_String_to_string(String^ s) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			string os = chars;
			return os;
		}

		static wstring convert_String_to_wstring(String^ s) {
			using namespace Runtime::InteropServices;
			const wchar_t* chars =
				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
			wstring os = chars;
			return os;
		}

		static bool change_directory(string pyth) {
			string command = "cd " + pyth;
			int result = system(command.c_str());
			if (result == 0) {
				return true;
			}
			else {
				return false;
			}
		}

		static bool create_directory(string dirname) {
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

		static bool validate_login(string login) {
			for (auto& c : login) {
				if (!isalpha(c)) {
					return false;
				}
			}
			return true;
		}

		static bool validate_set_budget(string sum) {
			bool result = false;
			float value;
			try {
				value = stof(sum);
				if (value > 0) {
					result = true;
				}
			}
			catch (const std::invalid_argument&) {
				cout << L"Некорректный ввод." << endl;
			}
			return result;
		}

		static vector<string> get_splited_data(string str, char delimiter) {
			vector<string> splited_data;
			stringstream ss(str);
			string token;
			while (getline(ss, token, delimiter)) {
				splited_data.push_back(token);
			}
			return splited_data;
		}

		static vector<float> get_data_for_chart_last_incomes(vector<Income> incomes) {
			vector<float> data;
			for (size_t i = 0; i < incomes.size(); i++) {
				data.push_back(i + 1);
				data.push_back(incomes.at(i).get_sum());
			}
			return data;
		}

		static vector<float> get_data_for_chart_last_expenses(vector<Expense> expenses) {
			vector<float> data;
			for (size_t i = 0; i < expenses.size(); i++) {
				data.push_back(i + 1);
				data.push_back(expenses.at(i).get_sum());
			}
			return data;
		}

		static vector<Transaction> get_transaction(vector<Income> incomes, vector<Expense> expenses, string date, string period) {
			vector<string> arr_date = get_splited_data(date, '/');
			vector<Transaction> transactions;
			if (period == "day") {
				for (auto& income : incomes) {
					if (income.get_date() == date) {
							transactions.push_back(Transaction(L"Доход", income.get_date(), income.get_sum(),income.get_type()));
					}
				}
				for (auto& expense : expenses) {
					if (expense.get_date() == date) {
						transactions.push_back(Transaction(L"Расход", expense.get_date(), expense.get_sum(), expense.get_type()));
					}
				}
				return transactions;
			}
			else if (period == "month") {
				for (auto& income : incomes) {
					vector<string> spl_date = get_splited_data(income.get_date(), '/');
					if (std::to_string(income.get_month(spl_date)) == arr_date.at(1) 
						&& std::to_string(income.get_year(spl_date)) == arr_date.at(2)) {
						transactions.push_back(Transaction(L"Доход", income.get_date(), income.get_sum(), income.get_type()));
					}
				}
				for (auto& expense : expenses) {
					vector<string> spl_date = get_splited_data(expense.get_date(), '/');
					if (std::to_string(expense.get_month(spl_date)) == arr_date.at(1)
						&& std::to_string(expense.get_year(spl_date)) == arr_date.at(2)) {
						transactions.push_back(Transaction(L"Расход", expense.get_date(), expense.get_sum(), expense.get_type()));
					}
				}
				return transactions;
			}
			else {
				for (auto& income : incomes) {
					vector<string> spl_date = get_splited_data(income.get_date(), '/');
					if (std::to_string(income.get_year(spl_date)) == arr_date.at(2)) {
						transactions.push_back(Transaction(L"Доход", income.get_date(), income.get_sum(), income.get_type()));
					}
				}
				for (auto& expense : expenses) {
					vector<string> spl_date = get_splited_data(expense.get_date(), '/');
					if (std::to_string(expense.get_year(spl_date)) == arr_date.at(2)) {
						transactions.push_back(Transaction(L"Расход", expense.get_date(), expense.get_sum(), expense.get_type()));
					}
				}
				return transactions;
			}
		}





	};

}