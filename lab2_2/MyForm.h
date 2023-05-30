#pragma once

namespace lab2_2 {

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

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:

	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(218, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Войцехівска Ольга";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"Київ", L"Рівне", L"Луцьк", L"Львів", L"Житомир",
					L"Чернівці", L"Івано-Франківськ", L"Тернопіль", L"Хмельницький", L"Ужгород", L"Вінниця", L"Черкаси", L"Полтава", L"Чернігів",
					L"Суми", L"Харків", L"Кропивницький", L"Дніпро", L"Миколаїв", L"Луганськ", L"Донецьк", L"Одеса", L"Чернігів", L"Херсон", L"Сімферополь"
			});
			this->comboBox1->Location = System::Drawing::Point(29, 22);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 202);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(321, 54);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"2. Скласти програму, яка виводить назву області за назвою міста.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 309);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int city = comboBox1->SelectedIndex;
		switch (city)
		{
		case 0: textBox1->Text = "Київська"; break;
		case 1: textBox1->Text = "Рівненська"; break;
		case 2: textBox1->Text = "Волинська"; break;
		case 3: textBox1->Text = "Львівська"; break;
		case 4: textBox1->Text = "Житомирська"; break;
		case 5: textBox1->Text = "Чернівецька"; break;
		case 6: textBox1->Text = "Івано-Франківська"; break;
		case 7: textBox1->Text = "Тернопільська"; break;
		case 8: textBox1->Text = "Хмельницька"; break;
		case 9: textBox1->Text = "Закарпатська"; break;
		case 10: textBox1->Text = "Вінницька"; break;
		case 11: textBox1->Text = "Черкаська"; break;
		case 12: textBox1->Text = "Полтавська"; break;
		case 13: textBox1->Text = "Чернігівська"; break;
		case 14: textBox1->Text = "Сумська"; break;
		case 15: textBox1->Text = "Харківська"; break;
		case 16: textBox1->Text = "Кіровоградська"; break;
		case 17: textBox1->Text = "Дніпрпетровська"; break;
		case 18: textBox1->Text = "Миколаївська"; break;
		case 19: textBox1->Text = "Луганська"; break;
		case 20: textBox1->Text = "Донецька"; break;
		case 21: textBox1->Text = "Одеська"; break;
		case 22: textBox1->Text = "Чернігівська"; break;
		case 23: textBox1->Text = "Херсонська"; break;
		case 24: textBox1->Text = "Кримська"; break;
		default:
		break;
		}
	}
	};
}
