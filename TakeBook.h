#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
#include <random>
#include <sstream>
namespace Autolibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TakeBook
	/// </summary>
	public ref class TakeBook : public System::Windows::Forms::Form
	{
	public:
		TakeBook(void)
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
		~TakeBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(295, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Взяти книгу";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(399, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть назву книги, яку хочете взяти";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(184, 353);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 42);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Взяти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TakeBook::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(442, 353);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 42);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Закрити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TakeBook::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(417, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 26);
			this->textBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(420, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Введіть автора книги, яку хочете взяти";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(482, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Введіть рік написання книги, яку хочете взяти";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(442, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(314, 26);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(507, 198);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(249, 26);
			this->textBox3->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(16, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(723, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Перед тим як закрити вікно запишіть свій номер, він знадобиться вам коли ви будет"
				L"е повертати книгу";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(299, 303);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(165, 30);
			this->textBox4->TabIndex = 11;
			// 
			// TakeBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 426);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"TakeBook";
			this->Text = L"TakeBook";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Form::Close();
	}
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ name = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string namee = context.marshal_as<std::string>(name);

		std::ifstream in_library;
		in_library.open("library.txt");
		std::string contentt((std::istreambuf_iterator<char>(in_library)),
			(std::istreambuf_iterator<char>()));
		in_library.close();
		if (contentt.find(namee) != std::string::npos)
		{
			String^ Delete = textBox1->Text;
			msclr::interop::marshal_context context;
			std::string title = "\"" + context.marshal_as<std::string>(Delete) + "\"";

			std::ifstream in_library;
			in_library.open("library.txt");
			//Get length of file
			in_library.seekg(0, in_library.end);
			int length = in_library.tellg();
			in_library.seekg(0, in_library.beg);
			///////////////////////////
			char* buffer = new char[length];
			in_library.get(buffer, length, '`');
			in_library.close();
			std::string text(buffer);
			size_t pos1 = text.find(title);
				size_t pos2 = text.find("\n", pos1);
				text.erase(pos1, (pos2 + 1) - pos1);
				std::ofstream library;
				library.open("library.txt", std::ios::trunc);
				library << text;
				library.close();
				String^ AddTitle = textBox1->Text;
				String^ AddAuthor = textBox2->Text;
				String^ AddYear = textBox3->Text;
				msclr::interop::marshal_context context0;
				msclr::interop::marshal_context context1;
				msclr::interop::marshal_context context2;
				std::string titlee = context0.marshal_as<std::string>(AddTitle);
				std::string authorr = context1.marshal_as<std::string>(AddAuthor);
				std::string yearr = context2.marshal_as<std::string>(AddYear);
				std::ifstream in_libraryy;
				std::ofstream libraryy;
				std::random_device dev;
				std::mt19937 rng(dev());
				std::uniform_int_distribution<std::mt19937::result_type> dist6(100000, 999999);
				int a = dist6(rng);
				std::string str;
				std::stringstream ss;
				ss << a;
				ss >> str;
				libraryy.open("taken_book.txt", std::ios::app);
				libraryy << "\"" << titlee << "\" | " << authorr << " | " << yearr << " | " << a << "\n";
				libraryy.close();
				msclr::interop::marshal_context context07;
				String^ Title = context07.marshal_as<String^>(str);
				textBox4->Text = Title;
		}
		else
		{
			MessageBox::Show("Нажаль такої книги немає, ви не можете її взяти", "Повідомлення", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
    }
};
}
