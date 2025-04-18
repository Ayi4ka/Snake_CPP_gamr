#pragma once
#include "Header.h"
#include "Header1.h"
#include "Header2.h"
#include "Header3.h"
#include <Windows.h>
#include <iostream>
#include "list"
#include <cstdlib>
#include <ctime>
#include <msclr\marshal_cppstd.h>


namespace Zmeika1 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;



	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;

	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pictureBox1->Location = System::Drawing::Point(179, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(820, 10);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pictureBox2->Location = System::Drawing::Point(179, 663);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(820, 10);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pictureBox3->Location = System::Drawing::Point(179, 13);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(10, 660);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pictureBox4->Location = System::Drawing::Point(989, 13);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(10, 660);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Уровни сложности";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LavenderBlush;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Никнейм";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::DodgerBlue;
			this->pictureBox5->Location = System::Drawing::Point(179, 13);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(10, 10);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::PaleGreen;
			this->pictureBox6->Location = System::Drawing::Point(259, 13);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(10, 10);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Gold;
			this->pictureBox7->Location = System::Drawing::Point(211, 13);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(10, 10);
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 45);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(18, 83);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Легкая";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(18, 103);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(68, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Средняя";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(18, 123);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(70, 17);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Тяжелая";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Firebrick;
			this->pictureBox8->Location = System::Drawing::Point(243, 13);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(10, 10);
			this->pictureBox8->TabIndex = 18;
			this->pictureBox8->TabStop = false;
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LavenderBlush;
			this->textBox1->Location = System::Drawing::Point(17, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Игрок: ";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::PaleGreen;
			this->pictureBox9->Location = System::Drawing::Point(18, 21);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(15, 15);
			this->pictureBox9->TabIndex = 21;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Gold;
			this->pictureBox10->Location = System::Drawing::Point(18, 66);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(15, 15);
			this->pictureBox10->TabIndex = 22;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Firebrick;
			this->pictureBox11->Location = System::Drawing::Point(18, 87);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(15, 15);
			this->pictureBox11->TabIndex = 23;
			this->pictureBox11->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Яблоко (+1)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 26);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Золотое яблоко\r\n(+1 и +скорость)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Отравленное яблоко";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Кол-во набранных очков: ";
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->pictureBox12->Location = System::Drawing::Point(227, 13);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(10, 10);
			this->pictureBox12->TabIndex = 28;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Violet;
			this->pictureBox13->Location = System::Drawing::Point(195, 13);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(10, 10);
			this->pictureBox13->TabIndex = 29;
			this->pictureBox13->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(12, 106);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(161, 149);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Настройки игры";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(12, 348);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(161, 83);
			this->groupBox2->TabIndex = 31;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Данные игры";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->pictureBox15);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->pictureBox14);
			this->groupBox3->Controls->Add(this->pictureBox9);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->pictureBox10);
			this->groupBox3->Controls->Add(this->pictureBox11);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(12, 465);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(161, 142);
			this->groupBox3->TabIndex = 32;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Напоминалка";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 108);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Сюрприз";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Violet;
			this->pictureBox15->Location = System::Drawing::Point(18, 108);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(15, 15);
			this->pictureBox15->TabIndex = 33;
			this->pictureBox15->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(38, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Большое яблоко (+2)";
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->pictureBox14->Location = System::Drawing::Point(18, 42);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(15, 15);
			this->pictureBox14->TabIndex = 0;
			this->pictureBox14->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(21, 47);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 45);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Информация";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(1014, 682);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1030, 720);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Злюка - Змеюка";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//проверка игра идет или уже проигрыш
		if (actions.getGame() == false) {
			//если прроигрыш то все отключается, выводится сообщение о проигрыше, а кнопки включаются
			timer1->Stop();			
			timer3->Stop();
			timer2->Stop();
			MessageBox::Show("Злюка - змеюка: " + textBox1->Text + " проиграла :С " + label7->Text);
			setClose(true); //включение всех кнопок 
		}
		else {
			//если игра продолжается, то делаем все те методы, тут же рисуются яблоки и все все все
			actions.moveSnake();
			actions.checkCollisions();
			checkApple();
			checkApple_Speed();
			checkApple_toxic();
			checkApple_Big();
			checkApple_Telep();
			label3->Text = gcnew System::String(snake.getName().c_str());
			label7->Text = System::Convert::ToString("Кол-во набранных очков:  " + snake.getSizeSnake());
			pictureBox6->Location = System::Drawing::Point(189 + apple.getAppleX() * 10, 23 + apple.getAppleY() * 10);
			pictureBox7->Location = System::Drawing::Point(189 + apple_Speed.getAppleX() * 10, 23 + apple_Speed.getAppleY() * 10);
			pictureBox8->Location = System::Drawing::Point(189 + apple_toxic.getAppleX() * 10, 23 + apple_toxic.getAppleY() * 10);
			pictureBox12->Location = System::Drawing::Point(189 + apple_big.getAppleX() * 10, 23 + apple_big.getAppleY() * 10);
			pictureBox13->Location = System::Drawing::Point(189 + apple_telep.getAppleX() * 10, 23 + apple_telep.getAppleY() * 10);
			pictureBox5->Location = System::Drawing::Point(189 + snake.getX(0) * 10, 23 + snake.getY(0) * 10);
			for (int i = snake.getSizeSnake(); i > 0; i--)
			{
				dots[i]->Location = Point(189 + snake.getX(i) * 10, 23 + snake.getY(i) * 10);
			}
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dots = gcnew cli::array<PictureBox^, 1>(5120);
		timer2->Interval = 1000;
		timer3->Interval = 8000;
		radioButton1->Checked = true;
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//считывание нажатия клавиш 
			if ((e->KeyCode == Keys::W || e->KeyData == Keys::Up) && !snake.getDown()) { // Вверх
				snake.setUp(true);
				snake.setLeft(false);
				snake.setRight(false);
			}
			if ((e->KeyData == Keys::S || e->KeyData == Keys::Down) && !snake.getUp()) { // Вниз
				snake.setDown(true);
				snake.setRight(false);
				snake.setLeft(false);
			}
			if ((e->KeyData == Keys::A || e->KeyData == Keys::Left) && !snake.getRight()) { // Налево
				snake.setLeft(true);
				snake.setDown(false);
				snake.setUp(false);
			}
			if ((e->KeyData == Keys::D || e->KeyData == Keys::Right) && !snake.getLeft()) { // Направо
				snake.setRight(true);
				snake.setDown(false);
				snake.setUp(false);
			}
	}
	public:static cli::array<PictureBox^>^ dots; //создание массивов пикчербоксов
	public: void createDot() {
		//хвостик
		dots[snake.getSizeSnake()] = gcnew PictureBox();
		dots[snake.getSizeSnake()]->BackColor = Color::PowderBlue;
		dots[snake.getSizeSnake()]->Width = 10;
		dots[snake.getSizeSnake()]->Height = 10;
		this->Controls->Add(dots[snake.getSizeSnake()]);
	};
		  //съедания яблок, добавление хвоста, генерация новых яблок
	private: void checkApple() {
		if (snake.getX(0) == apple.getAppleX() && snake.getY(0) == apple.getAppleY()) {
			checkInterval();
			snake.addDots();
			createDot();
			apple.createApple();
		}
	}
	private: void checkApple_Speed() {
		if (snake.getX(0) == apple_Speed.getAppleX() && snake.getY(0) == apple_Speed.getAppleY()) {
			checkInterval();
			snake.addDots();
			createDot();
			apple_Speed.createApple();
			apple_Speed.setTimeSpeed(5);
			timer2->Start();
		}
	}
	private: void checkApple_toxic() {
	   if (snake.getX(0) == apple_toxic.getAppleX() && snake.getY(0) == apple_toxic.getAppleY()) {
		   actions.setGame(false);
	   }
	}
	private: void checkApple_Big() {
	   if (snake.getX(0) == apple_big.getAppleX() && snake.getY(0) == apple_big.getAppleY()) {
		   checkInterval();
		   snake.addDots();
		   createDot();
		   snake.addDots();
		   createDot();
		   apple_big.createApple();
	   }
	}
	private: void checkApple_Telep() {
		if (snake.getX(0) == apple_telep.getAppleX() && snake.getY(0) == apple_telep.getAppleY()) {
			if (snake.getSizeSnake() <= 100) {
				snake.createSnake();
				apple_telep.createApple();
			} else apple_telep.createApple();
		}
	}
		   //таймер для золотого чудо яблока	  
private: System::Void timer2_Tick_1(System::Object^ sender, System::EventArgs^ e) {
	
	if (apple_Speed.getTimeSpeed() >= 0) {
		timer1->Interval = 100;
		apple_Speed.minus();
	}
	else {
		timer1->Interval = 100 * area.getDifficult();
		timer2->Stop();
	}
}
	   //нажатие на кнопку запуска
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i <= snake.getSizeSnake(); i++)
	{
		this->Controls->Remove(dots[i]); //обнуление хвоста
	}
	srand(static_cast<unsigned int>(time(0)));
	snake.removeDots();
	apple.createApple();
	snake.createSnake();
	apple_Speed.createApple();
	apple_toxic.createApple();
	apple_big.createApple();
	apple_telep.createApple();
	createDot();
	if (textBox1->Text == "") {
		snake.setName("Игрок: Ноунейм");
	}
	else snake.setName("Игрок: " + msclr::interop::marshal_as<std::string>(textBox1->Text));
	//считывание уровней сложности
	if (radioButton1->Checked == true) {
		area.setDifficult(8);
	}
	if (radioButton2->Checked == true) {
		area.setDifficult(4);
	}
	if (radioButton3->Checked == true) {
		area.setDifficult(2);
	}
		actions.setGame(true);
		setClose(false);
		timer1->Interval = 100 * area.getDifficult(); //задача мс для таймеров
		timer4->Interval = 150 * area.getDifficult();
		timer1->Start();
		timer3->Start();
}
	   //та самая штука, которая блокирует все 
	   private: void setClose(bool a) {
		   button1->Enabled = a;
		   button2->Enabled = a;
		   textBox1->Enabled = a;
		   radioButton1->Enabled = a;
		   radioButton2->Enabled = a;
		   radioButton3->Enabled = a;

	   }
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	apple_toxic.createApple();
}
	   //увеличение скорости при каждом съеденном яблоке
	   private: void checkInterval() {
		   if (area.getDifficult() == 8) {
			   if (timer1->Interval > 600) {
				   timer1->Interval -= 20;
			   }
			   if (timer1->Interval < 600) {
				   timer1->Interval = 600;
			   }
		   }
		   if (area.getDifficult() == 4) {
			   if (timer1->Interval > 300) {
				   timer1->Interval -= 20;
			   }
			   if (timer1->Interval < 300) {
				   timer1->Interval = 300;
			   }
		   }
		   if (area.getDifficult() == 2) {
			   if (timer1->Interval > 100) {
				   timer1->Interval -= 20;
			   }
			   if (timer1->Interval < 100) {
				   timer1->Interval = 100;
			   }
		   }

	   }
			  //информация об игре, правила всякие
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Добро пожаловать в игру Злюка-Змеюка!\nДанная игра является усовершенсвенной версией игры 1997 года,\n основные правила вы знаете, но есть дополнительные правила игры:\n -необходимость ввода имени игрока и выбора сложности\n -управление клавишами движения (стрелочки) или WASD\n -разные яблоки (их назначение показано в Напоминалках, внимательно ознакомьтесь перед игрой)\n -Кнопочка Запуск, нажмите при готовности.\nБудьте внимательны, так как есть вредные яблоки или яблоки сюрпризы, которые могут и помочь и навредить, а теперь\n Приятной игры, Злюка-Змеюка! С любовью, ваша Айтен ^_^");
}

};
}
