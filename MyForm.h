#pragma once
#include "About.h"
#include "Report.h"
#include "Login.h"
#include "NewBook.h"
#include "ReportOnLibrary.h"
#include "Review.h"
#include "FutureUser.h"
#include "Search.h"
#include "TakeBook.h"
#include "IDlogin.h"

namespace Autolibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(61, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(777, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вас вітає програма \"Автоматизована бібліотека\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(443, 587);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(365, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Якщо ви працівник бібліотеки і хочете внести зміни натисніть цю кнопку";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(814, 580);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"admin";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 66);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Перегляд книг";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(31, 59);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 66);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Взяти книгу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(236, 59);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(196, 66);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Майбутні книги";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(236, 166);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(196, 66);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Які книги хочуть бачити";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(451, 59);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(196, 66);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Пошук книги";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(451, 166);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(196, 66);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Відгук про бібліотеку";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(101, 142);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(707, 366);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Виберіть що ви хочете зробити";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(236, 259);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(196, 65);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Повернути книгу";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 584);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(106, 23);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Про програму";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 615);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Login^ loginForm = gcnew Login;
		loginForm->ShowDialog();
	}
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		About^ aboutForm = gcnew About;
		aboutForm->Show();
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		NewBook^ newBook = gcnew NewBook;
		newBook->Show();
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		ReportOnLibrary^ reportOnLibrary = gcnew ReportOnLibrary;
		reportOnLibrary->Show();
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Review^ review = gcnew Review;
		review->Show();
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		FutureUser^ futureUser = gcnew FutureUser;
		futureUser->Show();
    }

    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Search^ search = gcnew Search;
		search->Show();
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		TakeBook^ takeBook = gcnew TakeBook;
		takeBook->Show();
    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		IDlogin^ iDlogin = gcnew IDlogin;
		iDlogin->Show();
    }
};
}
