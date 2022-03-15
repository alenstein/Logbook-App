#pragma once

namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for createLogBookDialog
	/// </summary>
	public ref class createLogBookDialog : public System::Windows::Forms::Form
	{
	public:
		createLogBookDialog(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->projectNameTextBox->Focus();
		
		}
		 System::Windows::Forms::DialogResult Show(String^ title, String^ messageText)
		{
			 Text = title;
			 return (ShowDialog());
		}
		 String^ getText() {
			 return this->projectNameTextBox->Text;
		}
		 System::Windows::Forms::TextBox^ getTextBox() {
			 return this->projectNameTextBox;
		 }
		 void setFocus() {
			 this->projectNameTextBox->Focus();
		 }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~createLogBookDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ projectNameTextBox;

	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->projectNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button1->Location = System::Drawing::Point(72, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &createLogBookDialog::Button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->button2->Location = System::Drawing::Point(208, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CANCEL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &createLogBookDialog::Button2_Click);
			// 
			// projectNameTextBox
			// 
			this->projectNameTextBox->Location = System::Drawing::Point(12, 59);
			this->projectNameTextBox->Name = L"projectNameTextBox";
			this->projectNameTextBox->Size = System::Drawing::Size(303, 20);
			this->projectNameTextBox->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label1->Location = System::Drawing::Point(90, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Enter Project Name";
			// 
			// createLogBookDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(327, 137);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->projectNameTextBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"createLogBookDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"New Logbook";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
