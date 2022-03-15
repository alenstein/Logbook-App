#pragma once

namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for SupervisorRegister
	/// </summary>
	public ref class SupervisorRegister : public System::Windows::Forms::Form
	{
	public:
		SupervisorRegister(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->supervisorName->Focus();
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
		~SupervisorRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ studentLoginButton;
	private: System::Windows::Forms::Button^ supervisorLoginButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ homeButton;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MaskedTextBox^ supervisorPassword;
	private: System::Windows::Forms::TextBox^ supervisorEmail;


	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ SupervisorID;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::TextBox^ supervisorName;
	private:

	private:

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ supervisorDepartment;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ supervisorRegisterButton;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SupervisorRegister::typeid));
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
			this->supervisorPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->supervisorEmail = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->SupervisorID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->supervisorName = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->supervisorDepartment = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->supervisorRegisterButton = (gcnew System::Windows::Forms::Button());
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
			this->panel1->Size = System::Drawing::Size(233, 598);
			this->panel1->TabIndex = 2;
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
			this->homeButton->Location = System::Drawing::Point(26, 209);
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
			this->button3->Location = System::Drawing::Point(26, 375);
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
			this->button6->Location = System::Drawing::Point(26, 294);
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
			this->panel3->Size = System::Drawing::Size(609, 42);
			this->panel3->TabIndex = 9;
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
			this->button4->Location = System::Drawing::Point(564, 0);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 42);
			this->button4->TabIndex = 6;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SupervisorRegister::Button4_Click);
			// 
			// supervisorPassword
			// 
			this->supervisorPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->supervisorPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorPassword->Location = System::Drawing::Point(393, 472);
			this->supervisorPassword->Name = L"supervisorPassword";
			this->supervisorPassword->PasswordChar = '*';
			this->supervisorPassword->Size = System::Drawing::Size(288, 13);
			this->supervisorPassword->TabIndex = 65;
			this->supervisorPassword->Leave += gcnew System::EventHandler(this, &SupervisorRegister::LeaveValidationPassword);
			// 
			// supervisorEmail
			// 
			this->supervisorEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->supervisorEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorEmail->Location = System::Drawing::Point(392, 310);
			this->supervisorEmail->MaxLength = 50;
			this->supervisorEmail->Name = L"supervisorEmail";
			this->supervisorEmail->Size = System::Drawing::Size(292, 13);
			this->supervisorEmail->TabIndex = 64;
			this->supervisorEmail->TextChanged += gcnew System::EventHandler(this, &SupervisorRegister::Email_TextChanged);
			this->supervisorEmail->Leave += gcnew System::EventHandler(this, &SupervisorRegister::emailValidation);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel8->Location = System::Drawing::Point(392, 410);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(295, 2);
			this->panel8->TabIndex = 63;
			// 
			// SupervisorID
			// 
			this->SupervisorID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SupervisorID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->SupervisorID->Location = System::Drawing::Point(392, 391);
			this->SupervisorID->MaxLength = 9;
			this->SupervisorID->Name = L"SupervisorID";
			this->SupervisorID->Size = System::Drawing::Size(292, 13);
			this->SupervisorID->TabIndex = 62;
			this->SupervisorID->Leave += gcnew System::EventHandler(this, &SupervisorRegister::LaNValidation);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label9->Location = System::Drawing::Point(389, 278);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 24);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Email";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel9->Location = System::Drawing::Point(392, 329);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(295, 2);
			this->panel9->TabIndex = 61;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label10->Location = System::Drawing::Point(389, 364);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 24);
			this->label10->TabIndex = 60;
			this->label10->Text = L"SupervisorID";
			// 
			// supervisorName
			// 
			this->supervisorName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->supervisorName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorName->Location = System::Drawing::Point(392, 146);
			this->supervisorName->MaxLength = 20;
			this->supervisorName->Name = L"supervisorName";
			this->supervisorName->Size = System::Drawing::Size(292, 13);
			this->supervisorName->TabIndex = 58;
			this->supervisorName->TextChanged += gcnew System::EventHandler(this, &SupervisorRegister::Name_TextChanged);
			this->supervisorName->Leave += gcnew System::EventHandler(this, &SupervisorRegister::LetterValidation);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel6->Location = System::Drawing::Point(392, 246);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(295, 2);
			this->panel6->TabIndex = 57;
			// 
			// supervisorDepartment
			// 
			this->supervisorDepartment->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->supervisorDepartment->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorDepartment->Location = System::Drawing::Point(392, 227);
			this->supervisorDepartment->MaxLength = 35;
			this->supervisorDepartment->Name = L"supervisorDepartment";
			this->supervisorDepartment->Size = System::Drawing::Size(292, 13);
			this->supervisorDepartment->TabIndex = 56;
			this->supervisorDepartment->Leave += gcnew System::EventHandler(this, &SupervisorRegister::DepartmentValidation);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label7->Location = System::Drawing::Point(389, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 24);
			this->label7->TabIndex = 53;
			this->label7->Text = L"FullName";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel7->Location = System::Drawing::Point(392, 165);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(295, 2);
			this->panel7->TabIndex = 55;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label8->Location = System::Drawing::Point(389, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 24);
			this->label8->TabIndex = 54;
			this->label8->Text = L"Department";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel4->Location = System::Drawing::Point(392, 491);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(295, 2);
			this->panel4->TabIndex = 52;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label5->Location = System::Drawing::Point(389, 445);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 24);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label6->Location = System::Drawing::Point(464, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(190, 30);
			this->label6->TabIndex = 51;
			this->label6->Text = L"New Supervisor";
			// 
			// supervisorRegisterButton
			// 
			this->supervisorRegisterButton->BackColor = System::Drawing::Color::Transparent;
			this->supervisorRegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->supervisorRegisterButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->supervisorRegisterButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorRegisterButton->Location = System::Drawing::Point(469, 514);
			this->supervisorRegisterButton->Name = L"supervisorRegisterButton";
			this->supervisorRegisterButton->Size = System::Drawing::Size(144, 52);
			this->supervisorRegisterButton->TabIndex = 66;
			this->supervisorRegisterButton->Text = L"Register";
			this->supervisorRegisterButton->UseVisualStyleBackColor = false;
			this->supervisorRegisterButton->Click += gcnew System::EventHandler(this, &SupervisorRegister::SupervisorRegisterButton_Click);
			// 
			// SupervisorRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(842, 598);
			this->Controls->Add(this->supervisorRegisterButton);
			this->Controls->Add(this->supervisorPassword);
			this->Controls->Add(this->supervisorEmail);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->SupervisorID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->supervisorName);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->supervisorDepartment);
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
			this->Name = L"SupervisorRegister";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &SupervisorRegister::SupervisorRegister_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->supervisorName->Focus();
		}
#pragma endregion
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to exit?", "Exit prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
		//closing the supervisor registration form
	}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Name_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void SupervisorRegister_Load(System::Object^ sender, System::EventArgs^ e) {
	this->supervisorName->Focus();
}
private: System::Void LeaveValidationPassword(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[0-9]*$");
	if (!regex->IsMatch(supervisorPassword->Text))
	{

		MessageBox::Show("Your password should be your barcode number");
		supervisorPassword->Clear();
		supervisorPassword->Focus();
	}
}
private: System::Void LetterValidation(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[A-Z a-z]*$");
	if (!regex->IsMatch(supervisorName->Text))
	{

		MessageBox::Show("Your Name should be letters only");
		supervisorName->Clear();
		supervisorName->Focus();
	}
}
private: System::Void LaNValidation(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[0-9A-Za-z]*$");
	if (!regex->IsMatch(SupervisorID->Text))
	{

		MessageBox::Show("Your SupervisorID should be letters and numbers only");
		SupervisorID->Clear();
		SupervisorID->Focus();
	}
}
private: System::Void DepartmentValidation(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[A-Z a-z]*$");
	if (!regex->IsMatch(supervisorDepartment->Text))
	{
		MessageBox::Show("Your Department should be letters only");
		supervisorDepartment->Clear();
		supervisorDepartment->Focus();
	}
}
private: System::Void Email_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void emailValidation(System::Object^ sender, System::EventArgs^ e) {

	//Regex^ regex1 = gcnew Regex("^[A-Za-z0-9@a-z.a-z.a-z.a-z]*$");
	//Regex^ regex2 = gcnew Regex("^[a-z0-9@a-z.a-z.a-z.a-z]*$");
	//Regex^ regex3 = gcnew Regex("^[ ]*$");
	//Regex^ regex4 = gcnew Regex("^[A-Za-z@a-z.a-z.a-z.a-z]*$");
	//Regex^ const  pattern = gcnew Regex("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

	//if (!regex1->IsMatch(supervisorEmail->Text) || !regex2->IsMatch(supervisorEmail->Text) || !regex4->IsMatch(supervisorEmail->Text) || !pattern->IsMatch(supervisorEmail->Text) )
	//{
		//MessageBox::Show("true");
		//MessageBox::Show("Wrong email format");
		//supervisorEmail->Clear();
		//supervisorEmail->Focus();
	//}else if (regex3->IsMatch(supervisorEmail->Text))
	//{
		//MessageBox::Show(" else true");
		//MessageBox::Show("Field cannot be empty!");
		//supervisorEmail->Clear();
		//supervisorEmail->Focus();
	//}
}
private: System::Void SupervisorRegisterButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((this->supervisorName->Text == "") || (this->supervisorDepartment->Text == "") || (this->supervisorEmail->Text == "") || (this->SupervisorID->Text == "") || (this->supervisorPassword->Text == "")) {
		MessageBox::Show("All the fields must have details!!");
	}
	else {
		//MessageBox::Show("Register button clicked");
		String^ connectionString;
		connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\pawnstar\\source\\repos\\Logbook\\Students.mdb;";
		OleDbConnection^ connection = OpenConnection(connectionString);
		String^ Query = "INSERT INTO Users.Supervisors(FullName, [Department], Email, SupervisorID, [Password]) VALUES('" + this->supervisorName->Text + "', '" + this->supervisorDepartment->Text + "', '" + this->supervisorEmail->Text + "', '" + this->SupervisorID->Text + "', '" + this->supervisorPassword->Text + "');";
		OleDbCommand^ cmd = gcnew OleDbCommand(Query, connection);
		cmd->ExecuteNonQuery();
		connection->Close();
		MessageBox::Show("Registered successfully.........restart the application and login!");
		Application::Exit();
	}
}
};
}
