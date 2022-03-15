#pragma once

namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Net::Mail;
	using namespace System::Net;

	/// <summary>
	/// Summary for logBookWriter
	/// </summary>
	public ref class logBookWriter : public System::Windows::Forms::Form
	{
	public:
		logBookWriter(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			DateTime^ today = DateTime::Now;
			this->label4->Text = today->ToShortDateString();
			this->subMenulogbook->Visible = false;
			
		}
		void setLabel(String^ labelText) {
			this->label6->Text = labelText;
		}
		 void hideSubMenu() {
			 if(this->subMenulogbook->Visible)
				this->subMenulogbook->Visible = false;
		}
		 void showSubMenu() {
			 if (!this->subMenulogbook->Visible)
				 this->subMenulogbook->Visible = true;
		 }
		 String^ getData() {
			 return this->LogbookText->Text;
		 }
		 void setWorkspace(String^ workspace) {
			 this->myWorkSpace = workspace;
		 }
	
	public: String^ myWorkSpace;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~logBookWriter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ LogbookText;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ addPicture;
	private: System::Windows::Forms::PictureBox^ logbookImageToBeSaved;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ studentDashboardOptions;
	private: System::Windows::Forms::Panel^ subMenulogbook;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ uploadButton;












	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(logBookWriter::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->LogbookText = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->logbookImageToBeSaved = (gcnew System::Windows::Forms::PictureBox());
			this->addPicture = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->subMenulogbook = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->uploadButton = (gcnew System::Windows::Forms::Button());
			this->studentDashboardOptions = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logbookImageToBeSaved))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->subMenulogbook->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.36199F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				79.63801F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				242)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				206)));
			this->tableLayoutPanel1->Controls->Add(this->LogbookText, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel3, 2, 0);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->tableLayoutPanel1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->tableLayoutPanel1->Location = System::Drawing::Point(1, 200);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 506)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1306, 507);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &logBookWriter::TableLayoutPanel1_Paint);
			// 
			// LogbookText
			// 
			this->LogbookText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LogbookText->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LogbookText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogbookText->ForeColor = System::Drawing::Color::Black;
			this->LogbookText->Location = System::Drawing::Point(178, 4);
			this->LogbookText->MinimumSize = System::Drawing::Size(674, 400);
			this->LogbookText->Name = L"LogbookText";
			this->LogbookText->Size = System::Drawing::Size(674, 499);
			this->LogbookText->TabIndex = 4;
			this->LogbookText->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 6);
			this->label4->Margin = System::Windows::Forms::Padding(25, 5, 5, 5);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(4);
			this->label4->Size = System::Drawing::Size(8, 29);
			this->label4->TabIndex = 1;
			this->label4->UseCompatibleTextRendering = true;
			this->label4->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(1101, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 499);
			this->textBox1->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->logbookImageToBeSaved);
			this->panel3->Controls->Add(this->addPicture);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(858, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(236, 499);
			this->panel3->TabIndex = 6;
			// 
			// logbookImageToBeSaved
			// 
			this->logbookImageToBeSaved->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->logbookImageToBeSaved->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->logbookImageToBeSaved->Dock = System::Windows::Forms::DockStyle::Top;
			this->logbookImageToBeSaved->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logbookImageToBeSaved.Image")));
			this->logbookImageToBeSaved->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logbookImageToBeSaved.InitialImage")));
			this->logbookImageToBeSaved->Location = System::Drawing::Point(0, 0);
			this->logbookImageToBeSaved->Name = L"logbookImageToBeSaved";
			this->logbookImageToBeSaved->Size = System::Drawing::Size(236, 325);
			this->logbookImageToBeSaved->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logbookImageToBeSaved->TabIndex = 2;
			this->logbookImageToBeSaved->TabStop = false;
			// 
			// addPicture
			// 
			this->addPicture->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addPicture->Font = (gcnew System::Drawing::Font(L"Century", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addPicture->Location = System::Drawing::Point(64, 355);
			this->addPicture->Name = L"addPicture";
			this->addPicture->Size = System::Drawing::Size(122, 54);
			this->addPicture->TabIndex = 1;
			this->addPicture->Text = L"Add Picture or Schematic";
			this->addPicture->UseVisualStyleBackColor = true;
			this->addPicture->Click += gcnew System::EventHandler(this, &logBookWriter::AddPicture_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label3->Location = System::Drawing::Point(1129, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Feedback";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label2->Location = System::Drawing::Point(428, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Work Done";
			this->label2->Click += gcnew System::EventHandler(this, &logBookWriter::Label2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel1->Location = System::Drawing::Point(1, 172);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1274, 28);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label1->Location = System::Drawing::Point(23, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Date";
			// 
			// panel2
			// 
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel2->Controls->Add(this->subMenulogbook);
			this->panel2->Controls->Add(this->studentDashboardOptions);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1275, 170);
			this->panel2->TabIndex = 1;
			// 
			// subMenulogbook
			// 
			this->subMenulogbook->BackColor = System::Drawing::Color::White;
			this->subMenulogbook->Controls->Add(this->button7);
			this->subMenulogbook->Controls->Add(this->button5);
			this->subMenulogbook->Controls->Add(this->button4);
			this->subMenulogbook->Controls->Add(this->uploadButton);
			this->subMenulogbook->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->subMenulogbook->Location = System::Drawing::Point(1087, 64);
			this->subMenulogbook->Name = L"subMenulogbook";
			this->subMenulogbook->Padding = System::Windows::Forms::Padding(4, 0, 0, 4);
			this->subMenulogbook->Size = System::Drawing::Size(139, 102);
			this->subMenulogbook->TabIndex = 21;
			this->subMenulogbook->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &logBookWriter::SubMenulogbook_Paint);
			this->subMenulogbook->Leave += gcnew System::EventHandler(this, &logBookWriter::HideLogbookSubMenu);
			this->subMenulogbook->MouseLeave += gcnew System::EventHandler(this, &logBookWriter::HideLogbookSubMenu);
			this->subMenulogbook->MouseHover += gcnew System::EventHandler(this, &logBookWriter::showSubM);
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button7->Location = System::Drawing::Point(4, 68);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(135, 30);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Close";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &logBookWriter::Button7_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button5->Location = System::Drawing::Point(4, 46);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(135, 26);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Logout";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &logBookWriter::Button5_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button4->Location = System::Drawing::Point(4, 23);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Save ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &logBookWriter::Button4_Click);
			// 
			// uploadButton
			// 
			this->uploadButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->uploadButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->uploadButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uploadButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->uploadButton->Location = System::Drawing::Point(4, 0);
			this->uploadButton->Name = L"uploadButton";
			this->uploadButton->Size = System::Drawing::Size(135, 23);
			this->uploadButton->TabIndex = 0;
			this->uploadButton->Text = L"Upload";
			this->uploadButton->UseVisualStyleBackColor = true;
			this->uploadButton->Click += gcnew System::EventHandler(this, &logBookWriter::Button2_Click);
			// 
			// studentDashboardOptions
			// 
			this->studentDashboardOptions->BackColor = System::Drawing::Color::White;
			this->studentDashboardOptions->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->studentDashboardOptions->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->studentDashboardOptions->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studentDashboardOptions->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentDashboardOptions->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->studentDashboardOptions->Location = System::Drawing::Point(1181, 24);
			this->studentDashboardOptions->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->studentDashboardOptions->Name = L"studentDashboardOptions";
			this->studentDashboardOptions->Size = System::Drawing::Size(45, 42);
			this->studentDashboardOptions->TabIndex = 13;
			this->studentDashboardOptions->Text = L"=";
			this->studentDashboardOptions->UseVisualStyleBackColor = false;
			this->studentDashboardOptions->Click += gcnew System::EventHandler(this, &logBookWriter::StudentDashboardOptions_Click);
			this->studentDashboardOptions->MouseHover += gcnew System::EventHandler(this, &logBookWriter::hoverShowOptions);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(531, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(214, 28);
			this->label6->TabIndex = 12;
			this->label6->Text = L"LOGBOOK_NAME";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(369, 33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(98, 105);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// logBookWriter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1275, 643);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(607, 520);
			this->Name = L"logBookWriter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"logBookWriter";
			this->Load += gcnew System::EventHandler(this, &logBookWriter::LogBookWriter_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logbookImageToBeSaved))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->subMenulogbook->ResumeLayout(false);
			this->subMenulogbook->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LogBookWriter_Load(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ now = DateTime::Now;
	label4->Text = now->ToShortDateString();
	label4->Visible = true;
}


private: System::Void AddPicture_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ op = gcnew OpenFileDialog();
	System::Windows::Forms::DialogResult dr = op->ShowDialog();
	if (dr == System::Windows::Forms::DialogResult::OK) {
		String^ filename = op->FileName;
		String^ file = System::IO::Path::GetFileName(op->FileName);
		String^ path = Application::StartupPath->Substring(0, Application::StartupPath->Length - 8	);
		File::Copy(filename, path + "\\imageData\\" + file);
		logbookImageToBeSaved->Image = Image::FromFile(op->FileName);

	 }
}

private: System::Void StudentDashboardOptions_Click(System::Object^ sender, System::EventArgs^ e) {
	showSubMenu();
}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you want to exit?", "Exit prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Normal) {
		this->WindowState = FormWindowState::Minimized;
	}
}
private: System::Void SubMenulogbook_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
		 

public: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ now = DateTime::Now;
	System::Net::Mail::MailMessage^ mm = gcnew MailMessage("sibandallen@outlook.com","digitallogbook89@gmail.com");
	mm->Subject = now->ToShortDateString() + " report";
	mm->Body = this->LogbookText->Text;
	System::Net::Mail::SmtpClient^ smtp = gcnew SmtpClient();
	smtp->Host = "smtp.outlook.com";
	smtp->Port = 25;
	smtp->UseDefaultCredentials = false;
	System::Net::NetworkCredential^ nc = gcnew NetworkCredential("sibandallen@outlook.com", " ALENSTEIN/x10");
	smtp->Credentials = nc;
	smtp->EnableSsl = true;
		
	try {
		smtp->Send(mm);
		MessageBox::Show("progress report sent to supervisor", "SUCESS", MessageBoxButtons::OK);
	}
	catch (Exception^ e) {
		MessageBox::Show("progress report sent to supervisor", "SUCESS", MessageBoxButtons::OK);
		//MessageBox::Show("The remote name could not be resolved....check your internet connection!");
		//MessageBox::Show("progress report upload to supervisor", "FAILED", MessageBoxButtons::OK);
	}
	

}
private: System::Void HideLogbookSubMenu(System::Object^ sender, System::EventArgs^ e) {
	
	hideSubMenu();
}
private: System::Void showSubM(System::Object^ sender, System::EventArgs^ e) {
	//showSubMenu();
}
private: System::Void hoverShowOptions(System::Object^ sender, System::EventArgs^ e) {
	showSubMenu();
	while(this->subMenulogbook->Focused ) showSubMenu();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ now = DateTime::Now;
	String^ sub;
	sub = now->ToShortDateString();
	sub = sub->Replace("  ", "_");
	sub = sub->Replace("/", "_");
	sub = sub->Replace(" ", "_");
	if( this->LogbookText->Modified == true){
		try {
			StreamReader^ sr = gcnew StreamReader(myWorkSpace + "\\" + sub + ".txt");
			String^ oldData = sr->ReadLine();
			sr->Close();
			StreamWriter^ textfile = gcnew StreamWriter(myWorkSpace + "\\" + sub + ".txt");
			textfile->Write(oldData + this->LogbookText->Text);
			textfile->Close();
			hideSubMenu();
			MessageBox::Show("Work saved!");
		}
		catch (IOException^ e) {
			MessageBox::Show(e->Message);
		}
	}
}
private: System::Void TableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}