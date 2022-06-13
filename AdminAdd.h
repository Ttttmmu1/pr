#pragma once
#include <msclr\marshal_cppstd.h>
#include <fstream>

namespace Autolibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminAdd
	/// </summary>
	public ref class AdminAdd : public System::Windows::Forms::Form
	{
	public:
		AdminAdd(void)
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
		~AdminAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(35, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminAdd::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->Location = System::Drawing::Point(349, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 67);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Додати книгу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminAdd::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->Location = System::Drawing::Point(32, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 18);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Рік видання";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->Location = System::Drawing::Point(32, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 18);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Автор";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(32, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Назва";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(30, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 26);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Введіть необхідну інформацію";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(35, 250);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(35, 189);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(223, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(340, 20);
			this->textBox1->TabIndex = 9;
			// 
			// AdminAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(553, 346);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"AdminAdd";
			this->Text = L"AdminAdd";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ AddTitle = textBox1->Text;
		String^ AddAuthor = textBox2->Text;
		String^ AddYear = textBox3->Text;
		msclr::interop::marshal_context context0;
		msclr::interop::marshal_context context1;
		msclr::interop::marshal_context context2;
		std::string title = context0.marshal_as<std::string>(AddTitle);
		std::string author = context1.marshal_as<std::string>(AddAuthor);
		std::string year = context2.marshal_as<std::string>(AddYear);
		std::ifstream in_library;
		in_library.open("library.txt");
		bool alreadyExists = false;
		char arr[500];
		char* tmp;
		while (in_library.getline(arr, 500)) {
			tmp = strtok(arr, "\"");
			if (tmp != NULL)
			{
				std::string line(tmp);
				if (line.compare(title) == 0)
				{
					alreadyExists = true;
					break;
				}
			}
		}
		in_library.close();
		if (!alreadyExists)
		{
			if (!title.empty() && !author.empty() && !year.empty())
			{
				std::ofstream library;
				library.open("library.txt", std::ios::app);
				library << "\"" << title << "\" | " << author << " | " << year << "\n";
				library.close();
				MessageBox::Show("Додано успішно");
			}
			else MessageBox::Show("Ви заповнили не всі поля");
		}
		else MessageBox::Show("Книга вже у наявності");
	}

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Form::Close();
    }
};
}
