#pragma once


namespace My645база {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
	
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ Close_button;
	private: System::Windows::Forms::Button^ Add_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		

		//---------!!!!!!!Создание файла !!!!!!!---------------- 
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("1.txt", false);
	
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->Close_button = (gcnew System::Windows::Forms::Button());
			this->Add_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Содержимое файла:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox2->Location = System::Drawing::Point(17, 152);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(556, 168);
			this->richTextBox2->TabIndex = 22;
			this->richTextBox2->TabStop = false;
			this->richTextBox2->Text = L"";
			// 
			// Close_button
			// 
			this->Close_button->Location = System::Drawing::Point(442, 337);
			this->Close_button->Name = L"Close_button";
			this->Close_button->Size = System::Drawing::Size(131, 25);
			this->Close_button->TabIndex = 21;
			this->Close_button->Text = L"Завершить";
			this->Close_button->UseVisualStyleBackColor = true;
			this->Close_button->Click += gcnew System::EventHandler(this, &MyForm2::Close_button_Click);
			// 
			// Add_button
			// 
			this->Add_button->Location = System::Drawing::Point(14, 75);
			this->Add_button->Name = L"Add_button";
			this->Add_button->Size = System::Drawing::Size(153, 30);
			this->Add_button->TabIndex = 20;
			this->Add_button->Text = L"Добавить строку";
			this->Add_button->UseVisualStyleBackColor = true;
			this->Add_button->Click += gcnew System::EventHandler(this, &MyForm2::Add_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(353, 16);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Построковое формирование исходного файла";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(14, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(558, 22);
			this->textBox1->TabIndex = 18;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 374);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->Close_button);
			this->Controls->Add(this->Add_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm2";
			this->Text = L"Формирование исходного файла";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm2::MyForm2_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm2::MyForm2_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		   
private: System::Void Add_button_Click(System::Object^ sender, System::EventArgs^ e) 
{

if (textBox1->Text !="" )
	{
	sw->WriteLine(textBox1->Text);
	richTextBox2->AppendText(textBox1->Text + "\n");
	textBox1->Text = "";
	textBox1->Focus();
	}
else
{
	MessageBox::Show("Ошибка! Строка не должна быть пустой!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	textBox1->Focus();
}
}
private: System::Void MyForm2_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
	{
	if (richTextBox2->Text == "")
		{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Созданный файл пуст! Хотите закрыть окно?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		if (result == System::Windows::Forms::DialogResult::No)
		{e->Cancel = true;}
		}
	}
private: System::Void Close_button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	 this->Close();
	}

private: System::Void MyForm2_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) 
{
	sw->Close();
}
};
}
