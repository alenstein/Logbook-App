#include "logBookWriter.h"
#include "createLogBookDialog.h"
#pragma once

namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace Microsoft::VisualBasic;
	

	/// <summary>
	/// Summary for StudentDashboard
	/// </summary>
	public ref class StudentDashboard : public System::Windows::Forms::Form
	{
	public:
		StudentDashboard(void)
		{
			InitializeComponent();
			int counter = 0;
			//
			//TODO: Add the constructor code here
			//
			customiseDesign();
			
		}
		void setStudentTag(String^ tag) {
			this->studenttag->Text = tag;
		}
		String^ getWorkSpace() {
			return CurrentWorkSpace;
		}
		
	public: String^ CurrentWorkSpace;
	public:	String^ projectName;
	private: System::Windows::Forms::Label^ studenttag;
	public:

	public:
	public: logBookWriter^ writer = gcnew logBookWriter();




		
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentDashboard()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel2_studentdashboard;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ studentDashboardOptions;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ createLogbook;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ subMenuStudentDashboard;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button2;




	private: System::ComponentModel::IContainer^ components;

	private: void customiseDesign() {
		subMenuStudentDashboard->Visible = false;
	}

	private: void showSubMenu(Panel^ subMenu) {
		if (subMenuStudentDashboard->Visible) {
			subMenuStudentDashboard->Visible = false;
		}
		else {
			subMenu->Visible = true;
		}
	}

	private: void hideSubMenu() {
		subMenuStudentDashboard->Visible = false;
	}



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->homeButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2_studentdashboard = (gcnew System::Windows::Forms::Panel());
			this->subMenuStudentDashboard = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->createLogbook = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->studentDashboardOptions = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->studenttag = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2_studentdashboard->SuspendLayout();
			this->subMenuStudentDashboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
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
			this->panel1->Controls->Add(this->button6);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 544);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::Panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(71, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 112);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StudentDashboard::PictureBox1_Click);
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
			this->label2->Click += gcnew System::EventHandler(this, &StudentDashboard::Label2_Click);
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
			this->homeButton->Click += gcnew System::EventHandler(this, &StudentDashboard::HomeButton_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(26, 466);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Settings";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &StudentDashboard::Button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(26, 385);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Notifications";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentDashboard::Button1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(26, 294);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(173, 62);
			this->button6->TabIndex = 0;
			this->button6->Text = L"ToDo";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &StudentDashboard::Button6_Click);
			// 
			// panel2_studentdashboard
			// 
			this->panel2_studentdashboard->BackColor = System::Drawing::Color::White;
			this->panel2_studentdashboard->Controls->Add(this->subMenuStudentDashboard);
			this->panel2_studentdashboard->Controls->Add(this->label4);
			this->panel2_studentdashboard->Controls->Add(this->label3);
			this->panel2_studentdashboard->Controls->Add(this->createLogbook);
			this->panel2_studentdashboard->Controls->Add(this->pictureBox6);
			this->panel2_studentdashboard->Controls->Add(this->pictureBox5);
			this->panel2_studentdashboard->Controls->Add(this->pictureBox2);
			this->panel2_studentdashboard->Controls->Add(this->label1);
			this->panel2_studentdashboard->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2_studentdashboard->Location = System::Drawing::Point(230, 42);
			this->panel2_studentdashboard->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2_studentdashboard->MinimumSize = System::Drawing::Size(607, 489);
			this->panel2_studentdashboard->Name = L"panel2_studentdashboard";
			this->panel2_studentdashboard->Size = System::Drawing::Size(607, 502);
			this->panel2_studentdashboard->TabIndex = 9;
			this->panel2_studentdashboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::Panel2_Paint);
			// 
			// subMenuStudentDashboard
			// 
			this->subMenuStudentDashboard->Controls->Add(this->button7);
			this->subMenuStudentDashboard->Controls->Add(this->button5);
			this->subMenuStudentDashboard->Controls->Add(this->button2);
			this->subMenuStudentDashboard->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->subMenuStudentDashboard->Location = System::Drawing::Point(471, 0);
			this->subMenuStudentDashboard->Name = L"subMenuStudentDashboard";
			this->subMenuStudentDashboard->Padding = System::Windows::Forms::Padding(4, 0, 0, 4);
			this->subMenuStudentDashboard->Size = System::Drawing::Size(139, 102);
			this->subMenuStudentDashboard->TabIndex = 20;
			this->subMenuStudentDashboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::SubMenuStudentDashboard_Paint);
			this->subMenuStudentDashboard->Leave += gcnew System::EventHandler(this, &StudentDashboard::hideSubmenu);
			this->subMenuStudentDashboard->MouseLeave += gcnew System::EventHandler(this, &StudentDashboard::hideOptions);
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button7->Location = System::Drawing::Point(4, 65);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(135, 33);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Close";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &StudentDashboard::Button7_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button5->Location = System::Drawing::Point(4, 33);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(135, 33);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Logout";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &StudentDashboard::Button5_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button2->Location = System::Drawing::Point(4, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 33);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Upload";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentDashboard::Button2_Click_2);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label4->Location = System::Drawing::Point(157, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"No log book files available.........";
			this->label4->Click += gcnew System::EventHandler(this, &StudentDashboard::Label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label3->Location = System::Drawing::Point(73, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 17;
			this->label3->Click += gcnew System::EventHandler(this, &StudentDashboard::Label3_Click_1);
			// 
			// createLogbook
			// 
			this->createLogbook->BackColor = System::Drawing::Color::Transparent;
			this->createLogbook->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->createLogbook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->createLogbook->Location = System::Drawing::Point(231, 364);
			this->createLogbook->Name = L"createLogbook";
			this->createLogbook->Size = System::Drawing::Size(144, 63);
			this->createLogbook->TabIndex = 16;
			this->createLogbook->Text = L"+New Logbook";
			this->createLogbook->UseVisualStyleBackColor = false;
			this->createLogbook->Click += gcnew System::EventHandler(this, &StudentDashboard::createLogbookButton);
			this->createLogbook->MouseLeave += gcnew System::EventHandler(this, &StudentDashboard::mouseLeft);
			this->createLogbook->MouseHover += gcnew System::EventHandler(this, &StudentDashboard::mouseHover);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(254, 70);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(53, 61);
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &StudentDashboard::PictureBox6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(271, 80);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(53, 61);
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &StudentDashboard::PictureBox5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(283, 93);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(53, 61);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &StudentDashboard::PictureBox2_Click);
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
			this->label1->Size = System::Drawing::Size(248, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"My Log Books";
			this->label1->Click += gcnew System::EventHandler(this, &StudentDashboard::Label1_Click);
			// 
			// studentDashboardOptions
			// 
			this->studentDashboardOptions->BackColor = System::Drawing::Color::Transparent;
			this->studentDashboardOptions->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->studentDashboardOptions->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->studentDashboardOptions->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studentDashboardOptions->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentDashboardOptions->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentDashboardOptions->Location = System::Drawing::Point(565, 0);
			this->studentDashboardOptions->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->studentDashboardOptions->Name = L"studentDashboardOptions";
			this->studentDashboardOptions->Size = System::Drawing::Size(45, 42);
			this->studentDashboardOptions->TabIndex = 6;
			this->studentDashboardOptions->Text = L"=";
			this->studentDashboardOptions->UseVisualStyleBackColor = false;
			this->studentDashboardOptions->Click += gcnew System::EventHandler(this, &StudentDashboard::Button4_Click);
			this->studentDashboardOptions->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::SubMenuStudentDashboard_Paint);
			this->studentDashboardOptions->Leave += gcnew System::EventHandler(this, &StudentDashboard::showOptions);
			this->studentDashboardOptions->MouseEnter += gcnew System::EventHandler(this, &StudentDashboard::showOptions);
			this->studentDashboardOptions->MouseLeave += gcnew System::EventHandler(this, &StudentDashboard::showOptions);
			this->studentDashboardOptions->MouseHover += gcnew System::EventHandler(this, &StudentDashboard::showOptions);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->studenttag);
			this->panel3->Controls->Add(this->studentDashboardOptions);
			this->panel3->Location = System::Drawing::Point(230, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(610, 44);
			this->panel3->TabIndex = 10;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::Panel3_Paint);
			// 
			// studenttag
			// 
			this->studenttag->AutoSize = true;
			this->studenttag->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studenttag->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studenttag->Location = System::Drawing::Point(199, 16);
			this->studenttag->Name = L"studenttag";
			this->studenttag->Size = System::Drawing::Size(240, 22);
			this->studenttag->TabIndex = 4;
			this->studenttag->Text = L"..............................................";
			// 
			// StudentDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 544);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2_studentdashboard);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"StudentDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student dashboard";
			this->Load += gcnew System::EventHandler(this, &StudentDashboard::StudentDashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2_studentdashboard->ResumeLayout(false);
			this->panel2_studentdashboard->PerformLayout();
			this->subMenuStudentDashboard->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentDashboard_Load(System::Object ^ sender, System::EventArgs ^ e) {

	}
	private: System::Void Panel2_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e) {
	}
	private: System::Void Label3_Click(System::Object ^ sender, System::EventArgs ^ e) {
		this->pictureBox6 = gcnew System::Windows::Forms::PictureBox();
	}
	private: System::Void Button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
		showSubMenu(subMenuStudentDashboard);
	};
	private: System::Void Button6_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void GroupBox1_Enter(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void Button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}

	private: System::Void HomeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->Refresh();
		
	}
	
private: System::Void mouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->createLogbook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->createLogbook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(110)));
}
private: System::Void mouseLeft(System::Object^ sender, System::EventArgs^ e) {
	this->createLogbook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->createLogbook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(110)));
}
	private: System::Void MouseHovered(System::Object^ sender, System::EventArgs^ e) {
		this->createLogbook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->createLogbook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
			static_cast<System::Int32>(static_cast<System::Byte>(110)));
	}
private: System::Void Button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

 int offset = 0;
 int n = 1;
 
private: System::Void createLogbookButton(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ now = DateTime::Now;
	String^ subPath;
	String^ todayPath;
	String^ filepath = Application::StartupPath->Substring(0, Application::StartupPath->Length - 8) + "\\MyProjects\\" ;

	//load adialog box for the user to save project name
	createLogBookDialog^ messageDialog = gcnew createLogBookDialog();
	messageDialog->Show("CREATE NEW LOGBOOK PROJECT", " ");
	messageDialog->getTextBox()->Focus();
	this->projectName = messageDialog->getText();
	filepath += projectName;

	//create folder for new logbook workspace
	DirectoryInfo^ newLogBookWorkSpace = Directory::CreateDirectory(filepath);

	//create logbookproject current days' workspace
	subPath = now->ToShortDateString();
	subPath = subPath->Replace("  ", "_");
	subPath = subPath->Replace("/", "_");
	subPath = subPath->Replace(" ", "_");
	todayPath = filepath + "\\" + subPath;
	DirectoryInfo^ todayLogbookWorkSpace = Directory::CreateDirectory(todayPath);
	CurrentWorkSpace = todayPath;

	try
	{
		//open existing file if there is already one
		if (todayLogbookWorkSpace->Exists) {
			StreamWriter^ textfile = gcnew StreamWriter(todayPath + "\\" + subPath + ".txt");
			textfile -> Close();
		}
		
		StreamReader^ sr = gcnew StreamReader(todayPath + "\\" + subPath + ".txt");
		String^ oldData = sr->ReadLine();
		sr->Close();
		StreamWriter^ textfile = gcnew StreamWriter(todayPath + "\\" + subPath + ".txt");
		textfile->Write(oldData + writer->getData());
		textfile->Close();
		label3->Text = projectName;
		label4->Visible = false;

	}
	catch (IOException^ e )
	{
		MessageBox::Show(e->Message);
	}
	
	//files created now write from textboxes to files 

	//create new image box with logbook Project name
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDashboard::typeid));
	 System::Windows::Forms::PictureBox^ logbookIcon;
	logbookIcon = (gcnew System::Windows::Forms::PictureBox());
	this->panel2_studentdashboard->Controls->Add(logbookIcon);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(logbookIcon))->BeginInit();
	logbookIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
	logbookIcon->ImageLocation = L"C:\\\\Users\\\\pawnstar\\\\source\\\\repos\\\\Logbook\\\\images\\\\logBookIcon.jpg";
	logbookIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
	logbookIcon->BackColor = System::Drawing::Color::Transparent;
	logbookIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
	logbookIcon->BorderStyle = System::Windows::Forms::BorderStyle::None;
	logbookIcon->Location = System::Drawing::Point(70+offset, 219);
	logbookIcon->Name = L"logbookIcon" + offset;
	logbookIcon->Size = System::Drawing::Size(63, 52);
	logbookIcon->TabIndex = 19;
	logbookIcon->Visible = true;
	logbookIcon->Click += gcnew System::EventHandler(this, &StudentDashboard::openLogBook);

	//create label for class name
	String^ generatedLink;
	generatedLink = projectName;
	System::Windows::Forms::LinkLabel^ generatedLinkLabel;
	generatedLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
	generatedLinkLabel->AutoSize = true;
	generatedLinkLabel->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
	static_cast<System::Int32>(static_cast<System::Byte>(110)));
	generatedLinkLabel->Location = System::Drawing::Point(72 + offset, 277 + offset);
	generatedLinkLabel->Name = L"generatedLinkLabel" + offset;
	generatedLinkLabel->Size = System::Drawing::Size(73 , 12);
	generatedLinkLabel->TabIndex = 10;
	generatedLinkLabel->TabStop = true;
	generatedLinkLabel->Text = generatedLink;
	logbookIcon->Visible = true;
	generatedLinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &StudentDashboard::generatedLinkLabel_LinkClicked);
	this->Controls->Add(generatedLinkLabel);
	

	offset *= n; 
}

private: System::Void Label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FileSystemWatcher1_Changed(System::Object^ sender, System::IO::FileSystemEventArgs^ e) {
}
private: System::Void TreeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
private: System::Void PictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void showOptions(System::Object^ sender, System::EventArgs^ e) {
	showSubMenu(subMenuStudentDashboard);
}

private: System::Void hideOptions(System::Object^ sender, System::EventArgs^ e) {
	hideSubMenu();
}

private: System::Void Panel2_studentdashboard_Leave(System::Object^ sender, System::EventArgs^ e) {
	hideSubMenu();
}

private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you want to exit?", "Exit prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
		}
}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SubMenuStudentDashboard_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if(this->WindowState == FormWindowState::Normal){
		this->WindowState = FormWindowState::Minimized;
	}
}
private: System::Void Button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	writer->Button2_Click(sender, e->Empty);
}
private: System::Void PictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}	
private: System::Void PictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void hideSubmenu(System::Object^ sender, System::EventArgs^ e) {
	panel2_studentdashboard->Visible = false;
	hideSubMenu();
}
private: System::Void openLogBook(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	writer->setWorkspace(CurrentWorkSpace);
	writer->setLabel(projectName);
	writer->Show();
	//this->WindowState =  FormWindowState::Normal;
}
public: System::Void generatedLinkLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	writer->setWorkspace(CurrentWorkSpace);
	writer->Show();
	//this->WindowState = FormWindowState::Maximized;
}

};
}