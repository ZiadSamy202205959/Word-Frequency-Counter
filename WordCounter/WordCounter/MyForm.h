#pragma once
#include <msclr/marshal_cppstd.h>
#include "RedBlackTreeWrapper.h"
#include "RedBlackTree.h"

namespace WordCounter {

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
	private:RedBlackTreeWrapper^ treeWrapper;
	public:
		MyForm(void)
		{
			InitializeComponent();
			treeWrapper = gcnew RedBlackTreeWrapper();
			
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
	
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;





	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ Main;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ SEARCH;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ Logo;
	private: System::Windows::Forms::Panel^ Info;
	private: System::Windows::Forms::Panel^ FullDetails;
	private: System::Windows::Forms::Panel^ How;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;


	private: System::Windows::Forms::Label^ label12;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label9;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Main = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SEARCH = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::Panel());
			this->Info = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->FullDetails = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->How = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Main->SuspendLayout();
			this->SEARCH->SuspendLayout();
			this->Logo->SuspendLayout();
			this->Info->SuspendLayout();
			this->FullDetails->SuspendLayout();
			this->How->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(15, 10);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1089, 605);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"Enter or paste your text";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(-6, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(255, 114);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(-6, 485);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(255, 110);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Full Details";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(946, 621);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 51);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Insert";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Help;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(-6, 593);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(255, 104);
			this->button4->TabIndex = 5;
			this->button4->Text = L"How to Use \?";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(-6, 370);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(255, 120);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Quick Stats";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// Main
			// 
			this->Main->Controls->Add(this->button8);
			this->Main->Controls->Add(this->richTextBox1);
			this->Main->Controls->Add(this->button3);
			this->Main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Main->ForeColor = System::Drawing::Color::White;
			this->Main->Location = System::Drawing::Point(255, 2);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(1118, 695);
			this->Main->TabIndex = 7;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(750, 621);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(158, 51);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Clear";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(-6, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(255, 114);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Home";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// SEARCH
			// 
			this->SEARCH->Controls->Add(this->label9);
			this->SEARCH->Controls->Add(this->label4);
			this->SEARCH->Controls->Add(this->label3);
			this->SEARCH->Controls->Add(this->label2);
			this->SEARCH->Controls->Add(this->label1);
			this->SEARCH->Controls->Add(this->button7);
			this->SEARCH->Controls->Add(this->richTextBox2);
			this->SEARCH->Location = System::Drawing::Point(252, 2);
			this->SEARCH->Name = L"SEARCH";
			this->SEARCH->Size = System::Drawing::Size(1118, 695);
			this->SEARCH->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(219, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(560, 55);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Search for specific word";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(502, 514);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 39);
			this->label4->TabIndex = 5;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(240, 502);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(256, 55);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Repeated:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(502, 419);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 39);
			this->label2->TabIndex = 3;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(339, 407);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 55);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Word:";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Yellow;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(715, 279);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(158, 50);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(179, 279);
			this->richTextBox2->Multiline = false;
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox2->Size = System::Drawing::Size(484, 50);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(46, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 96);
			this->label5->TabIndex = 10;
			this->label5->Text = L"  Word\r\nCounter";
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->Logo->Controls->Add(this->label5);
			this->Logo->Location = System::Drawing::Point(0, 0);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(249, 148);
			this->Logo->TabIndex = 10;
			// 
			// Info
			// 
			this->Info->Controls->Add(this->label16);
			this->Info->Controls->Add(this->label15);
			this->Info->Controls->Add(this->label12);
			this->Info->Controls->Add(this->label8);
			this->Info->Controls->Add(this->label7);
			this->Info->Controls->Add(this->label6);
			this->Info->Location = System::Drawing::Point(255, 5);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(1123, 691);
			this->Info->TabIndex = 11;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(460, 182);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(121, 31);
			this->label16->TabIndex = 9;
			this->label16->Text = L"0 Words";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(460, 98);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(93, 31);
			this->label15->TabIndex = 8;
			this->label15->Text = L"0 Line";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(170, 365);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 31);
			this->label12->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(99, 312);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(656, 31);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Identify and display the most frequently word(s) : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(99, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(257, 31);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Number of Words :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(99, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(244, 31);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Number of Lines :";
			// 
			// FullDetails
			// 
			this->FullDetails->Controls->Add(this->label19);
			this->FullDetails->Controls->Add(this->label17);
			this->FullDetails->Location = System::Drawing::Point(250, 1);
			this->FullDetails->Name = L"FullDetails";
			this->FullDetails->Size = System::Drawing::Size(1127, 694);
			this->FullDetails->TabIndex = 12;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(6, 75);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 25);
			this->label19->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(8, 11);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(490, 42);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Word Frequency Analysis :";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// How
			// 
			this->How->Controls->Add(this->pictureBox1);
			this->How->Location = System::Drawing::Point(253, 0);
			this->How->Name = L"How";
			this->How->Size = System::Drawing::Size(1125, 689);
			this->How->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(5, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1112, 689);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->ClientSize = System::Drawing::Size(1378, 696);
			this->Controls->Add(this->Main);
			this->Controls->Add(this->SEARCH);
			this->Controls->Add(this->FullDetails);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->How);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"WordCounter";
			this->Main->ResumeLayout(false);
			this->SEARCH->ResumeLayout(false);
			this->SEARCH->PerformLayout();
			this->Logo->ResumeLayout(false);
			this->Logo->PerformLayout();
			this->Info->ResumeLayout(false);
			this->Info->PerformLayout();
			this->FullDetails->ResumeLayout(false);
			this->FullDetails->PerformLayout();
			this->How->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		//full det.
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		FullDetails->BringToFront();
		String^ traversalResult = treeWrapper->InorderTraversal();
	    label19->Text = traversalResult;
				

	}
		   //to bring main
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Main->BringToFront();
}


	   //to bring search panel
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SEARCH->BringToFront();
}


	   //clear button
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to clear ?",
			"Confirmation",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			richTextBox1->Clear();
			treeWrapper = gcnew RedBlackTreeWrapper();
		}
		
	
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}




	   //quick info button
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Info->BringToFront();
	//total el kalam
	int words = treeWrapper->GetTotalFrequency();
	label16->Text = words.ToString()+" Words";
	// 3dd el setoor
	int lineCount = richTextBox1->Lines->Length;
	label15->Text = lineCount.ToString() + " Line";
	//freq print
	String^ Cw = treeWrapper->findAndPrintMostCommonWords();
	label12->Text = Cw;


	

}

	   //how to use button
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	How->BringToFront();
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   //search button
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = richTextBox2->Text;
	label2->Text = text;
	bool searchResult = treeWrapper->Search(text);

	if (searchResult) {
		
		int num = treeWrapper->PrintCertainWordFreq(text);
		label4->Text = num.ToString();
	}
	else {
		
		label4->Text ="Not found";
	}

}



	   //insert button
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	treeWrapper = gcnew RedBlackTreeWrapper();
	String^ textFromRichTextBox = richTextBox1->Text;
	treeWrapper->Insert(textFromRichTextBox);
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"Inserted successfully",
		"Confirmation",
		MessageBoxButtons::OK,
		MessageBoxIcon::Question
	);
}




private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
