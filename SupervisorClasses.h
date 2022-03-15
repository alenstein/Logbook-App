#pragma once

namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SupervisorClasses
	/// </summary>
	public ref class SupervisorClasses : public System::Windows::Forms::Form
	{
	public:
		SupervisorClasses(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->classCreateName->Focus();
		}
		System::Windows::Forms::TextBox^ getsuperTextBox() {
			return this->classCreateName;
		}
		String^ getClassName(){
			return this->classCreateName->Text;
		}
		String^ getCourseName() {
			return this->classCreateName->Text;
		}
		bool CLASS_CREATED = true;
		
		String^ classtextBoxInput;
		String^ coursetextBoxInput;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SupervisorClasses()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ classCreateName;
	private: System::Windows::Forms::TextBox^ courseName;
	private: System::Windows::Forms::Button^ createClassButton;












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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->classCreateName = (gcnew System::Windows::Forms::TextBox());
			this->courseName = (gcnew System::Windows::Forms::TextBox());
			this->createClassButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label1->Location = System::Drawing::Point(25, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Class";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->label3->Location = System::Drawing::Point(25, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Course Name";
			this->label3->Click += gcnew System::EventHandler(this, &SupervisorClasses::Label3_Click);
			// 
			// classCreateName
			// 
			this->classCreateName->Location = System::Drawing::Point(126, 50);
			this->classCreateName->Name = L"classCreateName";
			this->classCreateName->Size = System::Drawing::Size(155, 20);
			this->classCreateName->TabIndex = 20;
			this->classCreateName->ModifiedChanged += gcnew System::EventHandler(this, &SupervisorClasses::classNameInputted);
			this->classCreateName->Leave += gcnew System::EventHandler(this, &SupervisorClasses::classNameInputted);
			// 
			// courseName
			// 
			this->courseName->Location = System::Drawing::Point(126, 94);
			this->courseName->Name = L"courseName";
			this->courseName->Size = System::Drawing::Size(155, 20);
			this->courseName->TabIndex = 21;
			this->courseName->ModifiedChanged += gcnew System::EventHandler(this, &SupervisorClasses::courseInput);
			this->courseName->Leave += gcnew System::EventHandler(this, &SupervisorClasses::courseInput);
			// 
			// createClassButton
			// 
			this->createClassButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->createClassButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->createClassButton->Location = System::Drawing::Point(110, 144);
			this->createClassButton->Name = L"createClassButton";
			this->createClassButton->Size = System::Drawing::Size(75, 23);
			this->createClassButton->TabIndex = 25;
			this->createClassButton->Text = L"Create";
			this->createClassButton->UseVisualStyleBackColor = true;
			this->createClassButton->Click += gcnew System::EventHandler(this, &SupervisorClasses::Button2_Click);
			// 
			// SupervisorClasses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(307, 218);
			this->Controls->Add(this->createClassButton);
			this->Controls->Add(this->courseName);
			this->Controls->Add(this->classCreateName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SupervisorClasses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"New Class";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->CLASS_CREATED = false;

}
public: String^ getClassTextInputted() {
	return this->classtextBoxInput;
}
public: String^ getCourseTextInputted() {
	return this->coursetextBoxInput;
}
private: System::Void classNameInputted(System::Object^ sender, System::EventArgs^ e) {
	this->classtextBoxInput = this->classCreateName->Text;
}
private: System::Void courseInput(System::Object^ sender, System::EventArgs^ e) {
	this->coursetextBoxInput = this->courseName->Text;
}
};
}

