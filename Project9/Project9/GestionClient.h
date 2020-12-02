#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;


namespace Project9 {

	/// <summary>
	/// Summary for GestionClient
	/// </summary>
	public ref class GestionClient : public System::Windows::Forms::UserControl
	{
	public:
		GestionClient(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	public:
		System::String^ cnxstr;
		System::String^ GetNom() {
			return textBox2->Text;
		}
		System::String^ GetPrenom() {
			return textBox3->Text;
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;




		   
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GestionClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ AjoutPers;
	private: System::Windows::Forms::Button^ AffichPers;






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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->AjoutPers = (gcnew System::Windows::Forms::Button());
			this->AffichPers = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->AjoutPers);
			this->panel1->Controls->Add(this->AffichPers);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1234, 130);
			this->panel1->TabIndex = 2;
			// 
			// AjoutPers
			// 
			this->AjoutPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->AjoutPers->FlatAppearance->BorderSize = 0;
			this->AjoutPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AjoutPers->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AjoutPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->AjoutPers->Location = System::Drawing::Point(617, 0);
			this->AjoutPers->Name = L"AjoutPers";
			this->AjoutPers->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->AjoutPers->Size = System::Drawing::Size(617, 130);
			this->AjoutPers->TabIndex = 1;
			this->AjoutPers->Text = L"Ajouter un client";
			this->AjoutPers->UseVisualStyleBackColor = false;
			this->AjoutPers->Click += gcnew System::EventHandler(this, &GestionClient::AjoutPers_Click);
			// 
			// AffichPers
			// 
			this->AffichPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->AffichPers->FlatAppearance->BorderSize = 0;
			this->AffichPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AffichPers->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AffichPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->AffichPers->Location = System::Drawing::Point(0, 0);
			this->AffichPers->Name = L"AffichPers";
			this->AffichPers->Size = System::Drawing::Size(617, 130);
			this->AffichPers->TabIndex = 0;
			this->AffichPers->Text = L"Afficher tous les clients";
			this->AffichPers->UseVisualStyleBackColor = false;
			this->AffichPers->Click += gcnew System::EventHandler(this, &GestionClient::AffichPers_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->textBox1->Location = System::Drawing::Point(240, 189);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GestionClient::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label1->Location = System::Drawing::Point(54, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 18);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Recherche par identifiant";
			this->label1->Click += gcnew System::EventHandler(this, &GestionClient::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button1->Location = System::Drawing::Point(391, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 26);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Rechercher";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GestionClient::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label2->Location = System::Drawing::Point(288, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"ou";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label3->Location = System::Drawing::Point(94, 281);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 18);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Recherche par Nom";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->textBox2->Location = System::Drawing::Point(240, 278);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 26);
			this->textBox2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(173, 331);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Prénom";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->textBox3->Location = System::Drawing::Point(240, 328);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 26);
			this->textBox3->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button2->Location = System::Drawing::Point(391, 328);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 26);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Rechercher";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GestionClient::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(604, 151);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(611, 486);
			this->panel2->TabIndex = 15;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(605, 371);
			this->dataGridView1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(210, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(191, 18);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Erreur: identifiant invalide.";
			this->label5->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Whitney Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::Gray;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(240, 378);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(122, 26);
			this->dateTimePicker1->TabIndex = 17;
			this->dateTimePicker1->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label6->Location = System::Drawing::Point(103, 384);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 18);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Date de naissance";
			this->label6->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button3->Location = System::Drawing::Point(176, 569);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(239, 78);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Retour";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &GestionClient::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button4->Location = System::Drawing::Point(0, 373);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(306, 113);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Modifier client";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button5->Location = System::Drawing::Point(306, 373);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(306, 113);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Supprimer client";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &GestionClient::button5_Click);
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"GestionClient";
			this->Size = System::Drawing::Size(1234, 650);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InsertDataGrid(System::String^ req) {
		MySqlDataAdapter^ adapt;
		MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
		adapt = gcnew MySqlDataAdapter(req, cnxx);
		MySqlCommandBuilder^ commandBuilder;
		commandBuilder = gcnew MySqlCommandBuilder(adapt);
		System::Data::DataTable^ table;
		table = gcnew Data::DataTable();
		adapt->Fill(table);
		dataGridView1->DataSource = table;
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::String^ req = "SELECT ID_Client, Nom_Client AS Nom, Prenom_Client AS Prenom, Date_Naissance FROM Projet.Client WHERE ID_Client =" + textBox1->Text + ";";
	try {
		InsertDataGrid(req);
		textBox1->Text = "";
		if (this->label5->Visible) {
			this->label5->Visible = false;
		}
	}
	catch (Exception^ ex) {
		this->label5->Visible = true;
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ req = "SELECT ID_Client, Nom_Client AS Nom, Prenom_Client AS Prenom, Date_Naissance FROM Projet.Client WHERE Nom_Client LIKE '" + textBox2->Text + "%' AND Prenom_Client LIKE '" + textBox3->Text + "%';";
	InsertDataGrid(req);
	textBox2->Text = "";
	textBox3->Text = "";
}
private: System::Void AffichPers_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ req = "SELECT ID_Client, Nom_Client AS Nom, Prenom_Client AS Prenom, Date_Naissance FROM Projet.Client;";
	InsertDataGrid(req);
}
private: System::Void AjoutPers_Click(System::Object^ sender, System::EventArgs^ e) {
	// Retrait des labels
	this->label1->Visible = false;
	this->label2->Visible = false;
	this->label5->Visible = false;
	// Puis des boutons inutiles
	this->textBox1->Visible = false;
	this->button1->Visible = false;
	// Modif des noms
	this->label3->Text = "Nom";
	this->button2->Text = "Ajouter";
	this->label3->Location = System::Drawing::Point(173, 281);
	// Ajout case de date 
	this->label6->Visible = true;
	this->dateTimePicker1->Visible = true;
	this->button3->Visible = true;
	//Déplacement case Ajouter
	this->button2->Location = System::Drawing::Point(391, 378);
	this->button2->Click -= gcnew System::EventHandler(this, &GestionClient::button2_Click);
	this->button2->Click += gcnew System::EventHandler(this, &GestionClient::button2_Click2);
}
	private: System::Void button2_Click2(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Query
			System::String^ theDate = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
			System::String^ req = "INSERT INTO Projet.Client (Nom_Client, Prenom_Client, Date_Naissance) VALUES ('"+ this->textBox2->Text +"', '"+this->textBox3->Text+"', '" + theDate + "');";
			// Connexion SQL

			MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
			MySqlCommand^ cmd = gcnew MySqlCommand();

			cmd->Connection = cnxx;
			cmd->CommandText = req;

			MySqlDataReader^ Reader;
			cnxx->Open();
			Reader = cmd->ExecuteReader();

			while (Reader->Read())
			{
			};
			Reader->Close();
			System::String^ requ = "SELECT ID_Client, Nom_Client AS Nom, Prenom_Client AS Prenom, Date_Naissance FROM Projet.Client;";
			InsertDataGrid(requ);

			// On remet tout comme avant
			retour();

		}
		catch (Exception ^ ex) {
			MessageBox::Show("aoi");
		}
	}
		   void retour() {
			   this->label1->Visible = true;
			   this->label2->Visible = true;
			   this->textBox1->Visible = true;
			   this->button1->Visible = true;
			   this->button3->Visible = false;
			   this->label3->Text = L"Recherche par Nom";
			   this->label3->Location = System::Drawing::Point(94, 281);
			   this->label6->Visible = false;
			   this->dateTimePicker1->Visible = false;
			   this->button2->Location = System::Drawing::Point(391, 328);
			   this->button2->Click -= gcnew System::EventHandler(this, &GestionClient::button2_Click2);
			   this->button2->Click += gcnew System::EventHandler(this, &GestionClient::button2_Click);
			   textBox2->Text = "";
			   textBox3->Text = "";
			   this->button2->Text = "Rechercher";
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	retour();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1::Rows->RemoveAt(item.Index);
}
};
}
