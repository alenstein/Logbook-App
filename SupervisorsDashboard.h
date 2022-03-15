#pragma once
#include "SupervisorClasses.h"
#include "StudentsInfor.h"
namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SupervisorsDashboard
	/// </summary>
	public ref class SupervisorsDashboard : public System::Windows::Forms::Form
	{
	public:
		SupervisorsDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
		void setClassname(String^ className) {
			this->createdClassName->Text = className;
			this->createdClassName->Visible = true;
		}
	private: System::Windows::Forms::Label^ createdClassName;
	public:
		static SupervisorsDashboard^ supervisordashboardReference;
		static String^ classNameTextChanged;
	private: System::Windows::Forms::Label^ classNamed;



	public:
		static String^ courseNameTextChanged;
		 static void backToDashboard() {
			 supervisordashboardReference->Focus();
			}
		 int offset = 0;
		 String^ recentCreatedClassName;
		 void classCreated(String^ className) {
			 //create new image box with logbook Project name
			 System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SupervisorsDashboard::typeid));
			 System::Windows::Forms::PictureBox^ classIcon;
			 classIcon = (gcnew System::Windows::Forms::PictureBox());
			 this->panel2_supervisordashboard->Controls->Add(classIcon);
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(classIcon))->BeginInit();
			 classIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			 classIcon->ImageLocation = L"C:\\\\Users\\\\pawnstar\\\\source\\\\repos\\\\Logbook\\\\images\\\\classIcon.png";
			 classIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			 classIcon->BackColor = System::Drawing::Color::Transparent;
			 classIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			 classIcon->BorderStyle = System::Windows::Forms::BorderStyle::None;
			 classIcon->Location = System::Drawing::Point(75 + offset, 100);
			 classIcon->Name = L"classIcon" + offset;
			 classIcon->Size = System::Drawing::Size(63 + offset, 52 );
			 classIcon->TabIndex = 19;
			 classIcon->Visible = true;
			 classIcon->Click += gcnew System::EventHandler(this, &SupervisorsDashboard::openClass);
			 
			 createdClassName->Text = className;

	
			 classNamed = (gcnew System::Windows::Forms::Label());
			 panel2_supervisordashboard->Controls->Add(this->classNamed);

			 // classNamed
			 classNamed->AutoSize = true;
			 classNamed->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			 classNamed->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				 static_cast<System::Int32>(static_cast<System::Byte>(110)));
			 classNamed->Location = System::Drawing::Point(70 + offset, 145);
			 classNamed->Name = L"classNamed";
			 classNamed->Size = System::Drawing::Size(145, 36);
			 classNamed->TabIndex = 3;
			 classNamed->Text = L"TEE2019";
			 
			 offset += 150;
		 }
		 
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SupervisorsDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel2_supervisordashboard;

	private: System::Windows::Forms::Button^ createLogbook;


	//private: System::Windows::Forms::Label^ createdClassName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ homeButton;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ doesSupervisorHaveClasses;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SupervisorsDashboard::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel2_supervisordashboard = (gcnew System::Windows::Forms::Panel());
			this->createdClassName = (gcnew System::Windows::Forms::Label());
			this->doesSupervisorHaveClasses = (gcnew System::Windows::Forms::Label());
			this->createLogbook = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->homeButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->panel2_supervisordashboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->button4);
			this->panel3->Location = System::Drawing::Point(230, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(610, 44);
			this->panel3->TabIndex = 13;
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
			this->button4->Location = System::Drawing::Point(565, 0);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 42);
			this->button4->TabIndex = 6;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SupervisorsDashboard::Button4_Click);
			// 
			// panel2_supervisordashboard
			// 
			this->panel2_supervisordashboard->BackColor = System::Drawing::Color::White;
			this->panel2_supervisordashboard->Controls->Add(this->createdClassName);
			this->panel2_supervisordashboard->Controls->Add(this->doesSupervisorHaveClasses);
			this->panel2_supervisordashboard->Controls->Add(this->createLogbook);
			this->panel2_supervisordashboard->Controls->Add(this->label1);
			this->panel2_supervisordashboard->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->panel2_supervisordashboard->Location = System::Drawing::Point(230, 42);
			this->panel2_supervisordashboard->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2_supervisordashboard->Name = L"panel2_supervisordashboard";
			this->panel2_supervisordashboard->Size = System::Drawing::Size(610, 502);
			this->panel2_supervisordashboard->TabIndex = 12;
			this->panel2_supervisordashboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SupervisorsDashboard::Panel2_studentdashboard_Paint);
			// 
			// createdClassName
			// 
			this->createdClassName->AutoSize = true;
			this->createdClassName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createdClassName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->createdClassName->Location = System::Drawing::Point(96, 292);
			this->createdClassName->Name = L"createdClassName";
			this->createdClassName->Size = System::Drawing::Size(0, 20);
			this->createdClassName->TabIndex = 18;
			this->createdClassName->Click += gcnew System::EventHandler(this, &SupervisorsDashboard::openTheClass);
			// 
			// doesSupervisorHaveClasses
			// 
			this->doesSupervisorHaveClasses->AutoSize = true;
			this->doesSupervisorHaveClasses->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->doesSupervisorHaveClasses->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->doesSupervisorHaveClasses->Location = System::Drawing::Point(148, 167);
			this->doesSupervisorHaveClasses->Name = L"doesSupervisorHaveClasses";
			this->doesSupervisorHaveClasses->Size = System::Drawing::Size(195, 22);
			this->doesSupervisorHaveClasses->TabIndex = 17;
			this->doesSupervisorHaveClasses->Text = L"No Classes .................";
			// 
			// createLogbook
			// 
			this->createLogbook->BackColor = System::Drawing::Color::Transparent;
			this->createLogbook->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->createLogbook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->createLogbook->Location = System::Drawing::Point(221, 327);
			this->createLogbook->Name = L"createLogbook";
			this->createLogbook->Size = System::Drawing::Size(144, 63);
			this->createLogbook->TabIndex = 16;
			this->createLogbook->Text = L"+New Class";
			this->createLogbook->UseVisualStyleBackColor = false;
			this->createLogbook->Click += gcnew System::EventHandler(this, &SupervisorsDashboard::CreateLogbook_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label1->Location = System::Drawing::Point(174, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"My Classes";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(26, 289);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Notifications";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SupervisorsDashboard::Button1_Click);
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
			this->homeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(26, 369);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Settings";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->homeButton);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(233, 544);
			this->panel1->TabIndex = 11;
			// 
			// SupervisorsDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 544);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2_supervisordashboard);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SupervisorsDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SupervisorsDashboard";
			this->panel3->ResumeLayout(false);
			this->panel2_supervisordashboard->ResumeLayout(false);
			this->panel2_supervisordashboard->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CreateLogbook_Click(System::Object^ sender, System::EventArgs^ e) {
	//load adialog box for the user to save project name
	SupervisorClasses^ messageDialog = gcnew SupervisorClasses();
	messageDialog->Show();
	bool state = messageDialog->CLASS_CREATED;
	messageDialog->getsuperTextBox()->Focus();
	//MessageBox::Show("MessagedialogFOCUSED");
	
	//MessageBox::Show("Messagedialog not FOCUSED");
	messageDialog->classCreateName->Focus();
	this->recentCreatedClassName = messageDialog->getClassTextInputted();
	if (recentCreatedClassName != "") {
		MessageBox::Show(recentCreatedClassName);
	}
	setClassname(recentCreatedClassName);
	classCreated(recentCreatedClassName);
	this->doesSupervisorHaveClasses->Visible = false;
	createdClassName->Text = recentCreatedClassName;

}
private: System::Void Panel2_studentdashboard_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void openClass(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	//writer->setWorkspace(CurrentWorkSpace);
	//writer->setLabel(projectName);
	//writer->Show()
	StudentsInfor^ loadStudents = gcnew StudentsInfor();
	loadStudents->Show();
	//this->WindowState = FormWindowState::Maximized;
}
private: System::Void generatedLinkLabelClick(System::Object^ sender, System::EventArgs^ e) {
	//open class
	//StudentsInfor^ myclass = gcnew StudentsInfor();
}

private: System::Void openTheClass(System::Object^ sender, System::EventArgs^ e) {
	StudentsInfor^ loadStudents = gcnew StudentsInfor();
	loadStudents->Show();
}

};
}
