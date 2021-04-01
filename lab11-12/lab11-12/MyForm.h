#pragma once

#include "Massiv.h"
#include<ctime>
#include<cstdlib>

namespace lab11_12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox6;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(120, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�������� ����� � ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(13, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(521, 20);
			this->textBox2->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(366, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"������� ������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(16, 173);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"������� ��������� ������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 229);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(517, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(16, 273);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(517, 20);
			this->textBox4->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(120, 334);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(228, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"������� ��� ����� �� �������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(13, 336);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 363);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(13, 380);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(520, 20);
			this->textBox6->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 502);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Massiv<int> mas1;
		Massiv<int> mas2;

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "������� ��������� �������:";
		textBox2->Text = "";
		for (int i = 0; i < mas1.getSize(); i++)
		{
			textBox2->Text += mas1.getElement(i) + "  ";
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int a;
	a = Convert::ToInt32(textBox1->Text);
	mas1.addNumber(a);
	textBox1->Text = "";
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int a;
	srand(time(0));
	textBox3->Text = "";
	textBox4->Text = "";
	label2->Text = "��������������� ��������� ������:";
	label3->Text = "���������� ���������� ������:";
	for (int i = 0; i < mas1.getSize(); i++)
	{
		a = rand() % 10;
		mas2.addNumber(a);
		textBox3->Text += a + "  ";
	}
	mas1 = mas1 - mas2;
	for (int i = 0; i < mas1.getSize(); i++)
	{
		textBox4->Text += mas1.getElement(i) + "  ";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "���������� ������:";
	textBox6->Text = "";
	int a;
	a = Convert::ToInt32(textBox5->Text);
	mas1 - a;
	for (int i = 0; i < mas1.getSize(); i++)
	{
		textBox6->Text += mas1.getElement(i) + "  ";
	}
}
};
}
