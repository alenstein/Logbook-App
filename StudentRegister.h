
#pragma once
#include <regex>
#include <iostream>
#include <string>


namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Data::SqlTypes;
	using namespace System::Data::OleDb;
	using namespace System::Text::RegularExpressions;
	using namespace System::Windows::Forms;



	/// <summary>
	/// Summary for StudentRegister
	/// </summary>
	public ref class StudentRegister : public System::Windows::Forms::Form
	{
	public:
		StudentRegister(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		static OleDbConnection^ OpenConnection(String^ connectionString) {
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);	
			try {
				connection->Open();
				//MessageBox::Show(" \n connection successful!");
				return connection;
			}
			catch (Exception ^ e) {
				MessageBox::Show(e->Message);
			}
		
		}
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ homeButton;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ studentLoginButton;
	private: System::Windows::Forms::Button^ supervisorLoginButton;
	private: System::Windows::Forms::Label^ label1;
	


	private: System::Windows::Forms::Panel^ panel4;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ studentName;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ studentClass;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ studentEmail;



	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ studentID;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::MaskedTextBox^ studentPassword;

	private: System::Windows::Forms::Button^ createLogbook;
	private: System::Windows::Forms::TextBox^ studentID2;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentRegister::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->studentLoginButton = (gcnew System::Windows::Forms::Button());
			this->supervisorLoginButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->homeButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->studentName = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->studentClass = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->studentEmail = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->studentID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->studentPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->createLogbook = (gcnew System::Windows::Forms::Button());
			this->studentID2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->homeButton);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(233, 637);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentRegister::Panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->studentLoginButton);
			this->panel2->Controls->Add(this->supervisorLoginButton);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(233, 42);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(625, 509);
			this->panel2->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label4->Location = System::Drawing::Point(289, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 32);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Or";
			// 
			// studentLoginButton
			// 
			this->studentLoginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->studentLoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->studentLoginButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentLoginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentLoginButton->Location = System::Drawing::Point(342, 261);
			this->studentLoginButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->studentLoginButton->Name = L"studentLoginButton";
			this->studentLoginButton->Size = System::Drawing::Size(174, 134);
			this->studentLoginButton->TabIndex = 5;
			this->studentLoginButton->Text = L"Student";
			this->studentLoginButton->UseVisualStyleBackColor = true;
			// 
			// supervisorLoginButton
			// 
			this->supervisorLoginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->supervisorLoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->supervisorLoginButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->supervisorLoginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorLoginButton->Location = System::Drawing::Point(101, 261);
			this->supervisorLoginButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->supervisorLoginButton->Name = L"supervisorLoginButton";
			this->supervisorLoginButton->Size = System::Drawing::Size(174, 134);
			this->supervisorLoginButton->TabIndex = 4;
			this->supervisorLoginButton->Text = L"Supervisor ";
			this->supervisorLoginButton->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label1->Location = System::Drawing::Point(220, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(71, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 112);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(53, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 32);
			this->label2->TabIndex = 7;
			this->label2->Text = L"LogBook ";
			// 
			// homeButton
			// 
			this->homeButton->BackColor = System::Drawing::Color::Transparent;
			this->homeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->homeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->homeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->homeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeButton->ForeColor = System::Drawing::Color::White;
			this->homeButton->Location = System::Drawing::Point(32, 245);
			this->homeButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->homeButton->Name = L"homeButton";
			this->homeButton->Size = System::Drawing::Size(173, 62);
			this->homeButton->TabIndex = 5;
			this->homeButton->Text = L"Home";
			this->homeButton->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(32, 411);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Settings";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(32, 330);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(173, 62);
			this->button6->TabIndex = 0;
			this->button6->Text = L"About_LogBook";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->button4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(233, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(625, 42);
			this->panel3->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button4->Location = System::Drawing::Point(580, 0);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 42);
			this->button4->TabIndex = 6;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &StudentRegister::Button4_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel4->Location = System::Drawing::Point(382, 511);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(295, 2);
			this->panel4->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label5->Location = System::Drawing::Point(379, 465);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label6->Location = System::Drawing::Point(455, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 30);
			this->label6->TabIndex = 30;
			this->label6->Text = L"New  Student";
			// 
			// studentName
			// 
			this->studentName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentName->Location = System::Drawing::Point(382, 166);
			this->studentName->MaxLength = 50;
			this->studentName->Name = L"studentName";
			this->studentName->Size = System::Drawing::Size(292, 13);
			this->studentName->TabIndex = 40;
			this->studentName->TextChanged += gcnew System::EventHandler(this, &StudentRegister::StudentName_TextChanged);
			this->studentName->Leave += gcnew System::EventHandler(this, &StudentRegister::LettersValidation);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel6->Location = System::Drawing::Point(382, 273);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(295, 2);
			this->panel6->TabIndex = 39;
			// 
			// studentClass
			// 
			this->studentClass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentClass->Location = System::Drawing::Point(382, 249);
			this->studentClass->MaxLength = 20;
			this->studentClass->Name = L"studentClass";
			this->studentClass->Size = System::Drawing::Size(292, 13);
			this->studentClass->TabIndex = 38;
			this->studentClass->TextChanged += gcnew System::EventHandler(this, &StudentRegister::StudentClass_TextChanged);
			this->studentClass->Leave += gcnew System::EventHandler(this, &StudentRegister::LeaveValidationPassword);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label7->Location = System::Drawing::Point(379, 134);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 24);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Full Name";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel7->Location = System::Drawing::Point(382, 185);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(295, 2);
			this->panel7->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label8->Location = System::Drawing::Point(379, 220);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 24);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Class";
			// 
			// studentEmail
			// 
			this->studentEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentEmail->Location = System::Drawing::Point(382, 330);
			this->studentEmail->MaxLength = 50;
			this->studentEmail->Name = L"studentEmail";
			this->studentEmail->Size = System::Drawing::Size(292, 13);
			this->studentEmail->TabIndex = 47;
			this->studentEmail->TextChanged += gcnew System::EventHandler(this, &StudentRegister::StudentEmail_TextChanged);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel8->Location = System::Drawing::Point(382, 438);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(295, 2);
			this->panel8->TabIndex = 46;
			// 
			// studentID
			// 
			this->studentID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentID->Location = System::Drawing::Point(362, 492);
			this->studentID->MaxLength = 20;
			this->studentID->Name = L"studentID";
			this->studentID->Size = System::Drawing::Size(292, 13);
			this->studentID->TabIndex = 45;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label9->Location = System::Drawing::Point(379, 298);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 24);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Email";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel9->Location = System::Drawing::Point(382, 349);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(295, 2);
			this->panel9->TabIndex = 44;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label10->Location = System::Drawing::Point(379, 384);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 24);
			this->label10->TabIndex = 43;
			this->label10->Text = L"StudentID";
			// 
			// studentPassword
			// 
			this->studentPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentPassword->Location = System::Drawing::Point(386, 492);
			this->studentPassword->Name = L"studentPassword";
			this->studentPassword->PasswordChar = '*';
			this->studentPassword->Size = System::Drawing::Size(288, 13);
			this->studentPassword->TabIndex = 48;
			this->studentPassword->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &StudentRegister::StudentPassword_MaskInputRejected);
			this->studentPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &StudentRegister::PasswordValidation);
			this->studentPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &StudentRegister::KeyUpValidation);
			this->studentPassword->Leave += gcnew System::EventHandler(this, &StudentRegister::LeaveValidationPassword);
			// 
			// createLogbook
			// 
			this->createLogbook->BackColor = System::Drawing::Color::Transparent;
			this->createLogbook->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->createLogbook->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createLogbook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->createLogbook->Location = System::Drawing::Point(460, 542);
			this->createLogbook->Name = L"createLogbook";
			this->createLogbook->Size = System::Drawing::Size(144, 52);
			this->createLogbook->TabIndex = 49;
			this->createLogbook->Text = L"Register";
			this->createLogbook->UseVisualStyleBackColor = false;
			this->createLogbook->Click += gcnew System::EventHandler(this, &StudentRegister::studentRegister_Click);
			// 
			// studentID2
			// 
			this->studentID2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentID2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentID2->Location = System::Drawing::Point(382, 419);
			this->studentID2->MaxLength = 20;
			this->studentID2->Name = L"studentID2";
			this->studentID2->Size = System::Drawing::Size(292, 13);
			this->studentID2->TabIndex = 50;
			this->studentID2->TextChanged += gcnew System::EventHandler(this, &StudentRegister::TextBox1_TextChanged);
			this->studentID2->Leave += gcnew System::EventHandler(this, &StudentRegister::LaNValidation);
			// 
			// StudentRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(858, 637);
			this->Controls->Add(this->studentID2);
			this->Controls->Add(this->createLogbook);
			this->Controls->Add(this->studentPassword);
			this->Controls->Add(this->studentEmail);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->studentID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->studentName);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->studentClass);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentRegister";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &StudentRegister::StudentRegister_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &StudentRegister::name);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//close button pressed
		if (MessageBox::Show("Do you want to exit?", "Exit prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
		
	
	}

	//register button click
private: System::Void studentRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((this->studentName->Text == "") || (this->studentClass->Text == "") || (this->studentEmail->Text == "") || (this->studentPassword->Text == "") || (this->studentID2->Text == "")) {
		MessageBox::Show("All the fields must have details!!");
	}
	else {
		//MessageBox::Show("Register button clicked");
		String^ connectionString;
		connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\pawnstar\\source\\repos\\Logbook\\Students.mdb;";
		OleDbConnection^ connection = OpenConnection(connectionString);
		String^ Query = "INSERT INTO Users.Students(FullName, [Class], Email, StudentID, [Password]) VALUES('" + this->studentName->Text + "', '" + this->studentClass->Text + "', '" + this->studentEmail->Text + "', '" + this->studentID2->Text + "', '" + this->studentPassword->Text + "');";
		OleDbCommand^ cmd = gcnew OleDbCommand(Query, connection);
		cmd->ExecuteNonQuery();
		connection->Close();
		MessageBox::Show("Registered successfully.........restart the application and login!");
		Application::Exit();
	}
}

private: System::Void StudentName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void name(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
private: System::Void StudentPassword_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}

		
		 
private: System::Void PasswordValidation(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	

	//Regex^ regex = gcnew Regex("^[0-9]*$");
	//if (!regex->IsMatch(studentPassword->Text))
	//{
		
		//MessageBox::Show("Your password is your barcode number");
		//nameErrorProvider->SetError(this->studentPassword, "Your password is your barcode number");
		//studentPassword->Clear();
	//}

}
private: System::Void KeyUpValidation(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
}
private: System::Void LeaveValidationPassword(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[0-9A-Za-z]*$");
	if (!regex->IsMatch(studentClass->Text))
	{

		MessageBox::Show("Your class contains letters and numbers only");
		studentClass->Clear();
	}
}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentClass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LettersValidation(System::Object^ sender, System::EventArgs^ e) {
	
	Regex^ regex = gcnew Regex("^[A-Za-z ]*$");
	if (!regex->IsMatch(studentName->Text))
	{

		MessageBox::Show("Your Name should be letters only");
		studentName->Clear();
		//studentName->Focus();
		
	}
}
private: System::Void v(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LaNValidation(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[0-9A-Za-z]*$");
	if (!regex->IsMatch(studentID2->Text))
	{

		MessageBox::Show("Your StudentID should be letters and numbers only");
		studentName->Clear();
	}
}
private: System::Void StudentRegister_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}


