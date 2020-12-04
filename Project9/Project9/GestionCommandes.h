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
	/// Summary for GestionCommandes
	/// </summary>
	public ref class GestionCommandes : public System::Windows::Forms::UserControl
	{
	public:
		GestionCommandes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::TextBox^ textBox1;

	public:String^ cnxstr;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::TextBox^ textBox4;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox9;


	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox8;






	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Label^ label5;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GestionCommandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AjouterCom;
	protected:
	private: System::Windows::Forms::Button^ AfficherCom;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->AjouterCom = (gcnew System::Windows::Forms::Button());
			this->AfficherCom = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// AjouterCom
			// 
			this->AjouterCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->AjouterCom->FlatAppearance->BorderSize = 0;
			this->AjouterCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AjouterCom->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AjouterCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->AjouterCom->Location = System::Drawing::Point(617, 0);
			this->AjouterCom->Name = L"AjouterCom";
			this->AjouterCom->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->AjouterCom->Size = System::Drawing::Size(617, 130);
			this->AjouterCom->TabIndex = 1;
			this->AjouterCom->Text = L"Ajouter une commande";
			this->AjouterCom->UseVisualStyleBackColor = false;
			this->AjouterCom->Click += gcnew System::EventHandler(this, &GestionCommandes::AjouterCom_Click);
			// 
			// AfficherCom
			// 
			this->AfficherCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->AfficherCom->FlatAppearance->BorderSize = 0;
			this->AfficherCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AfficherCom->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AfficherCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->AfficherCom->Location = System::Drawing::Point(0, 0);
			this->AfficherCom->Name = L"AfficherCom";
			this->AfficherCom->Size = System::Drawing::Size(617, 130);
			this->AfficherCom->TabIndex = 0;
			this->AfficherCom->Text = L"Affichage des commandes";
			this->AfficherCom->UseVisualStyleBackColor = false;
			this->AfficherCom->Click += gcnew System::EventHandler(this, &GestionCommandes::AfficherCom_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->AjouterCom);
			this->panel1->Controls->Add(this->AfficherCom);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1234, 130);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->dataGridView2);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(658, 136);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(570, 510);
			this->panel2->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label8->Location = System::Drawing::Point(3, 236);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 18);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Paiement(s)";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->Location = System::Drawing::Point(-1, 257);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(571, 182);
			this->dataGridView2->TabIndex = 22;
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
			this->label7->Size = System::Drawing::Size(107, 18);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Commande(s)";
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
			this->button5->Location = System::Drawing::Point(305, 442);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(271, 69);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Supprimer commande";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &GestionCommandes::button5_Click);
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
			this->button4->TabIndex = 22;
			this->button4->Text = L"Modifier commande";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GestionCommandes::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Location = System::Drawing::Point(-1, 30);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(571, 205);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionCommandes::dataGridView1_CellClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 23);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GestionCommandes::textBox2_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 203);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 23);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &GestionCommandes::textBox2_TextChanged);
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
			this->dateTimePicker1->Location = System::Drawing::Point(158, 27);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(122, 26);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarFont = (gcnew System::Drawing::Font(L"Whitney Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->dateTimePicker2->CalendarTrailingForeColor = System::Drawing::Color::Gray;
			this->dateTimePicker2->CustomFormat = L"MM/dd/yyyy";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dateTimePicker2->Location = System::Drawing::Point(158, 68);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(122, 26);
			this->dateTimePicker2->TabIndex = 6;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CalendarFont = (gcnew System::Drawing::Font(L"Whitney Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker3->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->dateTimePicker3->CalendarTrailingForeColor = System::Drawing::Color::Gray;
			this->dateTimePicker3->CustomFormat = L"MM/dd/yyyy";
			this->dateTimePicker3->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dateTimePicker3->Location = System::Drawing::Point(158, 113);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(122, 26);
			this->dateTimePicker3->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label6->Location = System::Drawing::Point(17, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 18);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Date de commande";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(17, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 18);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Date d\'envoi";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label5->Location = System::Drawing::Point(17, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 18);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Date de livraison";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(542, 603);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &GestionCommandes::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(25, 275);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(306, 364);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Commande";
			this->groupBox1->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label18->Location = System::Drawing::Point(17, 328);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(76, 18);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Référence";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(158, 326);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(122, 23);
			this->textBox10->TabIndex = 12;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label17->Location = System::Drawing::Point(15, 282);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(137, 18);
			this->label17->TabIndex = 38;
			this->label17->Text = L"Montant réduction";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(158, 280);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(122, 23);
			this->textBox9->TabIndex = 11;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &GestionCommandes::textBox8_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label16->Location = System::Drawing::Point(17, 202);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(126, 18);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Montant tot TVA";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label15->Location = System::Drawing::Point(17, 162);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(115, 18);
			this->label15->TabIndex = 35;
			this->label15->Text = L"Montant tot HT";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label14->Location = System::Drawing::Point(17, 240);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(124, 18);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Montant tot TTC";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(158, 241);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(122, 23);
			this->textBox8->TabIndex = 10;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &GestionCommandes::textBox8_TextChanged);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(371, 603);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Annuler";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &GestionCommandes::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(157, 187);
			this->comboBox1->MaxLength = 15;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label12->Location = System::Drawing::Point(14, 149);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 18);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Solde restant";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label13->Location = System::Drawing::Point(14, 192);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(135, 18);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Mode de paiement";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(156, 149);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(122, 23);
			this->textBox7->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label9->Location = System::Drawing::Point(14, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 18);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Libelle";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(74, 64);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(204, 23);
			this->textBox5->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label10->Location = System::Drawing::Point(14, 112);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 18);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Montant";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(156, 107);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(122, 23);
			this->textBox6->TabIndex = 15;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &GestionCommandes::textBox8_TextChanged);
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->CalendarFont = (gcnew System::Drawing::Font(L"Whitney Light", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker4->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->dateTimePicker4->CalendarTrailingForeColor = System::Drawing::Color::Gray;
			this->dateTimePicker4->CustomFormat = L"MM/dd/yyyy";
			this->dateTimePicker4->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker4->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dateTimePicker4->Location = System::Drawing::Point(156, 22);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(122, 26);
			this->dateTimePicker4->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label11->Location = System::Drawing::Point(14, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 18);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Date de paiement";
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
			this->textBox3->Location = System::Drawing::Point(219, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 26);
			this->textBox3->TabIndex = 3;
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
			this->textBox4->Location = System::Drawing::Point(219, 231);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 26);
			this->textBox4->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label1->Location = System::Drawing::Point(22, 231);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 18);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Recherche par Référence";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label2->Location = System::Drawing::Point(22, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 18);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Recherche par Identifiant";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label3->Location = System::Drawing::Point(262, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 18);
			this->label3->TabIndex = 33;
			this->label3->Text = L"OU";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(454, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Rechercher";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GestionCommandes::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(454, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Rechercher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GestionCommandes::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->dateTimePicker4);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(354, 275);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(297, 264);
			this->groupBox2->TabIndex = 42;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Paiement";
			this->groupBox2->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(156, 225);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(122, 23);
			this->textBox11->TabIndex = 18;
			this->textBox11->Visible = false;
			this->textBox11->Enter += gcnew System::EventHandler(this, &GestionCommandes::textBox11_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label19->Location = System::Drawing::Point(14, 230);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(105, 18);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Commande ID";
			this->label19->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(450, 566);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(70, 17);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Paiement";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &GestionCommandes::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(450, 543);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(79, 17);
			this->checkBox2->TabIndex = 43;
			this->checkBox2->Text = L"Commande";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(461, 603);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 44;
			this->button7->Text = L"Modifier";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &GestionCommandes::button7_Click);
			// 
			// GestionCommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button7);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"GestionCommandes";
			this->Size = System::Drawing::Size(1234, 650);
			this->Load += gcnew System::EventHandler(this, &GestionCommandes::GestionCommandes_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
 private: System::Void InsertDataGrid(System::String ^ req) {
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

private: System::Void PaiementDataGrid(System::String^ req) {
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

private: System::Void AjouterCom_Click(System::Object^ sender, System::EventArgs^ e) {

	this->groupBox1->Visible = true;
	this->groupBox2->Visible = true;
	this->button1->Visible = true;
	this->button7->Visible = false;
	this->button6->Visible = true;
	this->checkBox1->Visible = true;
	this->checkBox2->Visible = true;

}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // Ajout commande paiement
		try
		{
			String^ theDate_com = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
			String^ theDate_liv = this->dateTimePicker2->Value.ToString("yyyy-MM-dd");
			String^ theDate_env = this->dateTimePicker3->Value.ToString("yyyy-MM-dd");
			String^ theDate_paie = this->dateTimePicker4->Value.ToString("yyyy-MM-dd");

			MySqlConnection^ cnxx = gcnew MySqlConnection(this->cnxstr);
			MySqlCommand^ cmd = gcnew MySqlCommand();
			MySqlDataReader^ reader;
			String^ req;
			cmd->Connection = cnxx;
			if (this->checkBox1->Checked && !this->checkBox2->Checked && this->comboBox1->Text!="" && this->textBox11->Text != "") {
				try
				{
					cmd->CommandText = "START TRANSACTION; INSERT INTO Projet.Paiement(Libelle_Paiement, Date_Paiement, Montant, Solde_Restant, ID_Commande, ID_Mode_Paiement) SELECT '" + this->textBox5->Text + "', '" + theDate_paie + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "', '" + this->textBox11->Text + "', Mode_Paiement.ID_Mode_Paiement FROM Projet.Mode_Paiement, Projet.Commande WHERE Mode_Paiement.Nom_Mode_Paiement = '" + this->comboBox1->Text + "'; COMMIT;";
					cnxx->Open();
				reader = cmd->ExecuteReader();
					while (reader->Read())
					{
					};
					reader->Close();				}
				catch (Exception^ e)
				{
					MessageBox::Show("Merci de renseigner des paramètres existants"+e);
				}
			
			}
			else if (this->checkBox2->Checked && !this->checkBox1->Checked){
				cmd->CommandText = "START TRANSACTION; INSERT INTO Projet.Commande (Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference ) VALUES ('" + theDate_liv + "', '" + theDate_env + "', '" + theDate_com + "', '" + this->textBox1->Text + "', '" + this->textBox2->Text + "', '" + this->textBox9->Text + "', '" + this->textBox8->Text + "', '" + this->textBox10->Text + "'); COMMIT;";
				cnxx->Open();
				reader = cmd->ExecuteReader();
				while (reader->Read())
				{
				};
				reader->Close();
			}
			else if (this->checkBox2->Checked && this->checkBox1->Checked) {
				cmd->CommandText = "START TRANSACTION; INSERT INTO Projet.Commande (Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference ) VALUES ('" + theDate_liv + "', '" + theDate_env + "', '" + theDate_com + "', '" + this->textBox1->Text + "', '" + this->textBox2->Text + "', '" + this->textBox9->Text + "', '" + this->textBox8->Text + "', '" + this->textBox10->Text + "'); INSERT INTO Projet.Paiement(Libelle_Paiement, Date_Paiement, Montant, Solde_Restant, ID_Commande, ID_Mode_Paiement) SELECT '" + this->textBox5->Text + "', '" + theDate_paie + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "', MAX(Commande.ID_Commande), Mode_Paiement.ID_Mode_Paiement FROM Projet.Mode_Paiement, Projet.Commande WHERE Mode_Paiement.Nom_Mode_Paiement = '" + this->comboBox1->Text + "'; COMMIT;";
				cnxx->Open();
				reader = cmd->ExecuteReader();
				while (reader->Read())
				{
				};
				reader->Close();
			}
			else if (!this->checkBox2->Checked && !this->checkBox1->Checked) {
				MessageBox::Show("Merci de cocher au moins une information");
			}
			else {
				MessageBox::Show("Vous avez oublié de remplir des paramètres ! Affichage des Commandes");
			}
			

			InsertDataGrid("SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande");

		}
		catch (Exception^ e)
		{
			MessageBox::Show("OOPS : " +e);
		}
		this->groupBox1->Visible = false;
		this->groupBox2->Visible = false;
		this->button1->Visible = false;
		this->button6->Visible = false;
		this->checkBox1->Visible = false;
		this->checkBox2->Visible = false;
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBox1->Visible = false;
	this->groupBox2->Visible = false;
	this->checkBox1->Visible = false;
	this->checkBox2->Visible = false;
	this->button7->Visible = false;
	this->button1->Visible = false;
	this->button6->Visible = false;

}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	DataGridViewRow^ ligneCom = dataGridView1->SelectedRows[0];
	DataGridViewRow^ lignePaiement = dataGridView2->SelectedRows[0];
	if (ligneCom)
	{
		//Affichage des données dans textbox Commande
		this->dateTimePicker3->Value = DateTime::ParseExact(ligneCom->Cells["Date_Commande"]->FormattedValue->ToString(), "MM/dd/yyyy", Globalization::CultureInfo::InvariantCulture);
		this->dateTimePicker2->Value = DateTime::ParseExact(ligneCom->Cells["Date_Envoi"]->FormattedValue->ToString(), "MM/dd/yyyy", Globalization::CultureInfo::InvariantCulture);
		this->dateTimePicker1->Value = DateTime::ParseExact(ligneCom->Cells["Date_Livraison"]->FormattedValue->ToString(), "MM/dd/yyyy", Globalization::CultureInfo::InvariantCulture);

		this->textBox1->Text = ligneCom->Cells["CDE_Montant_Total_HT"]->Value->ToString();
		this->textBox2->Text = ligneCom->Cells["CDE_Montant_Total_TVA"]->Value->ToString();
		this->textBox9->Text = ligneCom->Cells["CDE_Reduction"]->Value->ToString();
		this->textBox8->Text = ligneCom->Cells["CDE_Montant_Total_TTC"]->Value->ToString();
		this->textBox10->Text = ligneCom->Cells["Reference"]->Value->ToString();

	};

	if (lignePaiement) {
		//Paiement
		this->dateTimePicker4->Value = DateTime::ParseExact(lignePaiement->Cells["Date_Paiement"]->FormattedValue->ToString(), "MM/dd/yyyy", Globalization::CultureInfo::InvariantCulture);

		this->textBox5->Text = lignePaiement->Cells["Libelle_Paiement"]->Value->ToString();
		this->textBox6->Text = lignePaiement->Cells["Montant"]->Value->ToString();
		this->textBox7->Text = lignePaiement->Cells["Solde_Restant"]->Value->ToString();
		this->textBox11->Text = ligneCom->Cells["ID_Commande"]->Value->ToString();
		this->comboBox1->Text = lignePaiement->Cells["Paiement_Mode"]->Value->ToString();
	}


	this->groupBox1->Visible = true;
	this->groupBox2->Visible = true;


	this->checkBox1->Visible = true;
	this->checkBox2->Visible = true;
	this->button7->Visible = true;
	this->button1->Visible = false;
	this->button6->Visible = true;
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox1->Checked) {
		this->label19->Visible = true;
		this->textBox11->Visible = true;
	}
	else {
		this->label19->Visible = false;
		this->textBox11->Visible = false;
	}
}


private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try
	{
		DataGridViewRow^ ligneCom = dataGridView1->SelectedRows[0];
		System::String^ Identifiant = ligneCom->Cells["ID_Commande"]->Value->ToString();
		System::String^ requ = "SELECT Paiement.ID_Paiement, Paiement.Libelle_Paiement, Paiement.Date_Paiement, Paiement.Montant, Paiement.Solde_Restant, Mode_Paiement.Nom_Mode_Paiement AS Paiement_Mode, ID_Commande FROM Projet.Paiement JOIN Projet.Mode_Paiement ON Paiement.ID_Mode_Paiement = Mode_Paiement.ID_Mode_Paiement WHERE ID_Commande =" + Identifiant + ";";
		this->button4->Enabled = true;
		this->button5->Enabled = true;
		PaiementDataGrid(requ);
		this->textBox11->Text = ligneCom->Cells["ID_Commande"]->Value->ToString();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("" + e);
	}

}

private: System::Void AfficherCom_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ req;
	req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande";
	InsertDataGrid(req);
}

private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	auto result = MessageBox::Show("Attention vous allez modifier l'ID_Commande,  faites attention", "Modifier ID_Commande", MessageBoxButtons::OKCancel);

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	DataGridViewRow^ ligneCom = dataGridView1->SelectedRows[0];
	DataGridViewRow^ lignePaie = dataGridView2->SelectedRows[0];
	try
	{
		String^ theDate_com = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
		String^ theDate_liv = this->dateTimePicker2->Value.ToString("yyyy-MM-dd");
		String^ theDate_env = this->dateTimePicker3->Value.ToString("yyyy-MM-dd");
		String^ theDate_paie = this->dateTimePicker4->Value.ToString("yyyy-MM-dd");
		MySqlConnection^ cnxx = gcnew MySqlConnection(this->cnxstr);
		MySqlCommand^ cmd = gcnew MySqlCommand();
		MySqlDataReader^ reader;
		String^ req;
		cmd->Connection = cnxx;

		cnxx->Open();
		if (this->checkBox1->Checked && !this->checkBox2->Checked) {
			req = "START TRANSACTION; UPDATE Projet.Paiement SET Libelle_Paiement = '" + this->textBox5->Text + "', Date_Paiement = '" + theDate_paie + "', Montant ='" + this->textBox6->Text + "', Solde_Restant='" + this->textBox7->Text + "', ID_Mode_Paiement =(SELECT ID_Mode_Paiement FROM Projet.Mode_Paiement WHERE Nom_Mode_Paiement = '" + this->comboBox1->Text + "'), ID_Commande = " + this->textBox11->Text + " WHERE ID_Paiement = " + lignePaie->Cells["ID_Paiement"]->Value->ToString() + " ;COMMIT;";
		}
		else if (!this->checkBox1->Checked && this->checkBox2->Checked) {
			req = "START TRANSACTION; UPDATE Projet.Commande SET Date_Livraison='" + theDate_liv + "', Date_Envoi= '" + theDate_env + "', Date_Commande='" + theDate_com + "', CDE_Montant_Total_HT= '" + this->textBox1->Text + "', CDE_Montant_Total_TVA='" + this->textBox2->Text + "', CDE_Reduction='" + this->textBox9->Text + "', CDE_Montant_Total_TTC= '" + this->textBox8->Text + "', Reference= '" + this->textBox10->Text + "' WHERE ID_Commande = " + ligneCom->Cells["ID_Commande"]->Value->ToString() + ";COMMIT;";
		}
		else {
			req = "START TRANSACTION; UPDATE Projet.Paiement SET Libelle_Paiement = '" + this->textBox5->Text + "', Date_Paiement = '" + theDate_paie + "', Montant ='" + this->textBox6->Text + "', Solde_Restant='" + this->textBox7->Text + "', ID_Mode_Paiement =(SELECT ID_Mode_Paiement FROM Projet.Mode_Paiement WHERE Nom_Mode_Paiement = '" + this->comboBox1->Text + "'), ID_Commande = " + this->textBox11->Text + " WHERE ID_Paiement = " + lignePaie->Cells["ID_Paiement"]->Value->ToString() + "; UPDATE Projet.Commande SET Date_Livraison = '" + theDate_liv + "', Date_Envoi = '" + theDate_env + "', Date_Commande = '" + theDate_com + "', CDE_Montant_Total_HT = '" + this->textBox1->Text + "', CDE_Montant_Total_TVA = '" + this->textBox2->Text + "', CDE_Reduction = '" + this->textBox9->Text + "', CDE_Montant_Total_TTC = '" + this->textBox8->Text + "', Reference = '" + this->textBox10->Text + "' WHERE ID_Commande = " + ligneCom->Cells["ID_Commande"]->Value->ToString() + "; COMMIT; ";
		}


		cmd->CommandText = req;
		reader = cmd->ExecuteReader();
		while (reader->Read())
		{
		};
		reader->Close();

		req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande";
		InsertDataGrid(req);

		req = "SELECT Paiement.ID_Paiement, Paiement.Libelle_Paiement, Paiement.Date_Paiement, Paiement.Montant, Paiement.Solde_Restant, Mode_Paiement.Nom_Mode_Paiement AS Paiement_Mode, ID_Commande FROM Projet.Paiement JOIN Projet.Mode_Paiement ON Paiement.ID_Mode_Paiement = Mode_Paiement.ID_Mode_Paiement WHERE ID_Commande =" + lignePaie->Cells["ID_Commande"]->Value->ToString() + ";";
		PaiementDataGrid(req);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("OOPS 2 :" + e);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	DataGridViewRow^ ligneCom = dataGridView1->SelectedRows[0];
	DataGridViewRow^ lignePaie = dataGridView2->SelectedRows[0];
	MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
	MySqlCommand^ cmd = gcnew MySqlCommand();
	MySqlDataReader^ Reader;
	cmd->Connection = cnxx;
	auto ret = MessageBox::Show("Voulez supprimer la commande n°" + ligneCom->Cells["ID_Commande"]->Value->ToString() + " et toutes ses dépendances (Paiements) ?", "Suppression commande", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
	if (ret == DialogResult::OK) {
		cmd->CommandText = "START TRANSACTION; DELETE Projet.Paiement FROM Projet.Paiement WHERE ID_Commande = " + ligneCom->Cells["ID_Commande"]->Value->ToString() + "; DELETE Projet.Commande FROM Projet.Commande WHERE ID_Commande = " + ligneCom->Cells["ID_Commande"]->Value->ToString() + "; COMMIT;";
	}
	else {
		auto ret2 = MessageBox::Show("Voulez supprimer la dépendance de la commande n°" + ligneCom->Cells["ID_Commande"]->Value->ToString() + " de référence ID_Paiement ="+lignePaie->Cells["ID_Paiement"]->Value->ToString() +" ?", "Suppression dependance", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
		if (ret2 == DialogResult::OK) {
			cmd->CommandText = "START TRANSACTION; DELETE Projet.Paiement FROM Projet.Paiement WHERE ID_Commande = " + ligneCom->Cells["ID_Commande"]->Value->ToString() + " AND ID_Paiement = "+ lignePaie->Cells["ID_Paiement"]->Value->ToString() +"; COMMIT;";
		}
	}
	try
	{
		cnxx->Open();
		Reader = cmd->ExecuteReader();
		while (Reader->Read())
		{
		};
	}
	catch (Exception^ e)
	{
		MessageBox::Show("" + e);
	}

	Reader->Close();
	System::String^ requ = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande";
	InsertDataGrid(requ);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //Par ID
	String^IDcom = this->textBox3->Text;
	this->textBox4->Clear();
	String^req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande WHERE ID_Commande = "+IDcom+";";
	InsertDataGrid(req);
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //Par reference
	String^ IDcom = this->textBox4->Text;
	this->textBox3->Clear();
	String^ req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande WHERE Commande.Reference = '" + IDcom + "';";
	InsertDataGrid(req);
}


private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text != "" && this->textBox2->Text != "") {
		this->textBox8->Text = (Convert::ToSingle(this->textBox1->Text)* (1+(Convert::ToSingle(this->textBox2->Text)/100))).ToString();
	}
	else if (this->textBox1->Text != "" && this->textBox2->Text == "") {
		this->textBox8->Text = this->textBox1->Text;
	}
	else if (this->textBox2->Text != "" && this->textBox1->Text == "") {
		this->textBox8->Text = this->textBox2->Text;
	};
}

private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox8->Text != "" && this->textBox9->Text != "" && this->textBox6->Text != "") {
		this->textBox7->Text = ((Convert::ToSingle(this->textBox8->Text) + Convert::ToSingle(this->textBox9->Text)) - Convert::ToSingle(this->textBox6->Text)).ToString();
	}
}

private: System::Void GestionCommandes_Load(System::Object^ sender, System::EventArgs^ e) {

	MySqlConnection^ cnxx = gcnew MySqlConnection(this->cnxstr);
	MySqlCommand^ cmd = gcnew MySqlCommand();
	MySqlDataReader^ reader;
	cmd->Connection = cnxx;
	cmd->CommandText = "SELECT Nom_Mode_Paiement FROM Projet.Mode_Paiement;";
	cnxx->Open();
	reader = cmd->ExecuteReader();
	while (reader->Read())
	{
		this->comboBox1->Items->Add(reader[0]);
	};
}
};
}
