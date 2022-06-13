#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>


namespace Autolibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Report
	/// </summary>
	public ref class Report : public System::Windows::Forms::Form
	{
	public:
		Report(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Report()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Напишіть яку помилку ви помітили";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 42);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(302, 148);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Відправити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Report::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(200, 235);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Закрити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Report::button2_Click);
			// 
			// Report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 295);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Report";
			this->Text = L"Report";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Form::Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ reportt = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string report = context.marshal_as<std::string>(reportt);
		std::ofstream reportfile;
		reportfile.open("report.txt", std::ios::app);
		reportfile << "Report: " << report << "\n";
		reportfile.close();
		textBox1->Text = "Дякую за ваш відгук";
	}
};
}
