#pragma once
#include "Student_login.h"
#include "Supervisor_login.h"
#include "StudentDashboard.h"
#include "AboutLogbook.h"
//#include <regex>
//#include <iostream>
//#include <string>



namespace Logbook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Data::SqlTypes;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Summary for Mainform
	/// </summary>
	public ref class Mainform : public System::Windows::Forms::Form
	{
	public:
		Mainform(void)
		{
			InitializeComponent();
			String^ filepath = Application::StartupPath->Substring(0, Application::StartupPath->Length - 10);

			//
			//TODO: Add the constructor code here
			//
		}
		 void loadSupervisorForm(Supervisor_login^ form) {  //its the method that will load the desired form in the main panel
			this->Hide();
			form->Show(); // shows the desired pannel 
			form->supervisorUsername->Focus();
		 }


		 
		 void loadform(StudentDashboard^ form) {
			this->Hide();
			form->Show(); // shows the desired pannel 
		}

		 void loadStudentForm(Student_login^ form) {
			 this->Hide();
			 form->Show();
			 form->studentUsername->Focus();
		 }

		static void loadform(Mainform^ form) {
			form->Show();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;







	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ studentLoginButton;

	private: System::Windows::Forms::Button^ supervisorLoginButton;




	private: System::Windows::Forms::Panel^ panel3;





	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mainform::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->studentLoginButton = (gcnew System::Windows::Forms::Button());
			this->supervisorLoginButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(233, 590);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainform::Panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(71, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 112);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Mainform::PictureBox1_Click);
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
			this->label2->Click += gcnew System::EventHandler(this, &Mainform::Label2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(26, 340);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Settings";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Mainform::Button3_Click);
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
			this->button6->Location = System::Drawing::Point(26, 242);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(173, 62);
			this->button6->TabIndex = 0;
			this->button6->Text = L"About_LogBook";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Mainform::AboutButtonClick);
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
			this->panel2->Size = System::Drawing::Size(641, 548);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainform::Panel2_Paint);
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
			this->studentLoginButton->Click += gcnew System::EventHandler(this, &Mainform::Button5_Click);
			this->studentLoginButton->MouseLeave += gcnew System::EventHandler(this, &Mainform::mouseLeft);
			this->studentLoginButton->MouseHover += gcnew System::EventHandler(this, &Mainform::mouseHover);
			// 
			// supervisorLoginButton
			// 
			this->supervisorLoginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->supervisorLoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->supervisorLoginButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->supervisorLoginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->supervisorLoginButton->Location = System::Drawing::Point(109, 261);
			this->supervisorLoginButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->supervisorLoginButton->Name = L"supervisorLoginButton";
			this->supervisorLoginButton->Size = System::Drawing::Size(174, 134);
			this->supervisorLoginButton->TabIndex = 4;
			this->supervisorLoginButton->Text = L"Supervisor ";
			this->supervisorLoginButton->UseVisualStyleBackColor = true;
			this->supervisorLoginButton->Click += gcnew System::EventHandler(this, &Mainform::Button4_Click);
			this->supervisorLoginButton->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Mainform::MainFormMouseDown);
			this->supervisorLoginButton->MouseLeave += gcnew System::EventHandler(this, &Mainform::MouseLeft);
			this->supervisorLoginButton->MouseHover += gcnew System::EventHandler(this, &Mainform::MouseHovered);
			this->supervisorLoginButton->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Mainform::MainFormMouseMove);
			this->supervisorLoginButton->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Mainform::MainFormMouseUp);
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
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->button4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(233, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(641, 42);
			this->panel3->TabIndex = 7;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mainform::Panel3_Paint);
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
			this->button4->Location = System::Drawing::Point(596, 0);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 42);
			this->button4->TabIndex = 6;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Mainform::Button4_Click_1);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &Mainform::MouseLeave);
			this->button4->MouseHover += gcnew System::EventHandler(this, &Mainform::MouseHover);
			// 
			// Mainform
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Pane;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 590);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(840, 590);
			this->Name = L"Mainform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mainform";
			this->Load += gcnew System::EventHandler(this, &Mainform::Mainform_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Mainform::MainFormMouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Mainform::MainFormMouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Mainform::MainFormMouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	loadSupervisorForm(gcnew Supervisor_login());
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	loadStudentForm(gcnew Student_login());
}
private: System::Void Mainform_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
//dragging the form
		 bool dragging;
		 Point offset;


private: System::Void MainFormMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//enable dragging and get mouse position
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;

}
private: System::Void MainFormMouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//check whether form is able to move
	if (dragging) {
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}
}
private: System::Void MainFormMouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//disable dragging
	dragging = false;
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void HomeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->Refresh();
	loadform(gcnew Mainform());
}
private: System::Void MaximiseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClientSize = System::Drawing::Size(1920, 720);
	//MaximumSize;
}
private: System::Void Button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Do you want to exit?", "Exit prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}


}
private: System::Void MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(110)));
}
private: System::Void MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(110)));
}
private: System::Void MouseHovered(System::Object^ sender, System::EventArgs^ e) {
	this->supervisorLoginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->supervisorLoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(110)));
}
private: System::Void MouseLeft(System::Object^ sender, System::EventArgs^ e) {
	this->supervisorLoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->supervisorLoginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(110)));
}
private: System::Void mouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->studentLoginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->studentLoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(110)));
}
private: System::Void mouseLeft(System::Object^ sender, System::EventArgs^ e) {
	this->studentLoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->studentLoginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
		static_cast<System::Int32>(static_cast<System::Byte>(110)));
}

private: System::Void Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void AboutButtonClick(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	//Mainform::Visible = ;
	AboutLogbook^ f2 = gcnew AboutLogbook;
	f2->ShowDialog();
	//Mainform::Visible = true;
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};

}
