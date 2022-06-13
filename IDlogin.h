#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

namespace Autolibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IDlogin
	/// </summary>
	public ref class IDlogin : public System::Windows::Forms::Form
	{
	public:
		IDlogin(void)
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
		~IDlogin()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(136, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Повернути книгу";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(30, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть ваш номер(id)";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(390, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Закрити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &IDlogin::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(52, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Повернути";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &IDlogin::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(269, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 26);
			this->textBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(30, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(212, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Введіть назву книги";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(249, 120);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(306, 26);
			this->textBox2->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(30, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(233, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Введіть автора книги";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(34, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(295, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Введіть рік написання книги";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(273, 157);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(282, 26);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(335, 192);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(220, 26);
			this->textBox4->TabIndex = 10;
			// 
			// IDlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 310);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"IDlogin";
			this->Text = L"IDlogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Form::Close();
	}
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ ID = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string id = context.marshal_as<std::string>(ID);
		String^ AddTitle = textBox2->Text;
		String^ AddAuthor = textBox3->Text;
		String^ AddYear = textBox4->Text;
		msclr::interop::marshal_context context0;
		msclr::interop::marshal_context context1;
		msclr::interop::marshal_context context2;
		std::string title = context0.marshal_as<std::string>(AddTitle);
		std::string author = context1.marshal_as<std::string>(AddAuthor);
		std::string year = context2.marshal_as<std::string>(AddYear);

		std::ifstream newfilee("taken_book.txt");
		std::string cont((std::istreambuf_iterator<char>(newfilee)),
			(std::istreambuf_iterator<char>()));
		newfilee.close();
		if (cont.find(id) != std::string::npos && cont.find(title) != std::string::npos && cont.find(author) != std::string::npos && cont.find(year) != std::string::npos)
		{
			String^ Delete = textBox2->Text;
			msclr::interop::marshal_context context;
			std::string title = "\"" + context.marshal_as<std::string>(Delete) + "\"";
			std::ifstream in_library;
			in_library.open("taken_book.txt");
			in_library.seekg(0, in_library.end);
			int length = in_library.tellg();
			in_library.seekg(0, in_library.beg);
			char* buffer = new char[length];
			in_library.get(buffer, length, '`');
			in_library.close();
			std::string text(buffer);
			size_t pos1 = text.find(title);
				size_t pos2 = text.find("\n", pos1);
				text.erase(pos1, (pos2 + 1) - pos1);
				std::ofstream library;
				library.open("taken_book.txt", std::ios::trunc);
				library << text;
				library.close();
			


				
				std::ifstream in_libraryy;
				in_libraryy.open("library.txt");
				bool alreadyExists = false;
				char arr[500];
				char* tmp;
				while (in_libraryy.getline(arr, 500)) {
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
				in_libraryy.close();
				std::ofstream libraryy;
				libraryy.open("library.txt", std::ios::app);
				libraryy  << title << " | "  << author << " | " << year << "\n";
				libraryy.close();


			MessageBox::Show("Ви успішно повернули книгу", "Повідомлення", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Такого номера(ID) не існує або ви неправильно ввели назву, спробуйте ще раз", "Попередженяя", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
    }
};
}
