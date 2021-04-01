#pragma once
#include "Valley.h"

namespace lab14 {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button5;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(172, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"������� ������� ����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 279);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(106, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 318);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(172, 351);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(106, 20);
			this->textBox3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 286);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"�������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(134, 325);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 358);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"����� ����������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"�������� ����� � ������:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"��������� ����� �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(172, 183);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 10;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(278, 15);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(73, 17);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"�������";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(278, 38);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(51, 17);
			this->checkBox2->TabIndex = 12;
			this->checkBox2->Text = L"����";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(278, 61);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(61, 17);
			this->checkBox3->TabIndex = 13;
			this->checkBox3->Text = L"�����";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(119, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"�������� �����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 38);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 15;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(119, 41);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 23);
			this->button4->TabIndex = 16;
			this->button4->Text = L"���������� ����� ����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 64);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 17;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(118, 70);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(154, 23);
			this->button5->TabIndex = 18;
			this->button5->Text = L"������� ������";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 378);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Valley^ Purce = gcnew Valley;

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox5->Text);
	}
	if (checkBox2->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox5->Text);
		Purce->eur.Add_money(a);
	}
	if (checkBox3->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox5->Text);
		Purce->funt.Add_money(a);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox7->Text);
		Purce->doll.Substract_money(a);
	}
	if (checkBox2->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox7->Text);
		Purce->eur.Substract_money(a);
	}
	if (checkBox3->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox7->Text);
		Purce->funt.Substract_money(a);
	}
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox6->Text);
		Purce->doll.Change_rate(a);
	}
	if (checkBox2->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox6->Text);
		Purce->eur.Change_rate(a);
	}
	if (checkBox3->Checked)
	{
		double a;
		a = Convert::ToDouble(textBox6->Text);
		Purce->funt.Change_rate(a);
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Text = Convert::ToString(Purce->calc_total_money());
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = Convert::ToString(Purce->doll.Return_money());
	textBox2->Text = Convert::ToString(Purce->eur.Return_money());
	textBox3->Text = Convert::ToString(Purce->funt.Return_money());
}
};
}
