#pragma once
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <iostream>
#include <string>

namespace Autolibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewBook
	/// </summary>
	public ref class NewBook : public System::Windows::Forms::Form
	{
	public:
		NewBook(void)
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
		~NewBook()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 29);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(103, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 29);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(174, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 29);
			this->textBox3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Назва";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Автор";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Рік написання";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(471, 196);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Введіть дані про книгу, яку хочете бачити у бібліотеці";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(57, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 35);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Відправити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewBook::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(320, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Закрити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NewBook::button2_Click);
			// 
			// NewBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 283);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"NewBook";
			this->Text = L"NewBook";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Form::Close();
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ name = textBox1->Text;
		msclr::interop::marshal_context context0;
		std::string Name = context0.marshal_as<std::string>(name);

		String^ autor = textBox2->Text;
		msclr::interop::marshal_context context1;
		std::string Autor = context1.marshal_as<std::string>(autor);

		String^ year = textBox3->Text;
		msclr::interop::marshal_context context2;
		std::string Year = context2.marshal_as<std::string>(year);

		if(Name.empty() || Autor.empty() || Year.empty())
		{
			MessageBox::Show("Ви не ввели дані про книгу, книга не додана", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			Form::Close();
		}
		else
		{
			std::ofstream filebook;
			filebook.open("future_user.txt", std::ios::app);
			filebook << Name << " | " << Autor << " | " << Year << "\n";
			filebook.close();

			MessageBox::Show("Книга була успішно додана", "Повідомлення", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Form::Close();
		}
    }
};
}
