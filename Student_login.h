#pragma once
#include "StudentRegister.h"
#include "StudentDashboard.h"
//#include "Mainform.h"



namespace Logbook {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Data::SqlTypes;
	using namespace System::Data::OleDb;
	//using namespace System::Windows::Forms::Control::Visible;
	/// <summary>
	/// Summary for Student_login
	/// </summary>

	public ref class Student_login : public System::Windows::Forms::Form
	{
	public:

		Student_login(void)
		{
			InitializeComponent();
			this->studentUsername->Focus();
			//
			//TODO: Add the constructor code here
			//
		}

		static OleDbConnection^ OpenConnection(String^ connectionString) {
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			try {
				connection->Open();//open a connection to the mdb database
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
		~Student_login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ studentPassword;

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ logInButton;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel3;
	public: System::Windows::Forms::TextBox^ studentUsername;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student_login::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->studentPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->logInButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->studentUsername = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel2->Location = System::Drawing::Point(161, 305);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(295, 2);
			this->panel2->TabIndex = 24;
			// 
			// studentPassword
			// 
			this->studentPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentPassword->Location = System::Drawing::Point(161, 286);
			this->studentPassword->MaxLength = 20;
			this->studentPassword->Name = L"studentPassword";
			this->studentPassword->PasswordChar = '*';
			this->studentPassword->Size = System::Drawing::Size(292, 13);
			this->studentPassword->TabIndex = 23;
			this->studentPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Student_login::studentPasswordKeyDown);
			this->studentPassword->Leave += gcnew System::EventHandler(this, &Student_login::passwordValidation);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel1->Location = System::Drawing::Point(161, 224);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(295, 2);
			this->panel1->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(243, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 30);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Student";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::AlwaysUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::MidnightBlue;
			this->linkLabel1->Location = System::Drawing::Point(182, 412);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(230, 16);
			this->linkLabel1->TabIndex = 20;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Do you have an account\? Register";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Student_login::LinkLabel1_LinkClicked);
			// 
			// logInButton
			// 
			this->logInButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logInButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logInButton->Location = System::Drawing::Point(234, 331);
			this->logInButton->Name = L"logInButton";
			this->logInButton->Size = System::Drawing::Size(122, 37);
			this->logInButton->TabIndex = 19;
			this->logInButton->Text = L"LOGIN";
			this->logInButton->UseVisualStyleBackColor = true;
			this->logInButton->Click += gcnew System::EventHandler(this, &Student_login::studentLogin);
			this->logInButton->MouseLeave += gcnew System::EventHandler(this, &Student_login::mouseLeave);
			this->logInButton->MouseHover += gcnew System::EventHandler(this, &Student_login::mouseHover);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label2->Location = System::Drawing::Point(158, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 24);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label1->Location = System::Drawing::Point(158, 173);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 24);
			this->label1->TabIndex = 16;
			this->label1->Text = L"StudentID";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->studentUsername);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->panel2);
			this->panel4->Controls->Add(this->logInButton);
			this->panel4->Controls->Add(this->studentPassword);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->panel1);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->linkLabel1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(231, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(643, 590);
			this->panel4->TabIndex = 26;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Student_login::Panel4_Paint);
			// 
			// studentUsername
			// 
			this->studentUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentUsername->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentUsername->Location = System::Drawing::Point(161, 205);
			this->studentUsername->MaxLength = 20;
			this->studentUsername->Name = L"studentUsername";
			this->studentUsername->Size = System::Drawing::Size(292, 13);
			this->studentUsername->TabIndex = 25;
			this->studentUsername->TabIndexChanged += gcnew System::EventHandler(this, &Student_login::StudentUsername_TabIndexChanged);
			this->studentUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Student_login::StudentUsername_KeyDown);
			this->studentUsername->Leave += gcnew System::EventHandler(this, &Student_login::LeaveStudentID);
			this->studentUsername->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Student_login::tabPress);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->button4);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(643, 42);
			this->panel5->TabIndex = 8;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Student_login::Panel5_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button4->Location = System::Drawing::Point(598, 0);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 42);
			this->button4->TabIndex = 6;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Student_login::Button4_Click);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &Student_login::mouseLeft);
			this->button4->MouseHover += gcnew System::EventHandler(this, &Student_login::mouseHovered);
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(53, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 32);
			this->label4->TabIndex = 7;
			this->label4->Text = L"LogBook ";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(28, 432);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Settings";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(28, 351);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Notifications";
			this->button2->UseVisualStyleBackColor = false;
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
			this->button6->Location = System::Drawing::Point(28, 260);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(173, 62);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Home";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Student_login::Button6_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(233, 590);
			this->panel3->TabIndex = 27;
			// 
			// Student_login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(874, 590);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Student_login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Student_login::Student_login_Load);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void Panel5_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e) {
	}

	private: System::Void Button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (MessageBox::Show("Do you want to exit?", "Exit prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}


	private: System::Void LinkLabel1_LinkClicked(System::Object ^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e) {
		this->Hide();
		StudentRegister^ registerStudent = gcnew  StudentRegister();
		registerStudent->Show();
	}
	private: System::Void Panel4_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e) {
	}

	private: System::Void mouseHover(System::Object ^ sender, System::EventArgs ^ e) {
		this->logInButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->logInButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
			static_cast<System::Int32>(static_cast<System::Byte>(110)));
	}

	private: System::Void mouseLeave(System::Object ^ sender, System::EventArgs ^ e) {
		this->logInButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->logInButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
			static_cast<System::Int32>(static_cast<System::Byte>(110)));
	}

	private: System::Void mouseHovered(System::Object ^ sender, System::EventArgs ^ e) {
		this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
			static_cast<System::Int32>(static_cast<System::Byte>(110)));
	}

	private: System::Void mouseLeft(System::Object ^ sender, System::EventArgs ^ e) {
		this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
			static_cast<System::Int32>(static_cast<System::Byte>(110)));
	}

	private: System::Void StudentUsername_TabIndexChanged(System::Object ^ sender, System::EventArgs ^ e) {
		studentPassword->Focus();
	}
	private: System::Void StudentUsername_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e) {
		//if tab or key pressed change focus to password field
		if ((e->KeyCode == Keys::Enter) || (e->KeyCode == Keys::Tab))
		{
			this->studentPassword->Focus();
		}
	}
	private: System::Void Student_login_Load(System::Object ^ sender, System::EventArgs ^ e) {
	}
	
	private: System::Void studentLogin(System::Object ^ sender, System::EventArgs ^ e) {
		//access database connection query
		String^ connectionString;
		connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\pawnstar\\source\\repos\\Logbook\\Users.mdb;";

		String^ Query = "SELECT * FROM Users.Students WHERE StudentID='" + this->studentUsername->Text + "' AND Password='" + this->studentPassword->Text + "';";
		OleDbCommand^ cmd = gcnew OleDbCommand(Query, OpenConnection(connectionString));
		OleDbDataReader^ myReader;
		int count = 0;
		try {
			OleDbConnection^ connection = OpenConnection(connectionString);
			//connection->Open();
			myReader = cmd->ExecuteReader();
			//MessageBox::Show("Reading data");
			if (myReader->Read()) {
				count = count + 1;
				//MessageBox::Show(count + " entries found");
			}
			connection->Close();
			if (count == 1) {
				//MessageBox::Show("You have successfully logged in!");
				this->Hide();
				StudentDashboard^ form = gcnew StudentDashboard();
				form->setStudentTag(this->studentUsername->Text);
				form->Show();

			}
			else if (count > 1) {
				MessageBox::Show("username and password is duplicate");
			}
			else
			{
				MessageBox::Show("wrong credentials! ");
				if (MessageBox::Show("Are you  registered?", "Student not found", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) {
					this->Hide();
					StudentRegister^ registerStudent = gcnew  StudentRegister();
					registerStudent->Show();

				}
			}
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	

	private: System::Void studentPasswordKeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if ((e->KeyCode == Keys::Enter) || (e->KeyCode == Keys::Tab))
		{
			this->logInButton->Focus();
		}
	}
private: System::Void tabPress(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e) {
	if ((e->KeyCode == Keys::Enter) || (e->KeyCode == Keys::Tab))
	{
		this->studentPassword->Focus();
	}
}
private: System::Void LeaveStudentID(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[0-9A-Za-z]*$");
	if (!regex->IsMatch(studentUsername->Text))
	{

		MessageBox::Show("Your StudentID should be letters and numbers only");
		studentUsername->Clear();
	}
}
private: System::Void passwordValidation(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[0-9]*$");
	if (!regex->IsMatch(studentPassword->Text))
	{

		MessageBox::Show("Your password is your barcode number");
		//nameErrorProvider->SetError(this->studentPassword, "Your password is your barcode number");
		studentPassword->Clear();
	}
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	//Mainform:Visible = false;
//	Mainform^ f2 = gcnew Mainform;
	//f2->ShowDialog();
	//Mainform:Visible = true;
}
};

}