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
	/// Summary for AdinTakenBook
	/// </summary>
	public ref class AdinTakenBook : public System::Windows::Forms::Form
	{
	public:
		AdinTakenBook(void)
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
		~AdinTakenBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(512, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"???????";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdinTakenBook::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(33, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"????? ?????";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(10, 73);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(607, 283);
			this->listView1->TabIndex = 6;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"?????";
			this->columnHeader1->Width = 328;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"?????";
			this->columnHeader2->Width = 170;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"??? ???????";
			this->columnHeader3->Width = 104;
			// 
			// AdinTakenBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 378);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"AdinTakenBook";
			this->Text = L"AdinTakenBook";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->listView1->Items->Clear();
		Form::Refresh();
		getAllData();
	}
	private: System::Void getAllData() {
		std::ifstream in_library;
		in_library.open("taken_book.txt");
		char arr[500];
		char* tmp;
		while (in_library.getline(arr, 500)) {
			//Title
			tmp = strtok(arr, "\"");
			std::string title(tmp);
			msclr::interop::marshal_context context0;
			String^ Title = context0.marshal_as<String^>(title);
			//Author
			tmp = strtok(NULL, "|");
			tmp = strtok(NULL, "|");
			std::string author(tmp);
			msclr::interop::marshal_context context1;
			String^ Author = context1.marshal_as<String^>(author);
			//Year
			tmp = strtok(NULL, "|\n");
			std::string year(tmp);
			msclr::interop::marshal_context context2;
			String^ Year = context2.marshal_as<String^>(year);

			System::Windows::Forms::ListViewItem^ listItem = (gcnew System::Windows::Forms::ListViewItem(Title));
			listItem->SubItems->Add(Author);
			listItem->SubItems->Add(Year);
			this->listView1->Items->Add(listItem);
		}
	}
};
}
