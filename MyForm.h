#pragma once
#include "MyForm2.h"
#include <vector>
#include <string> 
#include <cstdlib>
#include <fstream>	
#include <iostream>



using namespace std;
namespace My645база {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ richText1;

	private: System::Windows::Forms::RichTextBox^ richText2;
	private: System::Windows::Forms::RichTextBox^ richText3;










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richText1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richText2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richText3 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 168);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите число K:";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(332, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 58);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Создать файлы ответов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(482, 533);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->maskedTextBox1->Location = System::Drawing::Point(147, 167);
			this->maskedTextBox1->Mask = L"00000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PromptChar = ' ';
			this->maskedTextBox1->Size = System::Drawing::Size(410, 22);
			this->maskedTextBox1->TabIndex = 0;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::maskedTextBox1_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(11, 10);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(581, 85);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->TabStop = false;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(169, 344);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(270, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Результат выполнения программы:";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(130, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 58);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Создать файл для считывания";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(40, 376);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(194, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Содержимое New1_file.txt:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(346, 376);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(194, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Содержимое New2_file.txt:";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(238, 202);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Исходный файл:";
			// 
			// richText1
			// 
			this->richText1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richText1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richText1->Location = System::Drawing::Point(13, 221);
			this->richText1->Name = L"richText1";
			this->richText1->ReadOnly = true;
			this->richText1->Size = System::Drawing::Size(581, 108);
			this->richText1->TabIndex = 18;
			this->richText1->TabStop = false;
			this->richText1->Text = L"";
			// 
			// richText2
			// 
			this->richText2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richText2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richText2->Location = System::Drawing::Point(14, 419);
			this->richText2->Name = L"richText2";
			this->richText2->ReadOnly = true;
			this->richText2->Size = System::Drawing::Size(279, 108);
			this->richText2->TabIndex = 19;
			this->richText2->TabStop = false;
			this->richText2->Text = L"";
			// 
			// richText3
			// 
			this->richText3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richText3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richText3->Location = System::Drawing::Point(304, 419);
			this->richText3->Name = L"richText3";
			this->richText3->ReadOnly = true;
			this->richText3->Size = System::Drawing::Size(279, 108);
			this->richText3->TabIndex = 20;
			this->richText3->TabStop = false;
			this->richText3->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 573);
			this->Controls->Add(this->richText3);
			this->Controls->Add(this->richText2);
			this->Controls->Add(this->richText1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
			if (maskedTextBox1->Text=="")
		{
		MessageBox::Show("Необходимо ввести коэффициент К!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		maskedTextBox1->Focus();
		return;
		}
		int k;
		k = int::Parse(maskedTextBox1->Text);
		if (k == 0) 
		{
			MessageBox::Show("Коэффициент К должен быть больше 0!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			maskedTextBox1->Text = "";
			return;
		}
		ifstream f1 ("1.txt");
		if (!f1)
		{
			MessageBox::Show("Ошибка при открытии файла 1.txt!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		
		richText1->Text = "";
		richText2->Text = "";
		richText3->Text = "";


		ofstream Out_File1("New1_file.txt");
		ofstream Out_File2("New2_file.txt");
		
		string s; // сюда будем класть считанные строки
		while (!f1.eof()) // пока не достигнут конец файла класть очередную строку в переменную (s)
		{ 
			getline(f1, s);
			String^ ss1 = gcnew String(s.c_str());
			//if (ss1 != "")
			//{
				richText1->AppendText(ss1 + "\n");
				s = s.substr(0, k);
				Out_File1 << s << endl;
				ss1 = gcnew String(s.c_str());
				richText2->AppendText(ss1 + "\n");
				int t = s.length();
				if (t < k)
				{
					Out_File2 << " " << endl;
					richText3->AppendText(" " + "\n");
				}
				else
				{
					s = s.substr(k - 1, 1);
					Out_File2 << s << endl;
					ss1 = gcnew String(s.c_str());
					richText3->AppendText(ss1 + "\n");

				}
			//}
		}
		
		f1.close(); // обязательно закрываем файл что бы не повредить его
		Out_File1.close(); 
		Out_File2.close();
		//label2->Text = ("Были созданы файлы: New1_file.txt New2_file.txt, содержащие ответы");
		}
	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void maskedTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//richText2->Text = "";
	//richText3->Text = "";
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm2^ form = gcnew MyForm2();
	form->ShowDialog();

}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
{
	
	
}


};
}