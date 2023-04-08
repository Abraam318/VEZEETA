#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>

namespace VEZEETA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	
	struct Patient_details
	{
		std::string pname;
		std::string pemail;
		std::string ppass;
		std::string weight;
		std::string height;
		std::string bt;
		std::string gender;

	};

	struct Doctor_details
	{
		std::string dname;
		std::string demail;
		std::string dpass;
		std::string fees;
		std::string location;
		std::string department;

	};

	int index = 0;
	Patient_details  patient[100];
	Doctor_details   doctor[100];

	/// Summary for Login_Sign
	/// </summary>
	public ref class Login_Sign : public System::Windows::Forms::Form
	{
	public:
		Login_Sign(void)
		{


			InitializeComponent();
			this->pictureBox11->Hide();
			this->ppatient->Hide();
			this->pdoctor->Hide();

			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login_Sign()
		{


			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ ppatient;
	protected:

	private: System::Windows::Forms::TextBox^ pname;

	protected:


	private: System::Windows::Forms::Label^ lSign;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ppass;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ pemail;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbt;




	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cgender;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ pweight;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TextBox^ pheight;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ Exit;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ pdoctor;

	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ did;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ demail;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ dpass;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ dname;

	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ fees;


	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ location;


	private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button3;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login_Sign::typeid));
			this->ppatient = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pheight = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pweight = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->cgender = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::PictureBox());
			this->cbt = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pemail = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ppass = (gcnew System::Windows::Forms::TextBox());
			this->lSign = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pdoctor = (gcnew System::Windows::Forms::Panel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->fees = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->location = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->did = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->demail = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dpass = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dname = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->ppatient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pdoctor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->SuspendLayout();
			// 
			// ppatient
			// 
			this->ppatient->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ppatient.BackgroundImage")));
			this->ppatient->Controls->Add(this->label9);
			this->ppatient->Controls->Add(this->button1);
			this->ppatient->Controls->Add(this->pheight);
			this->ppatient->Controls->Add(this->label8);
			this->ppatient->Controls->Add(this->pictureBox7);
			this->ppatient->Controls->Add(this->pweight);
			this->ppatient->Controls->Add(this->label7);
			this->ppatient->Controls->Add(this->pictureBox6);
			this->ppatient->Controls->Add(this->cgender);
			this->ppatient->Controls->Add(this->label6);
			this->ppatient->Controls->Add(this->pictureBox5);
			this->ppatient->Controls->Add(this->pictureBox4);
			this->ppatient->Controls->Add(this->pictureBox3);
			this->ppatient->Controls->Add(this->pictureBox2);
			this->ppatient->Controls->Add(this->Exit);
			this->ppatient->Controls->Add(this->cbt);
			this->ppatient->Controls->Add(this->pictureBox1);
			this->ppatient->Controls->Add(this->panel3);
			this->ppatient->Controls->Add(this->panel2);
			this->ppatient->Controls->Add(this->lSign);
			this->ppatient->Controls->Add(this->panel1);
			this->ppatient->Controls->Add(this->label3);
			this->ppatient->Controls->Add(this->label5);
			this->ppatient->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ppatient->Font = (gcnew System::Drawing::Font(L"Lato", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ppatient->Location = System::Drawing::Point(0, 0);
			this->ppatient->Name = L"ppatient";
			this->ppatient->Size = System::Drawing::Size(1300, 750);
			this->ppatient->TabIndex = 0;
			this->ppatient->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login_Sign::pPatient_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lato", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label9->Location = System::Drawing::Point(171, 678);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 15);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Sign up as a doctor\?";
			this->label9->Click += gcnew System::EventHandler(this, &Login_Sign::label9_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lato", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(134, 615);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 52);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Sign up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login_Sign::button1_Click);
			// 
			// pheight
			// 
			this->pheight->BackColor = System::Drawing::Color::White;
			this->pheight->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pheight->Font = (gcnew System::Drawing::Font(L"Lato", 12));
			this->pheight->Location = System::Drawing::Point(372, 436);
			this->pheight->MaxLength = 3;
			this->pheight->Name = L"pheight";
			this->pheight->Size = System::Drawing::Size(43, 27);
			this->pheight->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lato", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label8->Location = System::Drawing::Point(295, 437);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 23);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Height";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(261, 433);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(32, 30);
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			// 
			// pweight
			// 
			this->pweight->BackColor = System::Drawing::Color::White;
			this->pweight->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pweight->Font = (gcnew System::Drawing::Font(L"Lato", 12));
			this->pweight->Location = System::Drawing::Point(173, 437);
			this->pweight->MaxLength = 3;
			this->pweight->Name = L"pweight";
			this->pweight->Size = System::Drawing::Size(43, 27);
			this->pweight->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lato", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label7->Location = System::Drawing::Point(94, 439);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 23);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Weight";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(56, 435);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(32, 30);
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			// 
			// cgender
			// 
			this->cgender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cgender->FormattingEnabled = true;
			this->cgender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cgender->Location = System::Drawing::Point(265, 558);
			this->cgender->Name = L"cgender";
			this->cgender->Size = System::Drawing::Size(56, 21);
			this->cgender->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lato", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label6->Location = System::Drawing::Point(185, 557);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 23);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Gender";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(143, 553);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(32, 30);
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(137, 496);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 30);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(90, 314);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 30);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(88, 374);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 30);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.BackgroundImage")));
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Location = System::Drawing::Point(1243, 12);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(45, 45);
			this->Exit->TabIndex = 9;
			this->Exit->TabStop = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Login_Sign::Exit_Click);
			// 
			// cbt
			// 
			this->cbt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbt->FormattingEnabled = true;
			this->cbt->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"A+", L"A-", L"B+", L"B-", L"AB+", L"AB-", L"O+", L"O-" });
			this->cbt->Location = System::Drawing::Point(290, 505);
			this->cbt->Name = L"cbt";
			this->cbt->Size = System::Drawing::Size(36, 21);
			this->cbt->TabIndex = 8;
			this->cbt->Tag = L"";
			this->cbt->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Sign::comboBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(88, 253);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 35);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->pemail);
			this->panel3->Location = System::Drawing::Point(134, 314);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(224, 30);
			this->panel3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(1, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 27);
			this->label4->TabIndex = 2;
			this->label4->Text = L"email";
			this->label4->Click += gcnew System::EventHandler(this, &Login_Sign::label4_Click);
			// 
			// pemail
			// 
			this->pemail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->pemail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pemail->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->pemail->Location = System::Drawing::Point(3, 4);
			this->pemail->Name = L"pemail";
			this->pemail->Size = System::Drawing::Size(209, 23);
			this->pemail->TabIndex = 0;
			this->pemail->TextChanged += gcnew System::EventHandler(this, &Login_Sign::pemail_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->ppass);
			this->panel2->Location = System::Drawing::Point(133, 374);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(224, 30);
			this->panel2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(1, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"password";
			this->label2->Click += gcnew System::EventHandler(this, &Login_Sign::label2_Click);
			// 
			// ppass
			// 
			this->ppass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ppass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ppass->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->ppass->Location = System::Drawing::Point(3, 4);
			this->ppass->Name = L"ppass";
			this->ppass->PasswordChar = '*';
			this->ppass->Size = System::Drawing::Size(209, 23);
			this->ppass->TabIndex = 0;
			this->ppass->UseSystemPasswordChar = true;
			this->ppass->TextChanged += gcnew System::EventHandler(this, &Login_Sign::tpass_TextChanged);
			// 
			// lSign
			// 
			this->lSign->AutoSize = true;
			this->lSign->Font = (gcnew System::Drawing::Font(L"Lato", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lSign->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->lSign->Location = System::Drawing::Point(68, 53);
			this->lSign->Name = L"lSign";
			this->lSign->Size = System::Drawing::Size(301, 96);
			this->lSign->TabIndex = 1;
			this->lSign->Text = L"Sign up";
			this->lSign->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lSign->Click += gcnew System::EventHandler(this, &Login_Sign::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pname);
			this->panel1->Location = System::Drawing::Point(133, 256);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(224, 30);
			this->panel1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(3, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"username";
			this->label1->Click += gcnew System::EventHandler(this, &Login_Sign::label1_Click_1);
			// 
			// pname
			// 
			this->pname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->pname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pname->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->pname->Location = System::Drawing::Point(3, 4);
			this->pname->Name = L"pname";
			this->pname->Size = System::Drawing::Size(212, 23);
			this->pname->TabIndex = 0;
			this->pname->TextChanged += gcnew System::EventHandler(this, &Login_Sign::pname_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lato", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label3->Location = System::Drawing::Point(270, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 36);
			this->label3->TabIndex = 6;
			this->label3->Text = L"as a patient";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lato", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label5->Location = System::Drawing::Point(173, 503);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 23);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Blood type";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pdoctor
			// 
			this->pdoctor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pdoctor.BackgroundImage")));
			this->pdoctor->Controls->Add(this->pictureBox16);
			this->pdoctor->Controls->Add(this->label19);
			this->pdoctor->Controls->Add(this->label18);
			this->pdoctor->Controls->Add(this->button2);
			this->pdoctor->Controls->Add(this->comboBox1);
			this->pdoctor->Controls->Add(this->pictureBox14);
			this->pdoctor->Controls->Add(this->pictureBox13);
			this->pdoctor->Controls->Add(this->panel10);
			this->pdoctor->Controls->Add(this->pictureBox12);
			this->pdoctor->Controls->Add(this->panel9);
			this->pdoctor->Controls->Add(this->pictureBox11);
			this->pdoctor->Controls->Add(this->panel8);
			this->pdoctor->Controls->Add(this->label12);
			this->pdoctor->Controls->Add(this->label14);
			this->pdoctor->Controls->Add(this->pictureBox8);
			this->pdoctor->Controls->Add(this->pictureBox9);
			this->pdoctor->Controls->Add(this->pictureBox10);
			this->pdoctor->Controls->Add(this->panel5);
			this->pdoctor->Controls->Add(this->panel6);
			this->pdoctor->Controls->Add(this->panel7);
			this->pdoctor->Controls->Add(this->pictureBox15);
			this->pdoctor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pdoctor->Location = System::Drawing::Point(0, 0);
			this->pdoctor->Name = L"pdoctor";
			this->pdoctor->Size = System::Drawing::Size(1300, 750);
			this->pdoctor->TabIndex = 1;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->Location = System::Drawing::Point(59, 546);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(32, 32);
			this->pictureBox16->TabIndex = 32;
			this->pictureBox16->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Lato", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label19->Location = System::Drawing::Point(100, 551);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(140, 27);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Department";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label18->Font = (gcnew System::Drawing::Font(L"Lato", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label18->Location = System::Drawing::Point(211, 678);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(115, 15);
			this->label18->TabIndex = 30;
			this->label18->Text = L"Sign up as a patient\?";
			this->label18->Click += gcnew System::EventHandler(this, &Login_Sign::label18_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lato", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(174, 615);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 52);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login_Sign::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Children specialist", L"Dermatology", L"Dentist",
					L"Diagnostic radiology", L"Ear, Nose, and Throat ", L"Medical genetics", L"Microbiology", L"Neurology", L"Surgery", L"Therapist"
			});
			this->comboBox1->Location = System::Drawing::Point(242, 552);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(224, 27);
			this->comboBox1->TabIndex = 28;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox14->Location = System::Drawing::Point(1243, 9);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(45, 45);
			this->pictureBox14->TabIndex = 26;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &Login_Sign::pictureBox14_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->Location = System::Drawing::Point(348, 493);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(32, 32);
			this->pictureBox13->TabIndex = 25;
			this->pictureBox13->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel10->Controls->Add(this->label17);
			this->panel10->Controls->Add(this->fees);
			this->panel10->Location = System::Drawing::Point(387, 493);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(79, 30);
			this->panel10->TabIndex = 24;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label17->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label17->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label17->ForeColor = System::Drawing::Color::Gray;
			this->label17->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label17->Location = System::Drawing::Point(0, 2);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 27);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Fees";
			this->label17->Click += gcnew System::EventHandler(this, &Login_Sign::label17_Click);
			// 
			// fees
			// 
			this->fees->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->fees->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fees->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->fees->Location = System::Drawing::Point(2, 4);
			this->fees->Name = L"fees";
			this->fees->Size = System::Drawing::Size(77, 23);
			this->fees->TabIndex = 0;
			this->fees->TextChanged += gcnew System::EventHandler(this, &Login_Sign::dfees_TextChanged);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->Location = System::Drawing::Point(59, 493);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(32, 32);
			this->pictureBox12->TabIndex = 23;
			this->pictureBox12->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel9->Controls->Add(this->label16);
			this->panel9->Controls->Add(this->location);
			this->panel9->Location = System::Drawing::Point(104, 493);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(224, 30);
			this->panel9->TabIndex = 22;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label16->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label16->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label16->ForeColor = System::Drawing::Color::Gray;
			this->label16->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label16->Location = System::Drawing::Point(0, 2);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(144, 27);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Your Location";
			this->label16->Click += gcnew System::EventHandler(this, &Login_Sign::label16_Click);
			// 
			// location
			// 
			this->location->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->location->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->location->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->location->Location = System::Drawing::Point(2, 4);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(209, 23);
			this->location->TabIndex = 0;
			this->location->TextChanged += gcnew System::EventHandler(this, &Login_Sign::dlocation_TextChanged);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->Location = System::Drawing::Point(115, 430);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(32, 32);
			this->pictureBox11->TabIndex = 21;
			this->pictureBox11->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->did);
			this->panel8->Location = System::Drawing::Point(160, 430);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(224, 30);
			this->panel8->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label15->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label15->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label15->ForeColor = System::Drawing::Color::Gray;
			this->label15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label15->Location = System::Drawing::Point(1, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(223, 27);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Doctor ID verification";
			this->label15->Click += gcnew System::EventHandler(this, &Login_Sign::label15_Click);
			// 
			// did
			// 
			this->did->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->did->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->did->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->did->Location = System::Drawing::Point(2, 4);
			this->did->Name = L"did";
			this->did->PasswordChar = '*';
			this->did->Size = System::Drawing::Size(209, 23);
			this->did->TabIndex = 0;
			this->did->UseSystemPasswordChar = true;
			this->did->TextChanged += gcnew System::EventHandler(this, &Login_Sign::textBox4_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Lato", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label12->Location = System::Drawing::Point(95, 53);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(301, 96);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Sign up";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Lato", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label14->Location = System::Drawing::Point(317, 137);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(172, 36);
			this->label14->TabIndex = 16;
			this->label14->Text = L"as a doctor";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(117, 314);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(32, 30);
			this->pictureBox8->TabIndex = 19;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Location = System::Drawing::Point(115, 374);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(32, 30);
			this->pictureBox9->TabIndex = 18;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->Location = System::Drawing::Point(115, 253);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(35, 35);
			this->pictureBox10->TabIndex = 17;
			this->pictureBox10->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->demail);
			this->panel5->Location = System::Drawing::Point(161, 314);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(224, 30);
			this->panel5->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label10->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label10->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label10->ForeColor = System::Drawing::Color::Gray;
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Location = System::Drawing::Point(1, 3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 27);
			this->label10->TabIndex = 2;
			this->label10->Text = L"email";
			this->label10->Click += gcnew System::EventHandler(this, &Login_Sign::label10_Click);
			// 
			// demail
			// 
			this->demail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->demail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->demail->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->demail->Location = System::Drawing::Point(3, 4);
			this->demail->Name = L"demail";
			this->demail->Size = System::Drawing::Size(209, 23);
			this->demail->TabIndex = 0;
			this->demail->TextChanged += gcnew System::EventHandler(this, &Login_Sign::demail_TextChanged);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->dpass);
			this->panel6->Location = System::Drawing::Point(160, 374);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(224, 30);
			this->panel6->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label11->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label11->ForeColor = System::Drawing::Color::Gray;
			this->label11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label11->Location = System::Drawing::Point(1, 2);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 27);
			this->label11->TabIndex = 2;
			this->label11->Text = L"password";
			this->label11->Click += gcnew System::EventHandler(this, &Login_Sign::label11_Click);
			// 
			// dpass
			// 
			this->dpass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->dpass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dpass->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->dpass->Location = System::Drawing::Point(3, 4);
			this->dpass->Name = L"dpass";
			this->dpass->PasswordChar = '*';
			this->dpass->Size = System::Drawing::Size(209, 23);
			this->dpass->TabIndex = 0;
			this->dpass->UseSystemPasswordChar = true;
			this->dpass->TextChanged += gcnew System::EventHandler(this, &Login_Sign::dpass_TextChanged);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->dname);
			this->panel7->Location = System::Drawing::Point(160, 256);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(224, 30);
			this->panel7->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label13->Font = (gcnew System::Drawing::Font(L"Lato", 16));
			this->label13->ForeColor = System::Drawing::Color::Gray;
			this->label13->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label13->Location = System::Drawing::Point(3, 2);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(107, 27);
			this->label13->TabIndex = 2;
			this->label13->Text = L"username";
			this->label13->Click += gcnew System::EventHandler(this, &Login_Sign::label13_Click);
			// 
			// dname
			// 
			this->dname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->dname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dname->Font = (gcnew System::Drawing::Font(L"Lato", 14));
			this->dname->Location = System::Drawing::Point(3, 4);
			this->dname->Name = L"dname";
			this->dname->Size = System::Drawing::Size(212, 23);
			this->dname->TabIndex = 0;
			this->dname->TextChanged += gcnew System::EventHandler(this, &Login_Sign::dname_TextChanged);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->Location = System::Drawing::Point(115, 430);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(32, 32);
			this->pictureBox15->TabIndex = 27;
			this->pictureBox15->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label20->Font = (gcnew System::Drawing::Font(L"Lato", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label20->Location = System::Drawing::Point(192, 652);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(130, 15);
			this->label20->TabIndex = 26;
			this->label20->Text = L"First time\? Sign un now";
			this->label20->Click += gcnew System::EventHandler(this, &Login_Sign::label20_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lato", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(155, 590);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 52);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Log in";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Login_Sign
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1300, 750);
			this->Controls->Add(this->pdoctor);
			this->Controls->Add(this->ppatient);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login_Sign";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login_Sign";
			this->Load += gcnew System::EventHandler(this, &Login_Sign::Login_Sign_Load);
			this->ppatient->ResumeLayout(false);
			this->ppatient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pdoctor->ResumeLayout(false);
			this->pdoctor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Sign_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->label1->Hide();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label2->Hide();
	this->ppass->Focus();

}
private: System::Void tpass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label2->Hide();
}

private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void pPatient_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->label4->Hide();
	this->pemail->Focus();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pname->Text == "" || ppass->Text == "" || pemail->Text == "" || pweight->Text == "" || pheight->Text == "" || cbt->Text == "" || cgender->Text == "") {
		MessageBox::Show("Please fill in all the spaces", "Error");
	}
	else {
		patient[index].pname = msclr::interop::marshal_as<std::string>(pname->Text);
		patient[index].pemail = msclr::interop::marshal_as<std::string>(pemail->Text);
		patient[index].ppass = msclr::interop::marshal_as<std::string>(ppass->Text);
		patient[index].weight = msclr::interop::marshal_as<std::string>(pweight->Text);
		patient[index].height = msclr::interop::marshal_as<std::string>(pheight->Text);
		patient[index].bt = msclr::interop::marshal_as<std::string>(cbt->Text);
		patient[index].gender = msclr::interop::marshal_as<std::string>(cgender->Text);
	}
	

}
private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	if (did->Text == "1234") {
		this->pictureBox11->Show();
	}
	else {
		this->pictureBox11->Hide();

	}
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label15->Hide();
	this->did->Focus();
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label10->Hide();
	this->demail->Focus();

}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label13->Hide();
	this->dname->Focus();

}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label16->Hide();
	this->location->Focus();

}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {

	this->label17->Hide();
	this->fees->Focus();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {

	this->label11->Hide();
	this->dpass->Focus();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (dname->Text == "" || dpass->Text == "" || demail->Text == "" || location->Text == "" || fees->Text == "" || comboBox1->Text == "") {
		MessageBox::Show("Please fill in all the spaces", "Error");
	}
	else {
		if (did->Text == "1234") {

			doctor[index].dname = msclr::interop::marshal_as<std::string>(dname->Text);
			doctor[index].demail = msclr::interop::marshal_as<std::string>(demail->Text);
			doctor[index].dpass = msclr::interop::marshal_as<std::string>(dpass->Text);
			doctor[index].location = msclr::interop::marshal_as<std::string>(location->Text);
			doctor[index].fees = msclr::interop::marshal_as<std::string>(fees->Text);
			doctor[index].department = msclr::interop::marshal_as<std::string>(comboBox1->Text);


			String^ sd = msclr::interop::marshal_as<String^>(doctor[index].department);

			//MessageBox::Show(sd, "reminder");



			MessageBox::Show("Please check your account profile\n to set your appointments time", "reminder");

		}

		else {
			MessageBox::Show("Doctor ID is incorrect", "Eroor");

		}
	}
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {

	this->ppatient->BringToFront();

}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pdoctor->BringToFront();

}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ppatient->Show();
	this->pdoctor->Show();

}
private: System::Void demail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label10->Hide();
}
private: System::Void dpass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label11->Hide();

}
private: System::Void dname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label13->Hide();

}
private: System::Void dlocation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label16->Hide();

}
private: System::Void dfees_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label17->Hide();

}
private: System::Void pname_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	this->label1->Hide();

}
private: System::Void pemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label4->Hide();

}
};
}
	