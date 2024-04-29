#pragma once
#include "Main.h"


namespace FNM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	FNM::Incomes incomes;
	FNM::Expenses expenses;
	FNM::Utils utils;
	FNM::Users users;


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
	private: System::Windows::Forms::Label^ label_total_sum_transactions;
	private: System::Windows::Forms::Label^ label_total_sum;
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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label_set_budget;
	private: System::Windows::Forms::TextBox^ set_budget;
	private: System::Windows::Forms::Button^ button_set_budget;
	private: System::Windows::Forms::Button^ button_go_to_reset_budget;
	private: System::Windows::Forms::Button^ button_reset_budget;
	private: System::Windows::Forms::TextBox^ secret_word;
	private: System::Windows::Forms::Label^ label_secret_word;
	private: System::Windows::Forms::LinkLabel^ recover_password;
	private: System::Windows::Forms::Button^ button_back_to_main;


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
			this->label_total_sum_transactions = (gcnew System::Windows::Forms::Label());
			this->label_total_sum = (gcnew System::Windows::Forms::Label());
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label_set_budget = (gcnew System::Windows::Forms::Label());
			this->set_budget = (gcnew System::Windows::Forms::TextBox());
			this->button_set_budget = (gcnew System::Windows::Forms::Button());
			this->button_go_to_reset_budget = (gcnew System::Windows::Forms::Button());
			this->button_reset_budget = (gcnew System::Windows::Forms::Button());
			this->secret_word = (gcnew System::Windows::Forms::TextBox());
			this->label_secret_word = (gcnew System::Windows::Forms::Label());
			this->recover_password = (gcnew System::Windows::Forms::LinkLabel());
			this->button_back_to_main = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_header
			// 
			this->label_header->AutoSize = true;
			this->label_header->Font = (gcnew System::Drawing::Font(L"Verdana", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_header->Location = System::Drawing::Point(385, 192);
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
			// label_total_sum_transactions
			// 
			this->label_total_sum_transactions->AutoSize = true;
			this->label_total_sum_transactions->Location = System::Drawing::Point(703, 18);
			this->label_total_sum_transactions->Name = L"label_total_sum_transactions";
			this->label_total_sum_transactions->Size = System::Drawing::Size(281, 25);
			this->label_total_sum_transactions->TabIndex = 16;
			this->label_total_sum_transactions->Text = L"Общая сумма доходов:";
			this->label_total_sum_transactions->Visible = false;
			// 
			// label_total_sum
			// 
			this->label_total_sum->Location = System::Drawing::Point(724, 60);
			this->label_total_sum->Name = L"label_total_sum";
			this->label_total_sum->Size = System::Drawing::Size(250, 25);
			this->label_total_sum->TabIndex = 17;
			this->label_total_sum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_total_sum->Visible = false;
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
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			legend1->Position->Auto = false;
			legend1->Position->Height = 8.910892F;
			legend1->Position->Width = 43.30218F;
			legend1->Position->X = 50.69782F;
			legend1->Position->Y = 7;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(30, 147);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L" Сумма дохода";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(322, 304);
			this->chart1->TabIndex = 32;
			this->chart1->Text = L"Доходы";
			this->chart1->Visible = false;
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
			this->secret_word->PasswordChar = '*';
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
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->button_back_to_main);
			this->Controls->Add(this->recover_password);
			this->Controls->Add(this->label_secret_word);
			this->Controls->Add(this->secret_word);
			this->Controls->Add(this->button_reset_budget);
			this->Controls->Add(this->button_go_to_reset_budget);
			this->Controls->Add(this->button_set_budget);
			this->Controls->Add(this->set_budget);
			this->Controls->Add(this->chart1);
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
			this->Controls->Add(this->label_total_sum);
			this->Controls->Add(this->label_total_sum_transactions);
			this->Controls->Add(this->label_header_transaction);
			this->Controls->Add(this->button_analyze);
			this->Controls->Add(this->button_expenses);
			this->Controls->Add(this->button_incomes);
			this->Controls->Add(this->link_sing_up);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->label_login);
			this->Controls->Add(this->user_password);
			this->Controls->Add(this->user_login);
			this->Controls->Add(this->label_header);
			this->Controls->Add(this->label_set_budget);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_report);
			this->Controls->Add(this->button_sing_up);
			this->Controls->Add(this->dataGridView);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Name = L"MainForm";
			this->Text = L"Финансовый менеджер";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
		login();
	}

	private: System::Void link_sing_up_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->label_header->Text = L"Регистрация";
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
					if (user.get_login() == utils.convert_system_string_to_stdString(this->user_login->Text)) {
						is_exists = true;
						break;
					}
				}
				if (!is_exists) {
					users.add_user(User(utils.convert_system_string_to_stdString(this->user_login->Text), utils.convert_system_string_to_stdString(this->user_password->Text), 0.0f, utils.convert_system_string_to_stdString(this->secret_word->Text)));
					utils.write_to_file("users", utils.convert_users_to_string(users.get_users()));
					utils.create_directory(utils.convert_system_string_to_stdString(this->user_login->Text));
					utils.write_to_file(utils.convert_system_string_to_stdString(this->user_login->Text) + "/incomes", utils.convert_incomes_to_string(incomes.get_incomes()));
					utils.write_to_file(utils.convert_system_string_to_stdString(this->user_login->Text) + "/expenses", utils.convert_expenses_to_string(expenses.get_expenses()));
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
		users.set_users(utils.convert_string_to_users(utils.read_from_file("users")));
		if (!users.get_users().empty()) {
			bool correct_auth = false;
			if (String::IsNullOrEmpty(this->user_login->Text) || String::IsNullOrEmpty(this->user_password->Text)) {
				send_error(L"Поле логин или пароль не должно быть пустым!");
			}
			else {
				for (User user : users.get_users()) {
					if ((user.get_login() == (utils.convert_system_string_to_stdString(this->user_login->Text)))
						&& (user.get_password() == utils.convert_system_string_to_stdString(this->user_password->Text))) {
						send_message_ok(L"Успешный вход");
						go_to_main_window(utils.convert_system_string_to_stdString(this->user_login->Text));
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
		this->label_total_sum_transactions->Visible = false;
		this->label_total_sum->Visible = false;
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
		this->chart1->Visible = false;
		this->button_set_budget->Visible = false;
		this->label_set_budget->Visible = false;
		this->set_budget->Visible = false;
		this->button_reset_budget->Visible = false;
		this->button_go_to_reset_budget->Visible = false;
		this->label_secret_word->Visible = false;
		this->secret_word->Visible = false;
		this->recover_password->Visible = false;
		this->button_back_to_main->Visible = false;
	}

	private: System::Void show_incomes() {
		this->label_total_sum_transactions->Text = L"Общая сумма доходов:";
		this->label_header_transaction->Text = L"Доходы";
		this->label_head_of_list->Text = L"Список доходов";
		this->dataGridView->Visible = true;
		this->label_total_sum_transactions->Visible = true;
		this->label_total_sum->Visible = true;
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
		this->dataGridView->Visible = true;
		this->label_total_sum_transactions->Text = L"Общая сумма расходов:";
		this->label_total_sum_transactions->Visible = true;
		this->label_total_sum->Visible = true;
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
		this->button_back->Visible = true;
		this->chart1->Visible = true;
	}

	private: System::Void button_incomes_Click(System::Object^ sender, System::EventArgs^ e) {
		hide_all();
		set_incomes_to_dataGridView();
		this->label_total_sum->Text = incomes.get_total_income().ToString() + L" руб.";
		show_incomes();
	}

	private: System::Void button_expenses_Click(System::Object^ sender, System::EventArgs^ e) {
		hide_all();
		set_expenses_to_dataGridView();
		this->label_total_sum->Text = expenses.get_total_expense().ToString() + L" руб.";
		show_expenses();
	}

	private: System::Void button_analyze_Click(System::Object^ sender, System::EventArgs^ e) {
		hide_all();
		calc_chart1();
		show_analyze();
	}

	private: System::Void button_delete_incomes_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = dataGridView->RowCount - 1; i >= 0; i--) {
			DataGridViewRow^ row = dataGridView->Rows[i];
			if (row->Cells[4]->Value != nullptr && row->Cells[4]->Value->ToString() == "True") {
				incomes.delete_income(stoi(utils.convert_system_string_to_stdString(row->Cells[0]->Value->ToString())));
				dataGridView->Rows->RemoveAt(i);
				this->label_total_sum->Text = incomes.get_total_income().ToString() + L" руб.";
			}
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

	private: System::Void calc_chart1() {
		this->chart1->Series[0]->Points->Clear();
		/*if (incomes.get_incomes().size() > 5) {
			int i = 0;
			for (auto% income : incomes.get_incomes()) {
				string str = utils.convert_system_string_to_stdString(income.get_date().at(0).ToString()->Concat(income.get_date().at(1).ToString()));
				this->chart1->Series[0]->Points->AddXY(i, income.get_sum());
				i++;
			}
		}
		else {
			for (size_t i = 0; i < 5; i++) {
				string str = utils.convert_system_string_to_stdString(incomes.get_incomes().at(i).get_date().at(0).ToString()->Concat(incomes.get_incomes().at(i).get_date().at(1).ToString()));
				this->chart1->Series[0]->Points->AddXY(i, incomes.get_incomes().at(i).get_sum());
			}
		}*/
		this->chart1->Series[0]->Points->AddXY(0, 0);
		this->chart1->Series[0]->Points->AddXY(1, 1);
		this->chart1->Series[0]->Points->AddXY(2, 4);
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
	}

	private: System::Void button_add_income_Click(System::Object^ sender, System::EventArgs^ e) {
		string date = utils.convert_system_string_to_stdString(dateTimePicker->Value.Day.ToString() + "/" + dateTimePicker->Value.Month.ToString() + "/" + dateTimePicker->Value.Year.ToString());
		Income income = Income(date, stof(utils.convert_system_string_to_stdString(this->sum_transaction->Text)), utils.convert_system_string_to_stdString(this->type_transaction->Text));
		incomes.add_income(income);
		this->label_total_sum->Text = incomes.get_total_income().ToString() + L" руб.";
		this->dataGridView->Rows->Add(income.get_id(), (gcnew System::String(income.get_date().c_str())), income.get_sum(), (gcnew System::String(income.get_type().c_str())));
	}

	private: System::Void button_save_incomes_Click(System::Object^ sender, System::EventArgs^ e) {
		utils.write_to_file(utils.convert_system_string_to_stdString(this->user_login->Text) + "/incomes",  utils.convert_incomes_to_string(incomes.get_incomes()));
	}

	private: System::Void button_add_expense_Click(System::Object^ sender, System::EventArgs^ e) {
		string date = utils.convert_system_string_to_stdString(dateTimePicker->Value.Day.ToString() + "/" + dateTimePicker->Value.Month.ToString() + "/" + dateTimePicker->Value.Year.ToString());
		Expense expense = Expense(date, stof(utils.convert_system_string_to_stdString(this->sum_transaction->Text)), utils.convert_system_string_to_stdString(this->type_transaction->Text));
		expenses.add_expense(expense);
		this->label_total_sum->Text = expenses.get_total_expense().ToString() + L" руб.";
		this->dataGridView->Rows->Add(expense.get_id(), (gcnew System::String(expense.get_date().c_str())), expense.get_sum(), (gcnew System::String(expense.get_type().c_str())));
	}

	private: System::Void button_save_expenses_Click(System::Object^ sender, System::EventArgs^ e) {
		utils.write_to_file(utils.convert_system_string_to_stdString(this->user_login->Text) + "/expenses", utils.convert_expenses_to_string(expenses.get_expenses()));
	}

	private: System::Void button_delete_expense_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = dataGridView->RowCount - 1; i >= 0; i--) {
			DataGridViewRow^ row = dataGridView->Rows[i];
			if (row->Cells[4]->Value != nullptr && row->Cells[4]->Value->ToString() == "True") {
				expenses.delete_expense(stoi(utils.convert_system_string_to_stdString(row->Cells[0]->Value->ToString())));
				dataGridView->Rows->RemoveAt(i);
				this->label_total_sum->Text = expenses.get_total_expense().ToString() + L" руб.";
			}
		}
	}

	private: System::Void button_set_budget_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->set_budget->Text)) {
			send_error(L"Поле не должно быть пустым!");
		}
		else {
			if (utils.validate_set_budget(utils.convert_system_string_to_stdString(this->set_budget->Text))) {
				for (User user : users.get_users()) {
					if (user.get_login() == utils.convert_system_string_to_stdString(this->user_login->Text)) {
						user.set_budget(stof(utils.convert_system_string_to_stdString(this->set_budget->Text)));
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
					if (user.get_login() == utils.convert_system_string_to_stdString(this->user_login->Text)) {
						user.set_budget(stof(utils.convert_system_string_to_stdString(this->set_budget->Text)));
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
		hide_all();
		this->label_header->Text = L"Вход";
		this->label_header->Visible = true;
		this->label_login->Visible = true;
		this->user_login->Visible = true;
		this->label_password->Visible = true;
		this->user_password->Visible = true;
		this->button_login->Visible = true;
		this->link_sing_up->Visible = true;
		this->recover_password->Visible = true;
	}
};
}
