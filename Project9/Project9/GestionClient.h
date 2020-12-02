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

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::CheckBox^ checkBox3;





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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			this->textBox1->Location = System::Drawing::Point(240, 165);
			this->textBox1->MaxLength = 11;
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
			this->label1->Location = System::Drawing::Point(54, 168);
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
			this->button1->Location = System::Drawing::Point(391, 165);
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
			this->label2->Location = System::Drawing::Point(288, 215);
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
			this->label3->Location = System::Drawing::Point(94, 248);
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
			this->textBox2->Location = System::Drawing::Point(240, 245);
			this->textBox2->MaxLength = 20;
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
			this->label4->Location = System::Drawing::Point(173, 279);
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
			this->textBox3->Location = System::Drawing::Point(240, 277);
			this->textBox3->MaxLength = 20;
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
			this->button2->Location = System::Drawing::Point(391, 277);
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
			this->panel2->Controls->Add(this->dataGridView2);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(617, 137);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(611, 510);
			this->panel2->TabIndex = 15;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->Location = System::Drawing::Point(0, 251);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(612, 189);
			this->dataGridView2->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label8->Location = System::Drawing::Point(3, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 18);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Adresse(s)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label7->Location = System::Drawing::Point(3, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 18);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Client(s)";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button5->Enabled = false;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button5->Location = System::Drawing::Point(305, 443);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(306, 68);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Supprimer client";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &GestionClient::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button4->Enabled = false;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button4->Location = System::Drawing::Point(0, 443);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(306, 68);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Modifier client";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GestionClient::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Location = System::Drawing::Point(-1, 28);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(612, 198);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionClient::dataGridView1_CellClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(210, 197);
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
			this->dateTimePicker1->CustomFormat = L"MM/dd/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dateTimePicker1->Location = System::Drawing::Point(240, 309);
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
			this->label6->Location = System::Drawing::Point(103, 315);
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
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->textBox4->Location = System::Drawing::Point(240, 341);
			this->textBox4->MaxLength = 40;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 26);
			this->textBox4->TabIndex = 21;
			this->textBox4->Visible = false;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &GestionClient::textBox4_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label9->Location = System::Drawing::Point(170, 343);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 18);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Adresse";
			this->label9->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->textBox5->Location = System::Drawing::Point(240, 373);
			this->textBox5->MaxLength = 10;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(122, 26);
			this->textBox5->TabIndex = 23;
			this->textBox5->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label10->Location = System::Drawing::Point(149, 375);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 18);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Code Postal";
			this->label10->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->textBox6->Location = System::Drawing::Point(240, 405);
			this->textBox6->MaxLength = 20;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(122, 26);
			this->textBox6->TabIndex = 25;
			this->textBox6->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label11->Location = System::Drawing::Point(195, 407);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 18);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Ville";
			this->label11->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->checkBox1->Location = System::Drawing::Point(240, 476);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(106, 22);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"Facturation";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->checkBox2->Location = System::Drawing::Point(240, 504);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(89, 22);
			this->checkBox2->TabIndex = 27;
			this->checkBox2->Text = L"Livraison";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label12->Location = System::Drawing::Point(122, 476);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(112, 18);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Type d\'adresse";
			this->label12->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->textBox7->Location = System::Drawing::Point(240, 437);
			this->textBox7->MaxLength = 20;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(122, 26);
			this->textBox7->TabIndex = 30;
			this->textBox7->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label13->Location = System::Drawing::Point(194, 439);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 18);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Pays";
			this->label13->Visible = false;
			this->label13->Click += gcnew System::EventHandler(this, &GestionClient::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label14->Location = System::Drawing::Point(99, 533);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(135, 18);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Nouvelle adresse \?";
			this->label14->Visible = false;
			this->label14->Click += gcnew System::EventHandler(this, &GestionClient::label14_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->checkBox3->Location = System::Drawing::Point(240, 532);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(52, 22);
			this->checkBox3->TabIndex = 31;
			this->checkBox3->Text = L"Oui";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &GestionClient::checkBox3_CheckedChanged);
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label14);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
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
			this->Load += gcnew System::EventHandler(this, &GestionClient::GestionClient_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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
		dataGridView1->Columns[3]->DefaultCellStyle->Format = "MM/dd/yyyy";
	}


		   private: System::Void AdresseDataGrid(System::String^ req) {
			   MySqlDataAdapter^ adapt;
			   MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
			   adapt = gcnew MySqlDataAdapter(req, cnxx);
			   MySqlCommandBuilder^ commandBuilder;
			   commandBuilder = gcnew MySqlCommandBuilder(adapt);
			   System::Data::DataTable^ table;
			   table = gcnew Data::DataTable();
			   adapt->Fill(table);
			   dataGridView2->DataSource = table;
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
	this->label3->Location = System::Drawing::Point(194, 248);
	// Ajout cases manquantes
	this->label6->Visible = true;
	this->dateTimePicker1->Visible = true;
	this->button3->Visible = true;
	this->label9->Visible = true;
	this->label10->Visible = true;
	this->label11->Visible = true;
	this->label12->Visible = true;
	this->textBox4->Visible = true;
	this->textBox5->Visible = true;
	this->textBox6->Visible = true;
	this->checkBox1->Visible = true;
	this->checkBox2->Visible = true;
	this->label13->Visible = true;
	this->textBox7->Visible = true;
	//Déplacement case Ajouter
	this->button2->Location = System::Drawing::Point(391, 500);
	this->button2->Click -= gcnew System::EventHandler(this, &GestionClient::button2_Click);
	this->button2->Click += gcnew System::EventHandler(this, &GestionClient::button2_Click2);
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->AffichPers->Enabled = false;
}
	   // INSERTION DUN NOUVEAU CLIENT
	private: System::Void button2_Click2(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (this->textBox2->Text != "" && this->textBox3->Text != "" && this->textBox4->Text != "" && this->textBox5->Text != "" && this->textBox6->Text != "" && this->textBox7->Text != "") {
				//Query
				System::String^ theDate = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
				// Connexion SQL

				MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
				MySqlCommand^ cmd = gcnew MySqlCommand();
				MySqlDataReader^ Reader;
				cmd->Connection = cnxx;

				if (this->checkBox1->Checked && this->checkBox2->Checked) {
					cmd->CommandText = "START TRANSACTION; INSERT INTO Repertoire_Adresse (Rue, Code_Postal, Ville,Pays) VALUES ('" + this->textBox4->Text + "', '" + this->textBox5->Text + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "'); INSERT INTO Client (Nom_Client, Prenom_Client, Date_Naissance) VALUES ('" + this->textBox2->Text + "', '" + this->textBox3->Text + "', '" + theDate + "'); INSERT INTO Definition_Lieu (ID_Client,ID_Adresse,Type) SELECT MAX(ID_Client), MAX(ID_Adresse), 'F' FROM Client,Repertoire_Adresse; INSERT INTO Definition_Lieu (ID_Client,ID_Adresse,Type) SELECT MAX(ID_Client), MAX(ID_Adresse), 'L' FROM Client,Repertoire_Adresse; COMMIT;";
					cnxx->Open();
					Reader = cmd->ExecuteReader();
					while (Reader->Read())
					{
					};
					Reader->Close();
				}
				else if (this->checkBox1->Checked) {
					cmd->CommandText = "START TRANSACTION; INSERT INTO Repertoire_Adresse (Rue, Code_Postal, Ville,Pays) VALUES ('" + this->textBox4->Text + "', '" + this->textBox5->Text + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "'); INSERT INTO Client (Nom_Client, Prenom_Client, Date_Naissance) VALUES ('" + this->textBox2->Text + "', '" + this->textBox3->Text + "', '" + theDate + "'); INSERT INTO Definition_Lieu (ID_Client,ID_Adresse,Type) SELECT MAX(ID_Client), MAX(ID_Adresse), 'F' FROM Client,Repertoire_Adresse; COMMIT;";
					cnxx->Open();
					Reader = cmd->ExecuteReader();
					while (Reader->Read())
					{
					};
					Reader->Close();
				}
				else if (this->checkBox2->Checked) {
					cmd->CommandText = "START TRANSACTION; INSERT INTO Repertoire_Adresse (Rue, Code_Postal, Ville,Pays) VALUES ('" + this->textBox4->Text + "', '" + this->textBox5->Text + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "'); INSERT INTO Client (Nom_Client, Prenom_Client, Date_Naissance) VALUES ('" + this->textBox2->Text + "', '" + this->textBox3->Text + "', '" + theDate + "'); INSERT INTO Definition_Lieu (ID_Client,ID_Adresse,Type) SELECT MAX(ID_Client), MAX(ID_Adresse), 'L' FROM Client,Repertoire_Adresse; COMMIT;";
					cnxx->Open();
					Reader = cmd->ExecuteReader();
					while (Reader->Read())
					{
					};
					Reader->Close();
				}
				if (this->checkBox1->Checked || this->checkBox2->Checked) {
					System::String^ requ = "SELECT ID_Client, Nom_Client AS Nom, Prenom_Client AS Prenom, Date_Naissance FROM Projet.Client;";
					InsertDataGrid(requ);

					// On remet tout comme avant
					retour();
				}
				else {
					MessageBox::Show("Merci de sélectionner au moins un type d'Adresse.");
				}
			}
			else {
				MessageBox::Show("Erreur : Merci de remplir tous les champs obligatoires.");
			}
		}
		catch (Exception ^ ex) {
			MessageBox::Show("Erreur innatendue. Contactez votre adminsitrateur système.");
		}
	}
		   // REMISE EN PLACE DES BOUTONS 
		   void retour() {
			   this->label1->Visible = true;
			   this->label2->Visible = true;
			   this->textBox1->Visible = true;
			   this->button1->Visible = true;
			   this->button3->Visible = false;
			   this->label9->Visible = false;
			   this->label10->Visible = false;
			   this->label11->Visible = false;
			   this->label12->Visible = false;
			   this->textBox4->Visible = false;
			   this->textBox5->Visible = false;
			   this->textBox6->Visible = false;
			   this->checkBox1->Visible = false;
			   this->checkBox2->Visible = false;
			   this->label13->Visible = false;
			   this->textBox7->Visible = false;
			   this->label3->Text = L"Recherche par Nom";
			   this->label3->Location = System::Drawing::Point(94, 248);
			   this->label6->Visible = false;
			   this->dateTimePicker1->Visible = false;
			   this->button2->Location = System::Drawing::Point(391, 277);
			   try {
				   this->button2->Click -= gcnew System::EventHandler(this, &GestionClient::button2_Click2);
				   this->label14->Visible = false;
				   this->checkBox3->Visible = false;
			   }
			   catch (Exception^ ex) {
				   this->button2->Click -= gcnew System::EventHandler(this, &GestionClient::button2_Click3);
			   }
			   
			   this->button2->Click += gcnew System::EventHandler(this, &GestionClient::button2_Click);
			   textBox2->Text = "";
			   textBox3->Text = "";
			   textBox4->Text = "";
			   textBox5->Text = "";
			   textBox6->Text = "";
			   textBox7->Text = "";
			   this->checkBox1->Checked = false;
			   this->checkBox2->Checked = false;
			   this->checkBox3->Checked = false;
			   this->button2->Text = "Rechercher";

			   if (this->AjoutPers->Enabled == false) {
				   this->AjoutPers->Enabled = true;
				   this->button5->Enabled = true;
			   }
			   else {
				   this->AffichPers->Enabled = true;
			   }
	}
		   // ENVOI MISE A JOUR D'UN CLIENT
		   System::Void button2_Click3(System::Object^ sender, System::EventArgs^ e) {
			   DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
			   DataGridViewRow^ ligneAdresse = dataGridView2->SelectedRows[0];
			   try {
				   if (this->textBox2->Text != "" && this->textBox3->Text != "" && this->textBox4->Text != "" && this->textBox5->Text != "" && this->textBox6->Text != "" && this->textBox7->Text != "") {
					   if (this->checkBox3->Checked) {
						   //Query
						   System::String^ theDate = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
						   // Connexion SQL

						   MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
						   MySqlCommand^ cmd = gcnew MySqlCommand();
						   MySqlDataReader^ Reader;
						   cmd->Connection = cnxx;

						   if (this->checkBox1->Checked && this->checkBox2->Checked) {
							   cmd->CommandText = "START TRANSACTION; INSERT INTO Repertoire_Adresse (Rue, Code_Postal, Ville,Pays) VALUES ('" + this->textBox4->Text + "', '" + this->textBox5->Text + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "');  UPDATE Client SET Nom_Client = '" + this->textBox2->Text + "', Prenom_Client = '" + this->textBox3->Text + "', Date_Naissance = '" + theDate + "' WHERE ID_Client = '" + ligne->Cells["ID_Client"]->Value->ToString() + "'; INSERT INTO Definition_Lieu (ID_Client,ID_Adresse,Type) SELECT '" + ligne->Cells["ID_Client"]->Value->ToString() + "', MAX(ID_Adresse), 'F' FROM Repertoire_Adresse; INSERT INTO Definition_Lieu (ID_Client,ID_Adresse,Type) SELECT '" + ligne->Cells["ID_Client"]->Value->ToString() + "', MAX(ID_Adresse), 'L' FROM Repertoire_Adresse; COMMIT;";
							   cnxx->Open();
							   Reader = cmd->ExecuteReader();
							   while (Reader->Read())
							   {
							   };
							   Reader->Close();
						   }
						   else if (this->checkBox1->Checked) {
							   cmd->CommandText = "START TRANSACTION; INSERT INTO Repertoire_Adresse (Rue, Code_Postal, Ville,Pays) VALUES ('" + this->textBox4->Text + "', '" + this->textBox5->Text + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "'); UPDATE Client SET Nom_Client = '" + this->textBox2->Text + "', Prenom_Client = '" + this->textBox3->Text + "', Date_Naissance = '" + theDate + "' WHERE ID_Client = '" + ligne->Cells["ID_Client"]->Value->ToString() + "'; INSERT INTO Definition_Lieu (ID_Client,ID_Adresse,Type) SELECT '" + ligne->Cells["ID_Client"]->Value->ToString() + "', MAX(ID_Adresse), 'F' FROM Repertoire_Adresse; COMMIT;";
							   cnxx->Open();
							   Reader = cmd->ExecuteReader();
							   while (Reader->Read())
							   {
							   };
							   Reader->Close();
						   }
						   else if (this->checkBox2->Checked) {
							   cmd->CommandText = "START TRANSACTION; INSERT INTO Repertoire_Adresse (Rue, Code_Postal, Ville,Pays) VALUES ('" + this->textBox4->Text + "', '" + this->textBox5->Text + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "'); UPDATE Client SET Nom_Client = '" + this->textBox2->Text + "', Prenom_Client = '" + this->textBox3->Text + "', Date_Naissance = '" + theDate + "' WHERE ID_Client = '" + ligne->Cells["ID_Client"]->Value->ToString() + "'; INSERT INTO Definition_Lieu (ID_Client,ID_Adresse,Type) SELECT '" + ligne->Cells["ID_Client"]->Value->ToString() + "', MAX(ID_Adresse), 'L' FROM Repertoire_Adresse; COMMIT;";
							   cnxx->Open();
							   Reader = cmd->ExecuteReader();
							   while (Reader->Read())
							   {
							   };
							   Reader->Close();
						   }
						   if (this->checkBox1->Checked || this->checkBox2->Checked) {
							   System::String^ requ = "SELECT ID_Client, Nom_Client AS Nom, Prenom_Client AS Prenom, Date_Naissance FROM Projet.Client;";
							   InsertDataGrid(requ);

							   // On remet tout comme avant
							   retour();
						   }
						   else {
							   MessageBox::Show("Merci de sélectionner au moins un type d'Adresse.");
						   }
					   }
					   else {
						   //Query
						   System::String^ theDate = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
						   // Connexion SQL

						   MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
						   MySqlCommand^ cmd = gcnew MySqlCommand();
						   MySqlDataReader^ Reader;
						   cmd->Connection = cnxx;

						   if (this->checkBox1->Checked && this->checkBox2->Checked) {
							   MessageBox::Show("Merci de ne cocher qu'un type d'adresse.");
						   }
						   else if (this->checkBox1->Checked) {
							   cmd->CommandText = "START TRANSACTION;UPDATE Repertoire_Adresse SET Rue = '" + this->textBox4->Text + "', Code_Postal = '" + this->textBox5->Text + "', Ville = '" + this->textBox6->Text + "',Pays = '" + this->textBox7->Text + "' WHERE ID_Adresse = '" + ligneAdresse->Cells["ID_Adresse"]->Value->ToString() + "'; UPDATE Client SET Nom_Client = '" + this->textBox2->Text + "', Prenom_Client = '" + this->textBox3->Text + "', Date_Naissance = '" + theDate + "' WHERE ID_Client = '" + ligne->Cells["ID_Client"]->Value->ToString() + "'; UPDATE Definition_Lieu SET Type = 'F' WHERE ID_Lieu_Livraison = '" + ligneAdresse->Cells["ID_Lieu"]->Value->ToString() + "'; COMMIT;";
							   cnxx->Open();
							   Reader = cmd->ExecuteReader();
							   while (Reader->Read())
							   {
							   };
							   Reader->Close();
						   }
						   else if (this->checkBox2->Checked) {
							   cmd->CommandText = "START TRANSACTION;UPDATE Repertoire_Adresse SET Rue = '" + this->textBox4->Text + "', Code_Postal = '" + this->textBox5->Text + "', Ville = '" + this->textBox6->Text + "',Pays = '" + this->textBox7->Text + "' WHERE ID_Adresse = '" + ligneAdresse->Cells["ID_Adresse"]->Value->ToString() + "'; UPDATE Client SET Nom_Client = '" + this->textBox2->Text + "', Prenom_Client = '" + this->textBox3->Text + "', Date_Naissance = '" + theDate + "' WHERE ID_Client = '" + ligne->Cells["ID_Client"]->Value->ToString() + "'; UPDATE Definition_Lieu SET Type = 'L' WHERE ID_Lieu_Livraison = '" + ligneAdresse->Cells["ID_Lieu"]->Value->ToString() + "'; COMMIT;";
							   cnxx->Open();
							   Reader = cmd->ExecuteReader();
							   while (Reader->Read())
							   {
							   };
							   Reader->Close();
						   }
						   if (this->checkBox1->Checked && this->checkBox2->Checked) {
						   }
						   else {
							   if (this->checkBox1->Checked || this->checkBox2->Checked) {
								   System::String^ requ = "SELECT ID_Client, Nom_Client AS Nom, Prenom_Client AS Prenom, Date_Naissance FROM Projet.Client;";
								   InsertDataGrid(requ);

								   // On remet tout comme avant
								   retour();
							   }
							   else {
								   MessageBox::Show("Merci de sélectionner au moins un type d'Adresse. Veuillez recommencer.");
								   retour();
							   }
						   }
					   }
				   }
				   else {
					   MessageBox::Show("Erreur : Merci de remplir tous les champs obligatoires.");
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Erreur innatendue. Contactez votre adminsitrateur système.");
			   }
		   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	retour();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
	MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
	MySqlCommand^ cmd = gcnew MySqlCommand();
	MySqlDataReader^ Reader;
	cmd->Connection = cnxx;
	cmd->CommandText = "START TRANSACTION;DELETE Projet.Definition_Lieu, Projet.Repertoire_Adresse FROM Definition_Lieu LEFT JOIN Projet.Repertoire_Adresse ON Definition_Lieu.ID_Adresse = Repertoire_Adresse.ID_Adresse WHERE ID_Client = '" + ligne->Cells["ID_Client"]->Value->ToString() + "';DELETE FROM Client WHERE ID_Client = '" + ligne->Cells["ID_Client"]->Value->ToString() + "'; COMMIT;";
	cnxx->Open();
	Reader = cmd->ExecuteReader();
	while (Reader->Read())
	{
	};
	Reader->Close();
	System::String^ requ = "SELECT ID_Client, Nom_Client AS Nom, Prenom_Client AS Prenom, Date_Naissance FROM Projet.Client;";
	InsertDataGrid(requ);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
	DataGridViewRow^ ligneAdresse = dataGridView2->SelectedRows[0];
	if (ligne){

		// Retrait des labels
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label5->Visible = false;
		// Puis des boutons inutiles
		this->textBox1->Visible = false;
		this->button1->Visible = false;
		// Modif des noms
		this->label3->Text = "Nom";
		this->button2->Text = "Update";
		this->label3->Location = System::Drawing::Point(194, 248);
		// Ajout cases manquantes
		this->label6->Visible = true;
		this->dateTimePicker1->Visible = true;
		this->button3->Visible = true;
		this->label9->Visible = true;
		this->label10->Visible = true;
		this->label11->Visible = true;
		this->label12->Visible = true;
		this->textBox4->Visible = true;
		this->textBox5->Visible = true;
		this->textBox6->Visible = true;
		this->checkBox1->Visible = true;
		this->checkBox2->Visible = true;
		this->label13->Visible = true;
		this->textBox7->Visible = true;
		this->label14->Visible = true;
		this->checkBox3->Visible = true;
		//Déplacement case Ajouter
		this->button2->Location = System::Drawing::Point(391, 529);
		this->button2->Click -= gcnew System::EventHandler(this, &GestionClient::button2_Click);
		this->button2->Click += gcnew System::EventHandler(this, &GestionClient::button2_Click3);
		// Intégration du texte
		this->textBox2->Text = ligne->Cells["Nom"]->Value->ToString();
		this->textBox3->Text = ligne->Cells["Prenom"]->Value->ToString();

		this->dateTimePicker1->Value = DateTime::ParseExact(ligne->Cells["Date_Naissance"]->FormattedValue->ToString(),"MM/dd/yyyy", Globalization::CultureInfo::InvariantCulture);


		this->textBox4->Text = ligneAdresse->Cells["Rue"]->Value->ToString();
		this->textBox5->Text = ligneAdresse->Cells["Code_Postal"]->Value->ToString();
		this->textBox6->Text = ligneAdresse->Cells["Ville"]->Value->ToString();
		this->textBox7->Text = ligneAdresse->Cells["Pays"]->Value->ToString();
		if (ligneAdresse->Cells["Type"]->Value->ToString() == "F") {
			this->checkBox1->Checked = true;
		}
		else if (ligneAdresse->Cells["Type"]->Value->ToString() == "L") {
			this->checkBox2->Checked = true;
		}
		this->AjoutPers->Enabled = false;
		this->button5->Enabled = false;

	}
}
private: System::Void GestionClient_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
	System::String^ Identifiant = ligne->Cells["ID_Client"]->Value->ToString();
	System::String^ requ = "SELECT Rue, Code_Postal, Ville, Pays, Type, Definition_Lieu.ID_Lieu_Livraison AS ID_Lieu, Definition_Lieu.ID_Adresse FROM Projet.Definition_Lieu LEFT JOIN Projet.Repertoire_Adresse ON Definition_Lieu.ID_Adresse = Repertoire_Adresse.ID_Adresse WHERE ID_Client =" + Identifiant + ";";
	this->button4->Enabled = true;
	this->button5->Enabled = true;
	AdresseDataGrid(requ);
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
