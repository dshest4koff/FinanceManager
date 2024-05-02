#pragma once
#include "Main.h"


namespace FNM {
	using namespace FNM;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;



	FNM::Incomes incomes;
	FNM::Expenses expenses;
	FNM::Users users;
	FNM::Utils utils;
	FNM::User auth_user;
	FNM::FinancialReport report;



	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_header;
	private: System::Windows::Forms::TextBox^ user_login;
	private: System::Windows::Forms::TextBox^ user_password;
	private: System::Windows::Forms::Label^ label_login;
	private: System::Windows::Forms::Label^ label_password;
	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::LinkLabel^ link_sing_up;
	private: System::Windows::Forms::Button^ button_sing_up;

	private: System::Windows::Forms::Button^ button_incomes;
	private: System::Windows::Forms::Button^ button_expenses;
	private: System::Windows::Forms::Button^ button_analyze;
	private: System::Windows::Forms::Button^ button_report;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::Label^ label_header_transaction;
	private: System::Windows::Forms::Label^ label_total_sum_icomes;
	private: System::Windows::Forms::Label^ total_sum_incomes;


	private: System::Windows::Forms::Button^ button_delete_incomes;
	private: System::Windows::Forms::Button^ button_back;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Event;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::TextBox^ sum_transaction;
	private: System::Windows::Forms::TextBox^ type_transaction;
	private: System::Windows::Forms::Label^ label_date;
	private: System::Windows::Forms::Label^ label_sum;
	private: System::Windows::Forms::Label^ label_type;
	private: System::Windows::Forms::Button^ button_add_income;
	private: System::Windows::Forms::Label^ label_head_of_list;
	private: System::Windows::Forms::Button^ button_save_incomes;
	private: System::Windows::Forms::Button^ button_add_expense;
	private: System::Windows::Forms::Button^ button_save_expenses;
	private: System::Windows::Forms::Button^ button_delete_expense;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_incomes;


	private: System::Windows::Forms::Label^ label_set_budget;
	private: System::Windows::Forms::TextBox^ set_budget;
	private: System::Windows::Forms::Button^ button_set_budget;
	private: System::Windows::Forms::Button^ button_go_to_reset_budget;
	private: System::Windows::Forms::Button^ button_reset_budget;
	private: System::Windows::Forms::TextBox^ secret_word;
	private: System::Windows::Forms::Label^ label_secret_word;
	private: System::Windows::Forms::LinkLabel^ recover_password;
	private: System::Windows::Forms::Button^ button_back_to_main;
	private: System::Windows::Forms::Button^ button_get_password;
	private: System::Windows::Forms::Label^ label_total_sum_expenses;
	private: System::Windows::Forms::Label^ total_sum_expenses;
	private: System::Windows::Forms::Label^ label_sum_budget;
	private: System::Windows::Forms::Label^ total_sum_budget;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart_expenses;
	private: System::Windows::Forms::Button^ button_report_for_day;

	private: System::Windows::Forms::Button^ button_report_for_month;
	private: System::Windows::Forms::Button^ button_report_for_year;
	private: System::Windows::Forms::Label^ label_report_transactions;
	private: System::Windows::Forms::DataGridView^ dataGridView_report_transactions;




	private: System::Windows::Forms::Button^ button_save_report;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ report_type_transaction;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ report_date_transaction;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ report_sum_transaction;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ report_type_t;








	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label_header = (gcnew System::Windows::Forms::Label());
			this->user_login = (gcnew System::Windows::Forms::TextBox());
			this->user_password = (gcnew System::Windows::Forms::TextBox());
			this->label_login = (gcnew System::Windows::Forms::Label());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->link_sing_up = (gcnew System::Windows::Forms::LinkLabel());
			this->button_sing_up = (gcnew System::Windows::Forms::Button());
			this->button_incomes = (gcnew System::Windows::Forms::Button());
			this->button_expenses = (gcnew System::Windows::Forms::Button());
			this->button_analyze = (gcnew System::Windows::Forms::Button());
			this->button_report = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Event = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->label_header_transaction = (gcnew System::Windows::Forms::Label());
			this->label_total_sum_icomes = (gcnew System::Windows::Forms::Label());
			this->total_sum_incomes = (gcnew System::Windows::Forms::Label());
			this->button_delete_incomes = (gcnew System::Windows::Forms::Button());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->sum_transaction = (gcnew System::Windows::Forms::TextBox());
			this->type_transaction = (gcnew System::Windows::Forms::TextBox());
			this->label_date = (gcnew System::Windows::Forms::Label());
			this->label_sum = (gcnew System::Windows::Forms::Label());
			this->label_type = (gcnew System::Windows::Forms::Label());
			this->button_add_income = (gcnew System::Windows::Forms::Button());
			this->label_head_of_list = (gcnew System::Windows::Forms::Label());
			this->button_save_incomes = (gcnew System::Windows::Forms::Button());
			this->button_add_expense = (gcnew System::Windows::Forms::Button());
			this->button_save_expenses = (gcnew System::Windows::Forms::Button());
			this->button_delete_expense = (gcnew System::Windows::Forms::Button());
			this->chart_incomes = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label_set_budget = (gcnew System::Windows::Forms::Label());
			this->set_budget = (gcnew System::Windows::Forms::TextBox());
			this->button_set_budget = (gcnew System::Windows::Forms::Button());
			this->button_go_to_reset_budget = (gcnew System::Windows::Forms::Button());
			this->button_reset_budget = (gcnew System::Windows::Forms::Button());
			this->secret_word = (gcnew System::Windows::Forms::TextBox());
			this->label_secret_word = (gcnew System::Windows::Forms::Label());
			this->recover_password = (gcnew System::Windows::Forms::LinkLabel());
			this->button_back_to_main = (gcnew System::Windows::Forms::Button());
			this->button_get_password = (gcnew System::Windows::Forms::Button());
			this->label_total_sum_expenses = (gcnew System::Windows::Forms::Label());
			this->total_sum_expenses = (gcnew System::Windows::Forms::Label());
			this->label_sum_budget = (gcnew System::Windows::Forms::Label());
			this->total_sum_budget = (gcnew System::Windows::Forms::Label());
			this->chart_expenses = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_report_for_day = (gcnew System::Windows::Forms::Button());
			this->button_report_for_month = (gcnew System::Windows::Forms::Button());
			this->button_report_for_year = (gcnew System::Windows::Forms::Button());
			this->label_report_transactions = (gcnew System::Windows::Forms::Label());
			this->dataGridView_report_transactions = (gcnew System::Windows::Forms::DataGridView());
			this->report_type_transaction = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->report_date_transaction = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->report_sum_transaction = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->report_type_t = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_save_report = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_incomes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_expenses))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_report_transactions))->BeginInit();
			this->SuspendLayout();
			// 
			// label_header
			// 
			this->label_header->AutoSize = true;
			this->label_header->Font = (gcnew System::Drawing::Font(L"Verdana", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_header->Location = System::Drawing::Point(440, 192);
			this->label_header->Name = L"label_header";
			this->label_header->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label_header->Size = System::Drawing::Size(200, 73);
			this->label_header->TabIndex = 0;
			this->label_header->Text = L"Вход";
			// 
			// user_login
			// 
			this->user_login->Location = System::Drawing::Point(408, 309);
			this->user_login->Name = L"user_login";
			this->user_login->Size = System::Drawing::Size(230, 32);
			this->user_login->TabIndex = 1;
			// 
			// user_password
			// 
			this->user_password->Location = System::Drawing::Point(408, 374);
			this->user_password->Name = L"user_password";
			this->user_password->PasswordChar = '*';
			this->user_password->Size = System::Drawing::Size(230, 32);
			this->user_password->TabIndex = 2;
			// 
			// label_login
			// 
			this->label_login->AutoSize = true;
			this->label_login->Location = System::Drawing::Point(312, 309);
			this->label_login->Name = L"label_login";
			this->label_login->Size = System::Drawing::Size(90, 25);
			this->label_login->TabIndex = 3;
			this->label_login->Text = L"Логин:";
			// 
			// label_password
			// 
			this->label_password->AutoSize = true;
			this->label_password->Location = System::Drawing::Point(297, 374);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(105, 25);
			this->label_password->TabIndex = 4;
			this->label_password->Text = L"Пароль:";
			// 
			// button_login
			// 
			this->button_login->Location = System::Drawing::Point(408, 422);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(230, 53);
			this->button_login->TabIndex = 5;
			this->button_login->Text = L"Войти";
			this->button_login->UseVisualStyleBackColor = true;
			this->button_login->Click += gcnew System::EventHandler(this, &MainForm::button_login_Click);
			// 
			// link_sing_up
			// 
			this->link_sing_up->AutoSize = true;
			this->link_sing_up->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->link_sing_up->Location = System::Drawing::Point(455, 478);
			this->link_sing_up->Name = L"link_sing_up";
			this->link_sing_up->Size = System::Drawing::Size(146, 16);
			this->link_sing_up->TabIndex = 6;
			this->link_sing_up->TabStop = true;
			this->link_sing_up->Text = L"Зарегистрироваться";
			this->link_sing_up->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::link_sing_up_LinkClicked);
			// 
			// button_sing_up
			// 
			this->button_sing_up->Location = System::Drawing::Point(382, 461);
			this->button_sing_up->Name = L"button_sing_up";
			this->button_sing_up->Size = System::Drawing::Size(274, 53);
			this->button_sing_up->TabIndex = 7;
			this->button_sing_up->Text = L"Зарегистрироваться";
			this->button_sing_up->UseVisualStyleBackColor = true;
			this->button_sing_up->Visible = false;
			this->button_sing_up->Click += gcnew System::EventHandler(this, &MainForm::button_sing_up_Click);
			// 
			// button_incomes
			// 
			this->button_incomes->Location = System::Drawing::Point(382, 192);
			this->button_incomes->Name = L"button_incomes";
			this->button_incomes->Size = System::Drawing::Size(274, 53);
			this->button_incomes->TabIndex = 9;
			this->button_incomes->Text = L"Доходы";
			this->button_incomes->UseVisualStyleBackColor = true;
			this->button_incomes->Visible = false;
			this->button_incomes->Click += gcnew System::EventHandler(this, &MainForm::button_incomes_Click);
			// 
			// button_expenses
			// 
			this->button_expenses->Location = System::Drawing::Point(382, 251);
			this->button_expenses->Name = L"button_expenses";
			this->button_expenses->Size = System::Drawing::Size(274, 53);
			this->button_expenses->TabIndex = 10;
			this->button_expenses->Text = L"Расходы";
			this->button_expenses->UseVisualStyleBackColor = true;
			this->button_expenses->Visible = false;
			this->button_expenses->Click += gcnew System::EventHandler(this, &MainForm::button_expenses_Click);
			// 
			// button_analyze
			// 
			this->button_analyze->Location = System::Drawing::Point(382, 310);
			this->button_analyze->Name = L"button_analyze";
			this->button_analyze->Size = System::Drawing::Size(274, 53);
			this->button_analyze->TabIndex = 11;
			this->button_analyze->Text = L"Анализ";
			this->button_analyze->UseVisualStyleBackColor = true;
			this->button_analyze->Visible = false;
			this->button_analyze->Click += gcnew System::EventHandler(this, &MainForm::button_analyze_Click);
			// 
			// button_report
			// 
			this->button_report->Location = System::Drawing::Point(382, 369);
			this->button_report->Name = L"button_report";
			this->button_report->Size = System::Drawing::Size(274, 53);
			this->button_report->TabIndex = 12;
			this->button_report->Text = L"Отчет";
			this->button_report->UseVisualStyleBackColor = true;
			this->button_report->Visible = false;
			this->button_report->Click += gcnew System::EventHandler(this, &MainForm::button_report_Click);
			// 
			// button_exit
			// 
			this->button_exit->Location = System::Drawing::Point(382, 428);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(274, 53);
			this->button_exit->TabIndex = 13;
			this->button_exit->Text = L"Выход";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Visible = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MainForm::button_exit_Click);
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Date,
					this->Sum, this->Type, this->Event
			});
			this->dataGridView->Location = System::Drawing::Point(52, 252);
			this->dataGridView->MultiSelect = false;
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(680, 427);
			this->dataGridView->TabIndex = 14;
			this->dataGridView->Visible = false;
			// 
			// ID
			// 
			this->ID->HeaderText = L"Номер";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 125;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Дата";
			this->Date->MinimumWidth = 6;
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Width = 125;
			// 
			// Sum
			// 
			this->Sum->HeaderText = L"Сумма";
			this->Sum->MinimumWidth = 6;
			this->Sum->Name = L"Sum";
			this->Sum->ReadOnly = true;
			this->Sum->Width = 125;
			// 
			// Type
			// 
			this->Type->HeaderText = L"Тип";
			this->Type->MinimumWidth = 6;
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			this->Type->Width = 125;
			// 
			// Event
			// 
			this->Event->HeaderText = L"Выбрать";
			this->Event->MinimumWidth = 6;
			this->Event->Name = L"Event";
			this->Event->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Event->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Event->Width = 125;
			// 
			// label_header_transaction
			// 
			this->label_header_transaction->AutoSize = true;
			this->label_header_transaction->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_header_transaction->Location = System::Drawing::Point(390, 60);
			this->label_header_transaction->Name = L"label_header_transaction";
			this->label_header_transaction->Size = System::Drawing::Size(200, 48);
			this->label_header_transaction->TabIndex = 15;
			this->label_header_transaction->Text = L"Доходы";
			this->label_header_transaction->Visible = false;
			// 
			// label_total_sum_icomes
			// 
			this->label_total_sum_icomes->AutoSize = true;
			this->label_total_sum_icomes->Location = System::Drawing::Point(47, 144);
			this->label_total_sum_icomes->Name = L"label_total_sum_icomes";
			this->label_total_sum_icomes->Size = System::Drawing::Size(281, 25);
			this->label_total_sum_icomes->TabIndex = 16;
			this->label_total_sum_icomes->Text = L"Общая сумма доходов:";
			this->label_total_sum_icomes->Visible = false;
			// 
			// total_sum_incomes
			// 
			this->total_sum_incomes->Location = System::Drawing::Point(63, 172);
			this->total_sum_incomes->Name = L"total_sum_incomes";
			this->total_sum_incomes->Size = System::Drawing::Size(250, 25);
			this->total_sum_incomes->TabIndex = 17;
			this->total_sum_incomes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->total_sum_incomes->Visible = false;
			// 
			// button_delete_incomes
			// 
			this->button_delete_incomes->Location = System::Drawing::Point(780, 324);
			this->button_delete_incomes->Name = L"button_delete_incomes";
			this->button_delete_incomes->Size = System::Drawing::Size(194, 66);
			this->button_delete_incomes->TabIndex = 18;
			this->button_delete_incomes->Text = L"Удалить выбранные";
			this->button_delete_incomes->UseVisualStyleBackColor = true;
			this->button_delete_incomes->Visible = false;
			this->button_delete_incomes->Click += gcnew System::EventHandler(this, &MainForm::button_delete_incomes_Click);
			// 
			// button_back
			// 
			this->button_back->Font = (gcnew System::Drawing::Font(L"Verdana", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_back->Location = System::Drawing::Point(13, 13);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(65, 50);
			this->button_back->TabIndex = 19;
			this->button_back->Text = L"←";
			this->button_back->UseVisualStyleBackColor = true;
			this->button_back->Visible = false;
			this->button_back->Click += gcnew System::EventHandler(this, &MainForm::button_back_Click);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(152, 147);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 32);
			this->dateTimePicker->TabIndex = 20;
			this->dateTimePicker->Visible = false;
			// 
			// sum_transaction
			// 
			this->sum_transaction->Location = System::Drawing::Point(458, 147);
			this->sum_transaction->Name = L"sum_transaction";
			this->sum_transaction->Size = System::Drawing::Size(100, 32);
			this->sum_transaction->TabIndex = 21;
			this->sum_transaction->Visible = false;
			// 
			// type_transaction
			// 
			this->type_transaction->Location = System::Drawing::Point(632, 144);
			this->type_transaction->Name = L"type_transaction";
			this->type_transaction->Size = System::Drawing::Size(100, 32);
			this->type_transaction->TabIndex = 22;
			this->type_transaction->Visible = false;
			// 
			// label_date
			// 
			this->label_date->AutoSize = true;
			this->label_date->Location = System::Drawing::Point(73, 147);
			this->label_date->Name = L"label_date";
			this->label_date->Size = System::Drawing::Size(74, 25);
			this->label_date->TabIndex = 23;
			this->label_date->Text = L"Дата:";
			this->label_date->Visible = false;
			// 
			// label_sum
			// 
			this->label_sum->AutoSize = true;
			this->label_sum->Location = System::Drawing::Point(358, 147);
			this->label_sum->Name = L"label_sum";
			this->label_sum->Size = System::Drawing::Size(94, 25);
			this->label_sum->TabIndex = 24;
			this->label_sum->Text = L"Сумма:";
			this->label_sum->Visible = false;
			// 
			// label_type
			// 
			this->label_type->AutoSize = true;
			this->label_type->Location = System::Drawing::Point(564, 147);
			this->label_type->Name = L"label_type";
			this->label_type->Size = System::Drawing::Size(62, 25);
			this->label_type->TabIndex = 25;
			this->label_type->Text = L"Тип:";
			this->label_type->Visible = false;
			// 
			// button_add_income
			// 
			this->button_add_income->Location = System::Drawing::Point(768, 141);
			this->button_add_income->Name = L"button_add_income";
			this->button_add_income->Size = System::Drawing::Size(146, 42);
			this->button_add_income->TabIndex = 26;
			this->button_add_income->Text = L"Добавить";
			this->button_add_income->UseVisualStyleBackColor = true;
			this->button_add_income->Visible = false;
			this->button_add_income->Click += gcnew System::EventHandler(this, &MainForm::button_add_income_Click);
			// 
			// label_head_of_list
			// 
			this->label_head_of_list->AutoSize = true;
			this->label_head_of_list->Location = System::Drawing::Point(73, 220);
			this->label_head_of_list->Name = L"label_head_of_list";
			this->label_head_of_list->Size = System::Drawing::Size(197, 25);
			this->label_head_of_list->TabIndex = 27;
			this->label_head_of_list->Text = L"Список доходов";
			this->label_head_of_list->Visible = false;
			// 
			// button_save_incomes
			// 
			this->button_save_incomes->Location = System::Drawing::Point(780, 251);
			this->button_save_incomes->Name = L"button_save_incomes";
			this->button_save_incomes->Size = System::Drawing::Size(194, 66);
			this->button_save_incomes->TabIndex = 28;
			this->button_save_incomes->Text = L"Сохранить";
			this->button_save_incomes->UseVisualStyleBackColor = true;
			this->button_save_incomes->Visible = false;
			this->button_save_incomes->Click += gcnew System::EventHandler(this, &MainForm::button_save_incomes_Click);
			// 
			// button_add_expense
			// 
			this->button_add_expense->Location = System::Drawing::Point(768, 141);
			this->button_add_expense->Name = L"button_add_expense";
			this->button_add_expense->Size = System::Drawing::Size(146, 42);
			this->button_add_expense->TabIndex = 29;
			this->button_add_expense->Text = L"Добавить";
			this->button_add_expense->UseVisualStyleBackColor = true;
			this->button_add_expense->Visible = false;
			this->button_add_expense->Click += gcnew System::EventHandler(this, &MainForm::button_add_expense_Click);
			// 
			// button_save_expenses
			// 
			this->button_save_expenses->Location = System::Drawing::Point(780, 252);
			this->button_save_expenses->Name = L"button_save_expenses";
			this->button_save_expenses->Size = System::Drawing::Size(194, 66);
			this->button_save_expenses->TabIndex = 30;
			this->button_save_expenses->Text = L"Сохранить";
			this->button_save_expenses->UseVisualStyleBackColor = true;
			this->button_save_expenses->Visible = false;
			this->button_save_expenses->Click += gcnew System::EventHandler(this, &MainForm::button_save_expenses_Click);
			// 
			// button_delete_expense
			// 
			this->button_delete_expense->Location = System::Drawing::Point(780, 324);
			this->button_delete_expense->Name = L"button_delete_expense";
			this->button_delete_expense->Size = System::Drawing::Size(194, 66);
			this->button_delete_expense->TabIndex = 31;
			this->button_delete_expense->Text = L"Удалить выбранные";
			this->button_delete_expense->UseVisualStyleBackColor = true;
			this->button_delete_expense->Visible = false;
			this->button_delete_expense->Click += gcnew System::EventHandler(this, &MainForm::button_delete_expense_Click);
			// 
			// chart_incomes
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart_incomes->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			legend1->Position->Auto = false;
			legend1->Position->Height = 8.910892F;
			legend1->Position->Width = 43.30218F;
			legend1->Position->X = 50.69782F;
			legend1->Position->Y = 3;
			this->chart_incomes->Legends->Add(legend1);
			this->chart_incomes->Location = System::Drawing::Point(24, 324);
			this->chart_incomes->Name = L"chart_incomes";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L" Сумма дохода";
			this->chart_incomes->Series->Add(series1);
			this->chart_incomes->Size = System::Drawing::Size(469, 355);
			this->chart_incomes->TabIndex = 32;
			this->chart_incomes->Text = L"Доходы";
			title1->Alignment = System::Drawing::ContentAlignment::TopLeft;
			title1->Name = L"title_chart_incomes";
			title1->Text = L"Последние доходы(макс. 5)";
			this->chart_incomes->Titles->Add(title1);
			this->chart_incomes->Visible = false;
			// 
			// label_set_budget
			// 
			this->label_set_budget->AutoSize = true;
			this->label_set_budget->Location = System::Drawing::Point(347, 206);
			this->label_set_budget->Name = L"label_set_budget";
			this->label_set_budget->Size = System::Drawing::Size(385, 25);
			this->label_set_budget->TabIndex = 33;
			this->label_set_budget->Text = L"Установите начальный бюджет:";
			this->label_set_budget->Visible = false;
			// 
			// set_budget
			// 
			this->set_budget->Location = System::Drawing::Point(424, 251);
			this->set_budget->Name = L"set_budget";
			this->set_budget->Size = System::Drawing::Size(232, 32);
			this->set_budget->TabIndex = 34;
			this->set_budget->Visible = false;
			// 
			// button_set_budget
			// 
			this->button_set_budget->Location = System::Drawing::Point(444, 291);
			this->button_set_budget->Name = L"button_set_budget";
			this->button_set_budget->Size = System::Drawing::Size(194, 66);
			this->button_set_budget->TabIndex = 35;
			this->button_set_budget->Text = L"Установить";
			this->button_set_budget->UseVisualStyleBackColor = true;
			this->button_set_budget->Visible = false;
			this->button_set_budget->Click += gcnew System::EventHandler(this, &MainForm::button_set_budget_Click);
			// 
			// button_go_to_reset_budget
			// 
			this->button_go_to_reset_budget->Location = System::Drawing::Point(382, 133);
			this->button_go_to_reset_budget->Name = L"button_go_to_reset_budget";
			this->button_go_to_reset_budget->Size = System::Drawing::Size(274, 53);
			this->button_go_to_reset_budget->TabIndex = 36;
			this->button_go_to_reset_budget->Text = L"Начальный бюджет";
			this->button_go_to_reset_budget->UseVisualStyleBackColor = true;
			this->button_go_to_reset_budget->Visible = false;
			this->button_go_to_reset_budget->Click += gcnew System::EventHandler(this, &MainForm::button_go_to_reset_budget_Click);
			// 
			// button_reset_budget
			// 
			this->button_reset_budget->Location = System::Drawing::Point(444, 289);
			this->button_reset_budget->Name = L"button_reset_budget";
			this->button_reset_budget->Size = System::Drawing::Size(194, 66);
			this->button_reset_budget->TabIndex = 37;
			this->button_reset_budget->Text = L"Установить";
			this->button_reset_budget->UseVisualStyleBackColor = true;
			this->button_reset_budget->Visible = false;
			this->button_reset_budget->Click += gcnew System::EventHandler(this, &MainForm::button_reset_budget_Click);
			// 
			// secret_word
			// 
			this->secret_word->Location = System::Drawing::Point(408, 419);
			this->secret_word->Name = L"secret_word";
			this->secret_word->Size = System::Drawing::Size(230, 32);
			this->secret_word->TabIndex = 38;
			this->secret_word->Visible = false;
			// 
			// label_secret_word
			// 
			this->label_secret_word->AutoSize = true;
			this->label_secret_word->Location = System::Drawing::Point(218, 422);
			this->label_secret_word->Name = L"label_secret_word";
			this->label_secret_word->Size = System::Drawing::Size(193, 25);
			this->label_secret_word->TabIndex = 39;
			this->label_secret_word->Text = L"Кодовое слово:";
			this->label_secret_word->Visible = false;
			// 
			// recover_password
			// 
			this->recover_password->AutoSize = true;
			this->recover_password->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->recover_password->Location = System::Drawing::Point(455, 498);
			this->recover_password->Name = L"recover_password";
			this->recover_password->Size = System::Drawing::Size(152, 16);
			this->recover_password->TabIndex = 40;
			this->recover_password->TabStop = true;
			this->recover_password->Text = L"Восстановить пароль";
			this->recover_password->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::recover_password_LinkClicked);
			// 
			// button_back_to_main
			// 
			this->button_back_to_main->Font = (gcnew System::Drawing::Font(L"Verdana", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_back_to_main->Location = System::Drawing::Point(13, 13);
			this->button_back_to_main->Name = L"button_back_to_main";
			this->button_back_to_main->Size = System::Drawing::Size(65, 50);
			this->button_back_to_main->TabIndex = 41;
			this->button_back_to_main->Text = L"←";
			this->button_back_to_main->UseVisualStyleBackColor = true;
			this->button_back_to_main->Visible = false;
			this->button_back_to_main->Click += gcnew System::EventHandler(this, &MainForm::button_back_to_main_Click);
			// 
			// button_get_password
			// 
			this->button_get_password->Location = System::Drawing::Point(444, 415);
			this->button_get_password->Name = L"button_get_password";
			this->button_get_password->Size = System::Drawing::Size(194, 66);
			this->button_get_password->TabIndex = 42;
			this->button_get_password->Text = L"Восстановить пароль";
			this->button_get_password->UseVisualStyleBackColor = true;
			this->button_get_password->Visible = false;
			this->button_get_password->Click += gcnew System::EventHandler(this, &MainForm::button_get_password_Click);
			// 
			// label_total_sum_expenses
			// 
			this->label_total_sum_expenses->AutoSize = true;
			this->label_total_sum_expenses->Location = System::Drawing::Point(364, 144);
			this->label_total_sum_expenses->Name = L"label_total_sum_expenses";
			this->label_total_sum_expenses->Size = System::Drawing::Size(292, 25);
			this->label_total_sum_expenses->TabIndex = 43;
			this->label_total_sum_expenses->Text = L"Общая сумма расходов:";
			this->label_total_sum_expenses->Visible = false;
			// 
			// total_sum_expenses
			// 
			this->total_sum_expenses->Location = System::Drawing::Point(390, 172);
			this->total_sum_expenses->Name = L"total_sum_expenses";
			this->total_sum_expenses->Size = System::Drawing::Size(250, 25);
			this->total_sum_expenses->TabIndex = 44;
			this->total_sum_expenses->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->total_sum_expenses->Visible = false;
			// 
			// label_sum_budget
			// 
			this->label_sum_budget->AutoSize = true;
			this->label_sum_budget->Location = System::Drawing::Point(738, 144);
			this->label_sum_budget->Name = L"label_sum_budget";
			this->label_sum_budget->Size = System::Drawing::Size(220, 25);
			this->label_sum_budget->TabIndex = 45;
			this->label_sum_budget->Text = L"Текущий бюджет:";
			this->label_sum_budget->Visible = false;
			// 
			// total_sum_budget
			// 
			this->total_sum_budget->Location = System::Drawing::Point(724, 169);
			this->total_sum_budget->Name = L"total_sum_budget";
			this->total_sum_budget->Size = System::Drawing::Size(250, 25);
			this->total_sum_budget->TabIndex = 46;
			this->total_sum_budget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->total_sum_budget->Visible = false;
			// 
			// chart_expenses
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart_expenses->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			legend2->Position->Auto = false;
			legend2->Position->Height = 8.910892F;
			legend2->Position->Width = 43.30218F;
			legend2->Position->X = 50.69782F;
			legend2->Position->Y = 3;
			this->chart_expenses->Legends->Add(legend2);
			this->chart_expenses->Location = System::Drawing::Point(514, 324);
			this->chart_expenses->Name = L"chart_expenses";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L" Сумма расхода";
			this->chart_expenses->Series->Add(series2);
			this->chart_expenses->Size = System::Drawing::Size(469, 355);
			this->chart_expenses->TabIndex = 47;
			this->chart_expenses->Text = L"Доходы";
			title2->Alignment = System::Drawing::ContentAlignment::TopLeft;
			title2->Name = L"title_chart_expenses";
			title2->Text = L"Последние расходы(макс. 5)";
			this->chart_expenses->Titles->Add(title2);
			this->chart_expenses->Visible = false;
			// 
			// button_report_for_day
			// 
			this->button_report_for_day->Location = System::Drawing::Point(52, 133);
			this->button_report_for_day->Name = L"button_report_for_day";
			this->button_report_for_day->Size = System::Drawing::Size(194, 66);
			this->button_report_for_day->TabIndex = 48;
			this->button_report_for_day->Text = L"За день";
			this->button_report_for_day->UseVisualStyleBackColor = true;
			this->button_report_for_day->Visible = false;
			this->button_report_for_day->Click += gcnew System::EventHandler(this, &MainForm::button_report_for_day_Click);
			// 
			// button_report_for_month
			// 
			this->button_report_for_month->Location = System::Drawing::Point(271, 132);
			this->button_report_for_month->Name = L"button_report_for_month";
			this->button_report_for_month->Size = System::Drawing::Size(194, 66);
			this->button_report_for_month->TabIndex = 50;
			this->button_report_for_month->Text = L"За месяц";
			this->button_report_for_month->UseVisualStyleBackColor = true;
			this->button_report_for_month->Visible = false;
			this->button_report_for_month->Click += gcnew System::EventHandler(this, &MainForm::button_report_for_month_Click);
			// 
			// button_report_for_year
			// 
			this->button_report_for_year->Location = System::Drawing::Point(493, 133);
			this->button_report_for_year->Name = L"button_report_for_year";
			this->button_report_for_year->Size = System::Drawing::Size(194, 66);
			this->button_report_for_year->TabIndex = 51;
			this->button_report_for_year->Text = L"За год";
			this->button_report_for_year->UseVisualStyleBackColor = true;
			this->button_report_for_year->Visible = false;
			this->button_report_for_year->Click += gcnew System::EventHandler(this, &MainForm::button_report_for_year_Click);
			// 
			// label_report_transactions
			// 
			this->label_report_transactions->AutoSize = true;
			this->label_report_transactions->Location = System::Drawing::Point(73, 220);
			this->label_report_transactions->Name = L"label_report_transactions";
			this->label_report_transactions->Size = System::Drawing::Size(233, 25);
			this->label_report_transactions->TabIndex = 52;
			this->label_report_transactions->Text = L"Список транзакций";
			this->label_report_transactions->Visible = false;
			// 
			// dataGridView_report_transactions
			// 
			this->dataGridView_report_transactions->AllowUserToAddRows = false;
			this->dataGridView_report_transactions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_report_transactions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->report_type_transaction,
					this->report_date_transaction, this->report_sum_transaction, this->report_type_t
			});
			this->dataGridView_report_transactions->Location = System::Drawing::Point(52, 252);
			this->dataGridView_report_transactions->MultiSelect = false;
			this->dataGridView_report_transactions->Name = L"dataGridView_report_transactions";
			this->dataGridView_report_transactions->RowHeadersWidth = 51;
			this->dataGridView_report_transactions->RowTemplate->Height = 24;
			this->dataGridView_report_transactions->Size = System::Drawing::Size(680, 427);
			this->dataGridView_report_transactions->TabIndex = 53;
			this->dataGridView_report_transactions->Visible = false;
			// 
			// report_type_transaction
			// 
			this->report_type_transaction->HeaderText = L"Тип транзакции";
			this->report_type_transaction->MinimumWidth = 6;
			this->report_type_transaction->Name = L"report_type_transaction";
			this->report_type_transaction->Width = 200;
			// 
			// report_date_transaction
			// 
			this->report_date_transaction->HeaderText = L"Дата";
			this->report_date_transaction->MinimumWidth = 6;
			this->report_date_transaction->Name = L"report_date_transaction";
			this->report_date_transaction->Width = 150;
			// 
			// report_sum_transaction
			// 
			this->report_sum_transaction->HeaderText = L"Сумма";
			this->report_sum_transaction->MinimumWidth = 6;
			this->report_sum_transaction->Name = L"report_sum_transaction";
			this->report_sum_transaction->Width = 125;
			// 
			// report_type_t
			// 
			this->report_type_t->HeaderText = L"Тип";
			this->report_type_t->MinimumWidth = 6;
			this->report_type_t->Name = L"report_type_t";
			this->report_type_t->Width = 150;
			// 
			// button_save_report
			// 
			this->button_save_report->Location = System::Drawing::Point(780, 252);
			this->button_save_report->Name = L"button_save_report";
			this->button_save_report->Size = System::Drawing::Size(194, 66);
			this->button_save_report->TabIndex = 54;
			this->button_save_report->Text = L"Сохранить";
			this->button_save_report->UseVisualStyleBackColor = true;
			this->button_save_report->Visible = false;
			this->button_save_report->Click += gcnew System::EventHandler(this, &MainForm::button_save_report_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->button_save_report);
			this->Controls->Add(this->dataGridView_report_transactions);
			this->Controls->Add(this->label_report_transactions);
			this->Controls->Add(this->button_report_for_year);
			this->Controls->Add(this->button_report_for_month);
			this->Controls->Add(this->button_report_for_day);
			this->Controls->Add(this->total_sum_budget);
			this->Controls->Add(this->label_sum_budget);
			this->Controls->Add(this->total_sum_expenses);
			this->Controls->Add(this->label_total_sum_expenses);
			this->Controls->Add(this->label_total_sum_icomes);
			this->Controls->Add(this->button_back_to_main);
			this->Controls->Add(this->recover_password);
			this->Controls->Add(this->button_reset_budget);
			this->Controls->Add(this->button_go_to_reset_budget);
			this->Controls->Add(this->button_set_budget);
			this->Controls->Add(this->set_budget);
			this->Controls->Add(this->button_delete_expense);
			this->Controls->Add(this->button_save_expenses);
			this->Controls->Add(this->button_add_expense);
			this->Controls->Add(this->button_save_incomes);
			this->Controls->Add(this->label_head_of_list);
			this->Controls->Add(this->button_add_income);
			this->Controls->Add(this->label_type);
			this->Controls->Add(this->label_sum);
			this->Controls->Add(this->label_date);
			this->Controls->Add(this->type_transaction);
			this->Controls->Add(this->sum_transaction);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->button_delete_incomes);
			this->Controls->Add(this->total_sum_incomes);
			this->Controls->Add(this->label_header_transaction);
			this->Controls->Add(this->button_analyze);
			this->Controls->Add(this->button_expenses);
			this->Controls->Add(this->button_incomes);
			this->Controls->Add(this->link_sing_up);
			this->Controls->Add(this->label_login);
			this->Controls->Add(this->user_login);
			this->Controls->Add(this->label_header);
			this->Controls->Add(this->label_set_budget);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_report);
			this->Controls->Add(this->button_sing_up);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->chart_incomes);
			this->Controls->Add(this->chart_expenses);
			this->Controls->Add(this->label_secret_word);
			this->Controls->Add(this->secret_word);
			this->Controls->Add(this->button_get_password);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->user_password);
			this->Controls->Add(this->label_password);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Финансовый менеджер";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_incomes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_expenses))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_report_transactions))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
		login();
	}

	private: System::Void link_sing_up_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->label_header->Text = L"Регистрация";
		this->label_header->Location = System::Drawing::Point(340, 192);
		this->secret_word->Location = System::Drawing::Point(408, 419);
		this->label_secret_word->Location = System::Drawing::Point(218, 422);
		this->user_login->Clear();
		this->user_password->Clear();
		this->secret_word->Clear();
		this->button_login->Visible = false;
		this->link_sing_up->Visible = false;
		this->button_sing_up->Visible = true;
		this->label_secret_word->Visible = true;
		this->secret_word->Visible = true;
		this->recover_password->Visible = false;
		this->button_back_to_main->Visible = true;
	}

	private: System::Void button_sing_up_Click(System::Object^ sender, System::EventArgs^ e) {
		if (create_user()) {
			go_to_set_budget();
		}
	}

	private: System::Boolean create_user() {
		if (String::IsNullOrEmpty(this->user_login->Text) || String::IsNullOrEmpty(this->user_password->Text) || String::IsNullOrEmpty(this->secret_word->Text)) {
			send_error(L"Поле логин или пароль не должно быть пустым!");
			return false;
		}
		else if (utils.validate_login(utils.convert_system_string_to_stdString(this->user_login->Text))) {
				bool is_exists = false;
				for (User user : users.get_users()) {
					if (user.get_login() == utils.convert_String_to_wstring(this->user_login->Text)) {
						is_exists = true;
						break;
					}
				}
				if (is_exists == false) {
					auth_user = User(utils.convert_String_to_wstring(this->user_login->Text), utils.convert_String_to_wstring(this->user_password->Text), 0.0f, utils.convert_String_to_wstring(this->secret_word->Text));
					users.add_user(auth_user);
					utils.write_to_file("users", utils.convert_users_to_string(users.get_users()));
					utils.create_directory(convert_wstring_to_string(auth_user.get_login()));
					utils.write_to_file(convert_wstring_to_string(auth_user.get_login()) + "/incomes", utils.convert_incomes_to_string(incomes.get_incomes()));
					utils.write_to_file(convert_wstring_to_string(auth_user.get_login()) + "/expenses", utils.convert_expenses_to_string(expenses.get_expenses()));
					return true;
				}
				else {
					send_error(L"Такой логин уже занят");
					return false;
				}
		}
		else {
			send_error(L"Логин может содержать буквы только латинского алфавита");
			return false;
		}
	}

	private: System::Void login() {
		if (!users.get_users().empty()) {
			bool correct_auth = false;
			if (String::IsNullOrEmpty(this->user_login->Text) || String::IsNullOrEmpty(this->user_password->Text)) {
				send_error(L"Поле логин или пароль не должно быть пустым!");
			}
			else {
				for (User user : users.get_users()) {
					if ((user.get_login() == (utils.convert_String_to_wstring(this->user_login->Text)))
						&& (user.get_password() == utils.convert_String_to_wstring(this->user_password->Text))) {
						send_message_ok(L"Успешный вход");
						auth_user = user;
						go_to_main_window(convert_wstring_to_string(auth_user.get_login()));
						correct_auth = true;
						break;
					}
				}
				if (!correct_auth) {
					send_error(L"Неправильный логин или пароль!");
				}
			}
		}
		else {
			send_error(L"Список пользователей пуст, необходимо зарегистрироваться");
		}
	}

	private: System::Void go_to_main_window(string login) {
		hide_all();
		load_data(login);
		show_menu();
	}

	private: System::Void send_error(wstring message) {
		wstring error = L"Ошибка";
		MessageBox::Show(this, gcnew System::String(message.c_str()), gcnew System::String(error.c_str()), MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	private: System::Void send_message_ok(wstring message) {
		wstring error = L"Успех";
		MessageBox::Show(this, gcnew System::String(message.c_str()), gcnew System::String(error.c_str()), MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void show_menu() {
		this->button_go_to_reset_budget->Visible = true;
		this->button_incomes->Visible = true;
		this->button_expenses->Visible = true;
		this->button_analyze->Visible = true;
		this->button_report->Visible = true;
		this->button_exit->Visible = true;
	}

	private: System::Void go_to_set_budget() {
		hide_all();
		this->label_set_budget->Visible = true;
		this->set_budget->Visible = true;
		this->button_set_budget->Visible = true;
	}

	private: System::Void go_to_reset_budget() {
		hide_all();
		this->label_set_budget->Visible = true;
		this->set_budget->Visible = true;
		this->button_reset_budget->Visible = true;
		this->button_back->Visible = true;
	}

	private: System::Void hide_all() {
		this->button_incomes->Visible = false;
		this->button_expenses->Visible = false;
		this->button_analyze->Visible = false;
		this->button_report->Visible = false;
		this->button_exit->Visible = false;
		this->dataGridView->Visible = false;
		this->label_header_transaction->Visible = false;
		this->button_delete_incomes->Visible = false;
		this->label_header->Visible = false;
		this->label_login->Visible = false;
		this->label_password->Visible = false;
		this->link_sing_up->Visible = false;
		this->user_login->Visible = false;
		this->user_password->Visible = false;
		this->button_login->Visible = false;
		this->button_sing_up->Visible = false;
		this->button_back->Visible = false;
		this->label_date->Visible = false;
		this->dateTimePicker->Visible = false;
		this->label_sum->Visible = false;
		this->sum_transaction->Visible = false;
		this->label_type->Visible = false;
		this->type_transaction->Visible = false;
		this->button_add_income->Visible = false;
		this->label_head_of_list->Visible = false;
		this->button_save_incomes->Visible = false;
		this->button_add_expense->Visible = false;
		this->button_save_expenses->Visible = false;
		this->button_delete_expense->Visible = false;
		this->chart_incomes->Visible = false;
		this->chart_expenses->Visible = false;
		this->button_set_budget->Visible = false;
		this->label_set_budget->Visible = false;
		this->set_budget->Visible = false;
		this->button_reset_budget->Visible = false;
		this->button_go_to_reset_budget->Visible = false;
		this->label_secret_word->Visible = false;
		this->secret_word->Visible = false;
		this->recover_password->Visible = false;
		this->button_back_to_main->Visible = false;
		this->button_get_password->Visible = false;
		this->label_total_sum_expenses->Visible = false;
		this->total_sum_expenses->Visible = false;
		this->label_total_sum_icomes->Visible = false;
		this->total_sum_incomes->Visible = false;
		this->label_sum_budget->Visible = false;
		this->total_sum_budget->Visible = false;
		this->button_report_for_day->Visible = false;
		this->button_report_for_month->Visible = false;
		this->button_report_for_year->Visible = false;
		this->button_save_report->Visible = false;
		this->label_report_transactions->Visible = false;
		this->dataGridView_report_transactions->Visible = false;
	}

	private: System::Void show_incomes() {
		this->sum_transaction->Clear();
		this->type_transaction->Clear();
		this->label_header_transaction->Text = L"Доходы";
		this->label_head_of_list->Text = L"Список доходов";
		this->dataGridView->Visible = true;
		this->label_header_transaction->Visible = true;
		this->button_delete_incomes->Visible = true;
		this->button_back->Visible = true;
		this->label_date->Visible = true;
		this->dateTimePicker->Visible = true;
		this->label_sum->Visible = true;
		this->sum_transaction->Visible = true;
		this->label_type->Visible = true;
		this->type_transaction->Visible = true;
		this->button_add_income->Visible = true;
		this->label_head_of_list->Visible = true;
		this->button_save_incomes->Visible = true;
	}

	private: System::Void show_expenses() {
		this->sum_transaction->Clear();
		this->type_transaction->Clear();
		this->dataGridView->Visible = true;
		this->label_header_transaction->Text = L"Расходы";
		this->label_header_transaction->Visible = true;
		this->button_delete_expense->Visible = true;
		this->button_back->Visible = true;
		this->label_date->Visible = true;
		this->dateTimePicker->Visible = true;
		this->label_sum->Visible = true;
		this->sum_transaction->Visible = true;
		this->label_type->Visible = true;
		this->type_transaction->Visible = true;
		this->button_add_expense->Visible = true;
		this->label_head_of_list->Text = L"Список расходов";
		this->label_head_of_list->Visible = true;
		this->button_save_expenses->Visible = true;
	}

	private: System::Void show_analyze() {
		this->total_sum_expenses->Text = gcnew System::String(expenses.get_total_expense().ToString() + L" руб.");
		this->total_sum_incomes->Text  = gcnew System::String(incomes.get_total_income().ToString() + L" руб.");
		float total_budget = incomes.get_total_income() - expenses.get_total_expense() + auth_user.get_budget();
		this->total_sum_budget->Text = gcnew System::String(total_budget.ToString() + L" руб.");
		this->label_header_transaction->Text = L"Анализ";
		this->label_header_transaction->Visible = true;
		this->label_sum_budget->Visible = true;
		this->total_sum_budget->Visible = true;
		this->total_sum_expenses->Visible = true;
		this->button_back->Visible = true;
		this->label_total_sum_expenses->Visible = true;
		this->label_total_sum_icomes->Visible = true;
		this->total_sum_incomes->Visible = true;
	}

	private: System::Void button_incomes_Click(System::Object^ sender, System::EventArgs^ e) {
		hide_all();
		set_incomes_to_dataGridView();
		show_incomes();
	}

	private: System::Void button_expenses_Click(System::Object^ sender, System::EventArgs^ e) {
		hide_all();
		set_expenses_to_dataGridView();
		show_expenses();
	}

	private: System::Void button_analyze_Click(System::Object^ sender, System::EventArgs^ e) {
		hide_all();
		calc_chart_incomes();
		calc_chart_expenses();
		show_analyze();
	}

	private: System::Void button_delete_incomes_Click(System::Object^ sender, System::EventArgs^ e) {
		bool result = false;
		for (int i = dataGridView->RowCount - 1; i >= 0; i--) {
			DataGridViewRow^ row = dataGridView->Rows[i];
			if (row->Cells[4]->Value != nullptr && row->Cells[4]->Value->ToString() == "True") {
				incomes.delete_income(stoi(utils.convert_system_string_to_stdString(row->Cells[0]->Value->ToString())));
				dataGridView->Rows->RemoveAt(i);
				result = true;
			}
		}
		if (!result) {
			send_error(L"Записи для удаления не выбраны");
		}
		else {
			send_message_ok(L"Удаление выполнено!");
		}

	}

	private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e) {
		hide_all();
		this->dataGridView->Rows->Clear();
		show_menu();
	}

	private: System::Void load_data(string login) {
		incomes.set_incomes(utils.convert_string_to_incomes(utils.read_from_file(login + "/incomes")));
		expenses.set_expenses(utils.convert_string_to_expenses(utils.read_from_file(login + "/expenses")));
	}

	private: System::Void init_file_users() {
		if (!utils.file_exists("users")) {
			utils.write_to_file("users", utils.convert_users_to_string(users.get_users()));
		}
	}

	private: System::Void calc_chart_incomes() {
		this->chart_incomes->Series[0]->Points->Clear();
		this->chart_incomes->Series[0]->BorderWidth = 3;
		vector<float> data = utils.get_data_for_chart_last_incomes(incomes.get_last_five_incomes());
		if (data.size() != 0) {
			for (size_t i = 0; i < data.size(); i = i + 2) {
				this->chart_incomes->Series[0]->Points->AddXY(data.at(i), data.at(i + 1));
				this->chart_incomes->Visible = true;
			}
		}
		else {
			this->chart_incomes->Visible = false;
		}
	}

	private: System::Void calc_chart_expenses() {
		this->chart_expenses->Series[0]->Points->Clear();
		this->chart_expenses->Series[0]->BorderWidth = 3;
		vector<float> data = utils.get_data_for_chart_last_expenses(expenses.get_last_five_expenses());
		if (data.size() != 0) {
			for (size_t i = 0; i < data.size(); i = i + 2) {
				this->chart_expenses->Series[0]->Points->AddXY(data.at(i), data.at(i + 1));
				this->chart_expenses->Visible = true;
			}
		}
		else {
			this->chart_expenses->Visible = false;
		}
		
	}

	private: System::Void set_incomes_to_dataGridView() {
		for (auto& income : incomes.get_incomes()) {
			this->dataGridView->Rows->Add(income.get_id(), (gcnew System::String(income.get_date().c_str())), income.get_sum(), (gcnew System::String(income.get_type().c_str())));
		}
	}

	private: System::Void set_expenses_to_dataGridView() {
		for (auto& expense : expenses.get_expenses()) {
			this->dataGridView->Rows->Add(expense.get_id(), (gcnew System::String(expense.get_date().c_str())), expense.get_sum(), (gcnew System::String(expense.get_type().c_str())));
		}
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		init_file_users();
		users.set_users(utils.convert_string_to_users(utils.read_from_file("users")));
	}

	private: System::Void button_add_income_Click(System::Object^ sender, System::EventArgs^ e) {
		string date = utils.convert_system_string_to_stdString(dateTimePicker->Value.Day.ToString() + "/" + dateTimePicker->Value.Month.ToString() + "/" + dateTimePicker->Value.Year.ToString());
		if (String::IsNullOrEmpty(this->sum_transaction->Text) || String::IsNullOrEmpty(this->type_transaction->Text)) {
			send_error(L"Поля не должны быть пустыми");
		}
		else if (utils.validate_set_budget(utils.convert_system_string_to_stdString(this->sum_transaction->Text))) {
			Income income = Income(date, stof(utils.convert_system_string_to_stdString(this->sum_transaction->Text)), utils.convert_String_to_wstring(this->type_transaction->Text));
			incomes.add_income(income);
			this->dataGridView->Rows->Add(income.get_id(), (gcnew System::String(income.get_date().c_str())), income.get_sum(), (gcnew System::String(income.get_type().c_str())));
			send_message_ok(L"Запись успешно добавлена!");
		}
		else {
			send_error(L"Введите корректную сумму");
		}
		
	}

	private: System::Void button_save_incomes_Click(System::Object^ sender, System::EventArgs^ e) {
		utils.write_to_file(utils.convert_system_string_to_stdString(this->user_login->Text) + "/incomes", utils.convert_incomes_to_string(incomes.get_incomes()));
		send_message_ok(L"Сохранение выполнено!");
	}

	private: System::Void button_add_expense_Click(System::Object^ sender, System::EventArgs^ e) {
		string date = utils.convert_system_string_to_stdString(dateTimePicker->Value.Day.ToString() + "/" + dateTimePicker->Value.Month.ToString() + "/" + dateTimePicker->Value.Year.ToString());
		if (String::IsNullOrEmpty(this->sum_transaction->Text) || String::IsNullOrEmpty(this->type_transaction->Text)) {
			send_error(L"Поля не должны быть пустыми");
		}
		else if (utils.validate_set_budget(utils.convert_system_string_to_stdString(this->sum_transaction->Text))) {
			Expense expense = Expense(date, stof(utils.convert_system_string_to_stdString(this->sum_transaction->Text)), utils.convert_String_to_wstring(this->type_transaction->Text));
			expenses.add_expense(expense);
			this->dataGridView->Rows->Add(expense.get_id(), (gcnew System::String(expense.get_date().c_str())), expense.get_sum(), (gcnew System::String(expense.get_type().c_str())));
			send_message_ok(L"Запись успешно добавлена!");
		}
		else {
			send_error(L"Введите корректную сумму");
		}
		
	}

	private: System::Void button_save_expenses_Click(System::Object^ sender, System::EventArgs^ e) {
		utils.write_to_file(utils.convert_system_string_to_stdString(this->user_login->Text) + "/expenses", utils.convert_expenses_to_string(expenses.get_expenses()));
		send_message_ok(L"Сохранение выполнено!");
	}

	private: System::Void button_delete_expense_Click(System::Object^ sender, System::EventArgs^ e) {
		bool result = false;
		for (int i = dataGridView->RowCount - 1; i >= 0; i--) {
			DataGridViewRow^ row = dataGridView->Rows[i];
			if (row->Cells[4]->Value != nullptr && row->Cells[4]->Value->ToString() == "True") {
				expenses.delete_expense(stoi(utils.convert_system_string_to_stdString(row->Cells[0]->Value->ToString())));
				dataGridView->Rows->RemoveAt(i);
				result = true;
			}
		}
		if (!result) {
			send_error(L"Записи для удаления не выбраны");
		}
		else {
			send_message_ok(L"Удаление выполнено!");
		}
	}

	private: System::Void button_set_budget_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->set_budget->Text)) {
			send_error(L"Поле не должно быть пустым!");
		}
		else {
			if (utils.validate_set_budget(utils.convert_system_string_to_stdString(this->set_budget->Text))) {
				for (User user : users.get_users()) {
					if (user.get_login() == utils.convert_String_to_wstring(this->user_login->Text)) {
						user.set_budget(stof(utils.convert_system_string_to_stdString(this->set_budget->Text)));
						auth_user = user;
						break;
					}
				}
				send_message_ok(L"Аккаунт успешно создан");
				go_to_main_window(utils.convert_system_string_to_stdString(this->user_login->Text));
			}
			else {
				send_error(L"Введите корректное число!");
			}
		}
		
	}

	private: System::Void button_reset_budget_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->set_budget->Text)) {
			send_error(L"Поле не должно быть пустым!");
		}
		else {
			if (utils.validate_set_budget(utils.convert_system_string_to_stdString(this->set_budget->Text))) {
				for (User user : users.get_users()) {
					if (user.get_login() == utils.convert_String_to_wstring(this->user_login->Text)) {
						user.set_budget(stof(utils.convert_system_string_to_stdString(this->set_budget->Text)));
						auth_user = user;
						break;
					}
				}
				send_message_ok(L"Бюджет успешно изменен!");
			}
			else {
				send_error(L"Введите корректное число!");
			}
		}
	}

	private: System::Void button_go_to_reset_budget_Click(System::Object^ sender, System::EventArgs^ e) {
		go_to_reset_budget();
	}

	private: System::Void button_back_to_main_Click(System::Object^ sender, System::EventArgs^ e) {
		go_to_login();
	}

	private: System::Void go_to_login() {
		hide_all();
		this->label_header->Text = L"Вход";
		this->label_header->Location = System::Drawing::Point(440, 192);
		this->user_login->Clear();
		this->user_password->Clear();
		this->secret_word->Clear();
		this->label_header->Visible = true;
		this->label_login->Visible = true;
		this->user_login->Visible = true;
		this->label_password->Visible = true;
		this->user_password->Visible = true;
		this->button_login->Visible = true;
		this->link_sing_up->Visible = true;
		this->recover_password->Visible = true;
	}

	private: System::Void go_to_recover_password() {
		hide_all();
		this->label_header->Text = L"Восстановление пароля";
		this->user_login->Clear();
		this->user_password->Clear();
		this->secret_word->Clear();
		this->label_header->Location = System::Drawing::Point(170, 182);
		this->label_secret_word->Location = System::Drawing::Point(225, 374);
		this->secret_word->Location = System::Drawing::Point(408, 374);
		this->label_header->Visible = true;
		this->label_login->Visible = true;
		this->user_login->Visible = true;
		this->label_secret_word->Visible = true;
		this->secret_word->Visible = true;
		this->button_get_password->Visible = true;
		this->button_back_to_main->Visible = true;
	}

	private: System::Void recover_password_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		go_to_recover_password();
	}

	private: System::Void button_get_password_Click(System::Object^ sender, System::EventArgs^ e) {
		bool correct_recovering = false;
		if (String::IsNullOrEmpty(this->user_login->Text) || String::IsNullOrEmpty(this->secret_word->Text)) {
			send_error(L"Поле логин или кодовое слово не должно быть пустым!");
		}
		else {
			for (User user : users.get_users()) {
				if ((user.get_login() == (utils.convert_String_to_wstring(this->user_login->Text)))
					&& (user.get_secret_word() == utils.convert_String_to_wstring(this->secret_word->Text))) {
					send_message_ok(L"Ваш пароль: " + user.get_password());
					go_to_login();
					correct_recovering = true;
					break;
				}
			}
			if (!correct_recovering) {
				send_error(L"Неправильный логин или кодовое слово!");
			}
		}
	}

	private: System::Void button_report_Click(System::Object^ sender, System::EventArgs^ e) {
		hide_all();
		this->label_header_transaction->Text = L"Отчет";
		this->label_header_transaction->Visible = true;
		this->button_back->Visible = true;
		this->button_report_for_day->Visible = true;
		this->button_report_for_month->Visible = true;
		this->button_report_for_year->Visible = true;
		this->button_save_report->Visible = true;
		this->label_report_transactions->Visible = true;
		this->dataGridView_report_transactions->Visible = true;
		this->dateTimePicker->Value = System::DateTime::Now;
	}

	private: System::Void button_report_for_day_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_report_transactions->Rows->Clear();
		string date = utils.convert_system_string_to_stdString(dateTimePicker->Value.Day.ToString() + "/" + dateTimePicker->Value.Month.ToString() + "/" + dateTimePicker->Value.Year.ToString());
		report.set_transactions(utils.get_transaction(incomes.get_incomes(), expenses.get_expenses(), date, "day"));
		for (auto& trn : report.get_transactions()) {
			this->dataGridView_report_transactions->Rows->Add((gcnew System::String(trn.get_type_t().c_str())), (gcnew System::String(trn.get_date().c_str())), trn.get_sum(), (gcnew System::String(trn.get_type().c_str())));
		}
	}
	private: System::Void button_report_for_month_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_report_transactions->Rows->Clear();
		string date = utils.convert_system_string_to_stdString(dateTimePicker->Value.Day.ToString() + "/" + dateTimePicker->Value.Month.ToString() + "/" + dateTimePicker->Value.Year.ToString());
		report.set_transactions(utils.get_transaction(incomes.get_incomes(), expenses.get_expenses(), date, "month"));
		for (auto& trn : report.get_transactions()) {
			this->dataGridView_report_transactions->Rows->Add((gcnew System::String(trn.get_type_t().c_str())), (gcnew System::String(trn.get_date().c_str())), trn.get_sum(), (gcnew System::String(trn.get_type().c_str())));
		}
	}
	private: System::Void button_report_for_year_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_report_transactions->Rows->Clear();
		string date = utils.convert_system_string_to_stdString(dateTimePicker->Value.Day.ToString() + "/" + dateTimePicker->Value.Month.ToString() + "/" + dateTimePicker->Value.Year.ToString());
		report.set_transactions(utils.get_transaction(incomes.get_incomes(), expenses.get_expenses(), date, "year"));
		for (auto& trn : report.get_transactions()) {
			this->dataGridView_report_transactions->Rows->Add((gcnew System::String(trn.get_type_t().c_str())), (gcnew System::String(trn.get_date().c_str())), trn.get_sum(), (gcnew System::String(trn.get_type().c_str())));
		}
	}
	private: System::Void button_save_report_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Txt-файлы (*.txt)|*.txt";
		saveFileDialog->Title = "Сохранение отчета";
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ path = saveFileDialog->FileName;
			StreamWriter^ writer = gcnew StreamWriter(path);
			writer->WriteLine("   Тип транзакции\tДата\t\tСумма\t\tТип");
			for (auto& trn : report.get_transactions()) {
				wstring wdate = convert_string_to_wstring(trn.get_date());
				wstring wsum = convert_string_to_wstring(std::to_string(trn.get_sum()));
				String^ str = L"\t" + gcnew String(trn.get_type_t().c_str()) + L"\t\t" + gcnew String(wdate.c_str()) + L"\t" + gcnew String(wsum.c_str()) + L"\t" + gcnew String(trn.get_type().c_str());
				writer->WriteLine(str);
			}
			writer->Close();
		}
	}

};
}
