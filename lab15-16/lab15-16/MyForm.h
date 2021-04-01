#pragma once

namespace lab15_16 {

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
	private: System::Windows::Forms::TextBox^  A;
	protected:
	private: System::Windows::Forms::TextBox^  B;

	private: System::Windows::Forms::TextBox^  S;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->A = (gcnew System::Windows::Forms::TextBox());
			this->B = (gcnew System::Windows::Forms::TextBox());
			this->S = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// A
			// 
			this->A->Location = System::Drawing::Point(39, 15);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(100, 20);
			this->A->TabIndex = 0;
			// 
			// B
			// 
			this->B->Location = System::Drawing::Point(39, 38);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(100, 20);
			this->B->TabIndex = 1;
			// 
			// S
			// 
			this->S->Location = System::Drawing::Point(166, 38);
			this->S->Name = L"S";
			this->S->Size = System::Drawing::Size(100, 20);
			this->S->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(166, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"A:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"B:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(209, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"S";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(324, 136);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->S);
			this->Controls->Add(this->B);
			this->Controls->Add(this->A);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			double a, b, c, s;
			a = Convert::ToDouble(A->Text);
			b = Convert::ToDouble(B->Text);
			
			s = 1/(a+b)+1/((a+b)*(a+b));
			S->Text = s.ToString("n");
		}
		catch (System::FormatException^ex) {
			MessageBox::Show("Заполните все поля.", "Ошибка!",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
};
}
