#include "SupervisorsDashboard.h"
#include "SupervisorRegister.h"


#pragma once

namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;
	using namespace System::Data::OleDb;
	using namespace System::Text::RegularExpressions;
	/// <summary>
	/// Summary for Supervisor_login
	/// </summary>
	
	public ref class Supervisor_login : public System::Windows::Forms::Form
	{
	public:
		Supervisor_login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->supervisorUsername->Focus();
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
		~Supervisor_login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ supervisorLogin;
	protected:

	public: System::Windows::Forms::TextBox^ supervisorUsername;
	




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ supervisorPassword;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button4;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Supervisor_login::typeid));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->supervisorLogin = (gcnew System::Windows::Forms::Button());
			this->supervisorUsername = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->supervisorPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(356, 478);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(230, 16);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Do you have an account\? Register";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Supervisor_login::LinkLabel1_LinkClicked);
			// 
			// supervisorLogin
			// 
			this->supervisorLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->supervisorLogin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->supervisorLogin->Location = System::Drawing::Point(408, 394);
			this->supervisorLogin->Name = L"supervisorLogin";
			this->supervisorLogin->Size = System::Drawing::Size(122, 37);
			this->supervisorLogin->TabIndex = 10;
			this->supervisorLogin->Text = L"LOGIN";
			this->supervisorLogin->UseVisualStyleBackColor = true;
			this->supervisorLogin->Click += gcnew System::EventHandler(this, &Supervisor_login::Button1_Click);
			// 
			// supervisorUsername
			// 
			this->supervisorUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->supervisorUsername->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorUsername->Location = System::Drawing::Point(342, 240);
			this->supervisorUsername->MaxLength = 20;
			this->supervisorUsername->Name = L"supervisorUsername";
			this->supervisorUsername->Size = System::Drawing::Size(292, 26);
			this->supervisorUsername->TabIndex = 8;
			this->supervisorUsername->TextChanged += gcnew System::EventHandler(this, &Supervisor_login::SupervisorUsername_TextChanged);
			this->supervisorUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Supervisor_login::supervisorTextBoxKeyDown);
			this->supervisorUsername->Leave += gcnew System::EventHandler(this, &Supervisor_login::supervisorValidation);
			this->supervisorUsername->MouseEnter += gcnew System::EventHandler(this, &Supervisor_login::SupervisorLoginTextbox_MouseEnter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label2->Location = System::Drawing::Point(339, 299);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label1->Location = System::Drawing::Point(339, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(403, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 30);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Supervisor";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel1->Location = System::Drawing::Point(342, 264);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(295, 2);
			this->panel1->TabIndex = 13;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Supervisor_login::Panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel2->Location = System::Drawing::Point(342, 350);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(295, 2);
			this->panel2->TabIndex = 15;
			// 
			// supervisorPassword
			// 
			this->supervisorPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->supervisorPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorPassword->Location = System::Drawing::Point(342, 326);
			this->supervisorPassword->MaxLength = 20;
			this->supervisorPassword->Name = L"supervisorPassword";
			this->supervisorPassword->PasswordChar = '*';
			this->supervisorPassword->Size = System::Drawing::Size(292, 26);
			this->supervisorPassword->TabIndex = 14;
			this->supervisorPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Supervisor_login::passwordKeyDown);
			this->supervisorPassword->Leave += gcnew System::EventHandler(this, &Supervisor_login::passwordValidation);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(216, 590);
			this->panel3->TabIndex = 16;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(216, 590);
			this->panel4->TabIndex = 28;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(71, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(99, 112);
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
			this->button2->Text = L"About LogBook";
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
			this->button6->Click += gcnew System::EventHandler(this, &Supervisor_login::Button6_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->button4);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(216, 0);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(497, 42);
			this->panel5->TabIndex = 17;
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
			this->button4->Location = System::Drawing::Point(452, 0);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 42);
			this->button4->TabIndex = 7;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Supervisor_login::Button4_Click);
			// 
			// Supervisor_login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(713, 590);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->supervisorPassword);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->supervisorLogin);
			this->Controls->Add(this->supervisorUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Supervisor_login";
			this->Text = L"Supervisor_login";
			this->Load += gcnew System::EventHandler(this, &Supervisor_login::Supervisor_login_Load);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Supervisor_login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void SupervisorLoginTextbox_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	supervisorUsername->Clear();
}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//access database connection query
		String^ connectionString;
		connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\pawnstar\\source\\repos\\Logbook\\Students.mdb;";

		String^ Query = "SELECT * FROM Supervisors WHERE FullName='" + this->supervisorUsername->Text + "' AND Password='" + this->supervisorPassword->Text + "';";
		OleDbCommand^ cmd = gcnew OleDbCommand(Query, OpenConnection(connectionString));
		OleDbDataReader^ myReader;
		int count = 0;
		try {
			OleDbConnection^ connection = OpenConnection(connectionString);
			myReader = cmd->ExecuteReader();
			//MessageBox::Show("Reading data");
			if (myReader->Read()) {
				count = count + 1;
				//MessageBox::Show(count + " entries found");
			}
			connection->Close();
			if (count == 1) {
				MessageBox::Show("You have successfully logged in!");
				this->Hide();
				SupervisorsDashboard^ form = gcnew SupervisorsDashboard();
				form->Show();
			}
			//else if (count > 1) {
				//MessageBox::Show("username and password is duplicate");
			//}
			else
			{
				MessageBox::Show("wrong credentials! ");
				if (MessageBox::Show("Are you  registered?", "Supervisor not found", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) {
					this->Hide();
					SupervisorRegister^ registerSupervisor = gcnew  SupervisorRegister();
					registerSupervisor->Show();
				}
				this->supervisorPassword->Clear();
				this->supervisorUsername->Clear();
				this->supervisorUsername->Focus();
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
			
		}

	}
private: System::Void LinkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	SupervisorRegister^ registerSupervisor = gcnew  SupervisorRegister();
	registerSupervisor->Show();
	registerSupervisor->supervisorName->Focus();
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you want to exit?", "Exit prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void passwordKeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		supervisorLogin->Focus();
	}

}
private: System::Void supervisorTextBoxKeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)  {
		this->supervisorPassword->Focus();
	}

	if (e->KeyCode == Keys::Tab) {
		this->supervisorPassword->Focus();
	}
}
private: System::Void supervisorValidation(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[A-Z a-z]||.[A-Za-z]*$");
	if (!regex->IsMatch(supervisorUsername->Text))
	{
		MessageBox::Show("Invalid username!");
		supervisorUsername->Focus();
	}
}
private: System::Void passwordValidation(System::Object^ sender, System::EventArgs^ e) {
	Regex^ regex = gcnew Regex("^[0-9]*$");
	if (!regex->IsMatch(supervisorPassword->Text))
	{

	MessageBox::Show("Your password should contain numbers only.");
		supervisorPassword->Focus();
	}
}
private: System::Void SupervisorUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}