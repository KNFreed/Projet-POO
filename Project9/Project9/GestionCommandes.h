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



	public:String^ cnxstr;



	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Add_ComV;

	private: System::Windows::Forms::GroupBox^ G_Com;

	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::TextBox^ textBox4;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ reduc_Com;













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
	private: System::Windows::Forms::TextBox^ Ref_Com;

	private: System::Windows::Forms::Button^ Search_ID_Com;
	private: System::Windows::Forms::Button^ Search_Ref_Com;
	private: System::Windows::Forms::Button^ Cancel_Com;



	private: System::Windows::Forms::GroupBox^ G_Paie;



	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ Modif_ComV;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ modif_stock;
	private: System::Windows::Forms::TextBox^ Qtt_Com;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ComboBox^ comboBox2;



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
private: System::Windows::Forms::Button^ sup_com;

private: System::Windows::Forms::Button^ modif_com;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->modif_stock = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->sup_com = (gcnew System::Windows::Forms::Button());
			this->modif_com = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Add_ComV = (gcnew System::Windows::Forms::Button());
			this->G_Com = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->Qtt_Com = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Ref_Com = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->reduc_Com = (gcnew System::Windows::Forms::TextBox());
			this->Cancel_Com = (gcnew System::Windows::Forms::Button());
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
			this->Search_ID_Com = (gcnew System::Windows::Forms::Button());
			this->Search_Ref_Com = (gcnew System::Windows::Forms::Button());
			this->G_Paie = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Modif_ComV = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->G_Com->SuspendLayout();
			this->G_Paie->SuspendLayout();
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
			this->panel2->Controls->Add(this->modif_stock);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->dataGridView3);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->dataGridView2);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->sup_com);
			this->panel2->Controls->Add(this->modif_com);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(632, 136);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(602, 511);
			this->panel2->TabIndex = 16;
			// 
			// modif_stock
			// 
			this->modif_stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->modif_stock->Enabled = false;
			this->modif_stock->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->modif_stock->FlatAppearance->BorderSize = 0;
			this->modif_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modif_stock->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modif_stock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->modif_stock->Location = System::Drawing::Point(410, 453);
			this->modif_stock->Margin = System::Windows::Forms::Padding(0);
			this->modif_stock->Name = L"modif_stock";
			this->modif_stock->Size = System::Drawing::Size(189, 59);
			this->modif_stock->TabIndex = 26;
			this->modif_stock->Text = L"Modifier article";
			this->modif_stock->UseVisualStyleBackColor = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label14->Location = System::Drawing::Point(302, 238);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 18);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Article(s)";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(305, 257);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(294, 197);
			this->dataGridView3->TabIndex = 24;
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
			this->dataGridView2->Size = System::Drawing::Size(307, 197);
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
			// sup_com
			// 
			this->sup_com->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->sup_com->Enabled = false;
			this->sup_com->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->sup_com->FlatAppearance->BorderSize = 0;
			this->sup_com->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sup_com->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sup_com->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->sup_com->Location = System::Drawing::Point(227, 452);
			this->sup_com->Margin = System::Windows::Forms::Padding(0);
			this->sup_com->Name = L"sup_com";
			this->sup_com->Size = System::Drawing::Size(186, 58);
			this->sup_com->TabIndex = 23;
			this->sup_com->Text = L"Supprimer commande";
			this->sup_com->UseVisualStyleBackColor = false;
			this->sup_com->Click += gcnew System::EventHandler(this, &GestionCommandes::sup_com_Click);
			// 
			// modif_com
			// 
			this->modif_com->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->modif_com->Enabled = false;
			this->modif_com->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->modif_com->FlatAppearance->BorderSize = 0;
			this->modif_com->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modif_com->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modif_com->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->modif_com->Location = System::Drawing::Point(0, 451);
			this->modif_com->Margin = System::Windows::Forms::Padding(0);
			this->modif_com->Name = L"modif_com";
			this->modif_com->Size = System::Drawing::Size(227, 60);
			this->modif_com->TabIndex = 22;
			this->modif_com->Text = L"Modifier commande";
			this->modif_com->UseVisualStyleBackColor = false;
			this->modif_com->Click += gcnew System::EventHandler(this, &GestionCommandes::modif_com_Click);
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
			this->dataGridView1->Size = System::Drawing::Size(600, 205);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionCommandes::dataGridView1_CellClick);
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
			// Add_ComV
			// 
			this->Add_ComV->Location = System::Drawing::Point(523, 607);
			this->Add_ComV->Name = L"Add_ComV";
			this->Add_ComV->Size = System::Drawing::Size(75, 23);
			this->Add_ComV->TabIndex = 21;
			this->Add_ComV->Text = L"Ajouter";
			this->Add_ComV->UseVisualStyleBackColor = true;
			this->Add_ComV->Visible = false;
			this->Add_ComV->Click += gcnew System::EventHandler(this, &GestionCommandes::Add_ComV_Click);
			// 
			// G_Com
			// 
			this->G_Com->Controls->Add(this->label20);
			this->G_Com->Controls->Add(this->comboBox2);
			this->G_Com->Controls->Add(this->Qtt_Com);
			this->G_Com->Controls->Add(this->label15);
			this->G_Com->Controls->Add(this->label18);
			this->G_Com->Controls->Add(this->Ref_Com);
			this->G_Com->Controls->Add(this->label17);
			this->G_Com->Controls->Add(this->reduc_Com);
			this->G_Com->Controls->Add(this->label4);
			this->G_Com->Controls->Add(this->label5);
			this->G_Com->Controls->Add(this->dateTimePicker1);
			this->G_Com->Controls->Add(this->label6);
			this->G_Com->Controls->Add(this->dateTimePicker2);
			this->G_Com->Controls->Add(this->dateTimePicker3);
			this->G_Com->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->G_Com->Location = System::Drawing::Point(3, 245);
			this->G_Com->Name = L"G_Com";
			this->G_Com->Size = System::Drawing::Size(306, 345);
			this->G_Com->TabIndex = 29;
			this->G_Com->TabStop = false;
			this->G_Com->Text = L"Commande";
			this->G_Com->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label20->Location = System::Drawing::Point(15, 296);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(120, 18);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Articles en stock";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(158, 291);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 23);
			this->comboBox2->TabIndex = 33;
			// 
			// Qtt_Com
			// 
			this->Qtt_Com->Location = System::Drawing::Point(158, 246);
			this->Qtt_Com->Name = L"Qtt_Com";
			this->Qtt_Com->Size = System::Drawing::Size(122, 23);
			this->Qtt_Com->TabIndex = 42;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label15->Location = System::Drawing::Point(17, 251);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 18);
			this->label15->TabIndex = 41;
			this->label15->Text = L"Quantité";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label18->Location = System::Drawing::Point(17, 208);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(76, 18);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Référence";
			// 
			// Ref_Com
			// 
			this->Ref_Com->Location = System::Drawing::Point(158, 203);
			this->Ref_Com->Name = L"Ref_Com";
			this->Ref_Com->Size = System::Drawing::Size(122, 23);
			this->Ref_Com->TabIndex = 12;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label17->Location = System::Drawing::Point(15, 163);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(137, 18);
			this->label17->TabIndex = 38;
			this->label17->Text = L"Montant réduction";
			// 
			// reduc_Com
			// 
			this->reduc_Com->Location = System::Drawing::Point(158, 161);
			this->reduc_Com->Name = L"reduc_Com";
			this->reduc_Com->Size = System::Drawing::Size(122, 23);
			this->reduc_Com->TabIndex = 11;
			// 
			// Cancel_Com
			// 
			this->Cancel_Com->Location = System::Drawing::Point(331, 607);
			this->Cancel_Com->Name = L"Cancel_Com";
			this->Cancel_Com->Size = System::Drawing::Size(75, 23);
			this->Cancel_Com->TabIndex = 20;
			this->Cancel_Com->Text = L"Annuler";
			this->Cancel_Com->UseVisualStyleBackColor = true;
			this->Cancel_Com->Visible = false;
			this->Cancel_Com->Click += gcnew System::EventHandler(this, &GestionCommandes::Cancel_Com_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(157, 187);
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
			this->textBox3->Location = System::Drawing::Point(209, 143);
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
			this->textBox4->Location = System::Drawing::Point(209, 197);
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
			this->label1->Location = System::Drawing::Point(12, 197);
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
			this->label2->Location = System::Drawing::Point(12, 145);
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
			this->label3->Location = System::Drawing::Point(252, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 18);
			this->label3->TabIndex = 33;
			this->label3->Text = L"OU";
			// 
			// Search_ID_Com
			// 
			this->Search_ID_Com->Location = System::Drawing::Point(354, 143);
			this->Search_ID_Com->Name = L"Search_ID_Com";
			this->Search_ID_Com->Size = System::Drawing::Size(75, 23);
			this->Search_ID_Com->TabIndex = 24;
			this->Search_ID_Com->Text = L"Rechercher";
			this->Search_ID_Com->UseVisualStyleBackColor = true;
			this->Search_ID_Com->Click += gcnew System::EventHandler(this, &GestionCommandes::Search_ID_Com_Click);
			// 
			// Search_Ref_Com
			// 
			this->Search_Ref_Com->Location = System::Drawing::Point(354, 197);
			this->Search_Ref_Com->Name = L"Search_Ref_Com";
			this->Search_Ref_Com->Size = System::Drawing::Size(75, 23);
			this->Search_Ref_Com->TabIndex = 25;
			this->Search_Ref_Com->Text = L"Rechercher";
			this->Search_Ref_Com->UseVisualStyleBackColor = true;
			this->Search_Ref_Com->Click += gcnew System::EventHandler(this, &GestionCommandes::Search_Ref_Com_Click);
			// 
			// G_Paie
			// 
			this->G_Paie->Controls->Add(this->textBox11);
			this->G_Paie->Controls->Add(this->checkBox1);
			this->G_Paie->Controls->Add(this->checkBox2);
			this->G_Paie->Controls->Add(this->label19);
			this->G_Paie->Controls->Add(this->textBox5);
			this->G_Paie->Controls->Add(this->textBox6);
			this->G_Paie->Controls->Add(this->dateTimePicker4);
			this->G_Paie->Controls->Add(this->label11);
			this->G_Paie->Controls->Add(this->label12);
			this->G_Paie->Controls->Add(this->textBox7);
			this->G_Paie->Controls->Add(this->label13);
			this->G_Paie->Controls->Add(this->comboBox1);
			this->G_Paie->Controls->Add(this->label10);
			this->G_Paie->Controls->Add(this->label9);
			this->G_Paie->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->G_Paie->Location = System::Drawing::Point(320, 245);
			this->G_Paie->Name = L"G_Paie";
			this->G_Paie->Size = System::Drawing::Size(297, 332);
			this->G_Paie->TabIndex = 42;
			this->G_Paie->TabStop = false;
			this->G_Paie->Text = L"Paiement";
			this->G_Paie->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(156, 225);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(122, 23);
			this->textBox11->TabIndex = 18;
			this->textBox11->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(30, 302);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(94, 20);
			this->checkBox1->TabIndex = 45;
			this->checkBox1->Text = L"Commande";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(157, 299);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(83, 20);
			this->checkBox2->TabIndex = 46;
			this->checkBox2->Text = L"Paiement";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &GestionCommandes::checkBox2_CheckedChanged);
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
			// Modif_ComV
			// 
			this->Modif_ComV->Location = System::Drawing::Point(424, 607);
			this->Modif_ComV->Name = L"Modif_ComV";
			this->Modif_ComV->Size = System::Drawing::Size(75, 23);
			this->Modif_ComV->TabIndex = 44;
			this->Modif_ComV->Text = L"Modifier";
			this->Modif_ComV->UseVisualStyleBackColor = true;
			this->Modif_ComV->Visible = false;
			this->Modif_ComV->Click += gcnew System::EventHandler(this, &GestionCommandes::Modif_ComV_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label16->Location = System::Drawing::Point(410, 518);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(71, 18);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Selection";
			this->label16->Visible = false;
			// 
			// GestionCommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Modif_ComV);
			this->Controls->Add(this->G_Paie);
			this->Controls->Add(this->Cancel_Com);
			this->Controls->Add(this->Search_Ref_Com);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Add_ComV);
			this->Controls->Add(this->Search_ID_Com);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->G_Com);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"GestionCommandes";
			this->Size = System::Drawing::Size(1234, 650);
			this->Load += gcnew System::EventHandler(this, &GestionCommandes::GestionCommandes_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->G_Com->ResumeLayout(false);
			this->G_Com->PerformLayout();
			this->G_Paie->ResumeLayout(false);
			this->G_Paie->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Zone affichage DataGrid
private:
	System::Void InsertDataGrid(System::String^ req) {
		MySqlDataAdapter^ adapt;
		MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
		adapt = gcnew MySqlDataAdapter(req, cnxx);
		MySqlCommandBuilder^ commandBuilder;
		commandBuilder = gcnew MySqlCommandBuilder(adapt);
		DataTable^ table;
		table = gcnew DataTable();
		adapt->Fill(table);
		dataGridView1->DataSource = table;
	}

	System::Void PaiementDataGrid(System::String^ req) {
		MySqlDataAdapter^ adapt;
		MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
		adapt = gcnew MySqlDataAdapter(req, cnxx);
		MySqlCommandBuilder^ commandBuilder;
		commandBuilder = gcnew MySqlCommandBuilder(adapt);
		DataTable^ table;
		table = gcnew DataTable();
		adapt->Fill(table);
		dataGridView2->DataSource = table;
	}

	System::Void ArticleDataGrid(System::String^ req) {
		MySqlDataAdapter^ adapt;
		MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
		adapt = gcnew MySqlDataAdapter(req, cnxx);
		MySqlCommandBuilder^ commandBuilder;
		commandBuilder = gcnew MySqlCommandBuilder(adapt);
		DataTable^ table;
		table = gcnew DataTable();
		adapt->Fill(table);
		dataGridView3->DataSource = table;
	}


	//Events Bouttons
private: System::Void AfficherCom_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ req;
	req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande";
	InsertDataGrid(req);
}

private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	auto result = MessageBox::Show("Attention vous allez modifier l'ID_Commande,  faites attention", "Modifier ID_Commande", MessageBoxButtons::OKCancel);

}

private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try
	{
		DataGridViewRow^ ligneCom = dataGridView1->SelectedRows[0];

		System::String^ Identifiant = ligneCom->Cells["ID_Commande"]->Value->ToString();
		System::String^ req_paie;
		System::String^ req_stock;
		this->textBox11->Text = Identifiant;

		req_paie = "SELECT Paiement.ID_Paiement, Paiement.Libelle_Paiement, Paiement.Date_Paiement, Paiement.Montant, Paiement.Solde_Restant, Mode_Paiement.Nom_Mode_Paiement AS Paiement_Mode, ID_Commande FROM Projet.Paiement JOIN Projet.Mode_Paiement ON Paiement.ID_Mode_Paiement = Mode_Paiement.ID_Mode_Paiement WHERE ID_Commande =" + Identifiant + ";";
		PaiementDataGrid(req_paie);
		

		req_stock = "SELECT Libelle_Article, Quantite, (Prix_HT * Prix_Commercial) AS 'Prix UHT', Taux_TVA_Produit, (Quantite * Prix_HT * Prix_Commercial) AS 'Total HT', (Quantite * Prix_HT * Prix_Commercial * ((100 + Taux_TVA_Produit) / 100)) AS 'Total TTC'\
			FROM Ligne\
			LEFT JOIN Ligne_Commande ON Ligne.ID_Ligne = Ligne_Commande.ID_Ligne\
			LEFT JOIN Catalogue_Entreprise  on Ligne.ID_Article = Catalogue_Entreprise.ID_Article\
			WHERE ID_Commande = " + Identifiant + ";";

		ArticleDataGrid(req_stock);

		this->modif_stock->Enabled = true;
		this->modif_com->Enabled = true;
		this->sup_com->Enabled = true;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("" + e);
	}
}

private: System::Void Search_ID_Com_Click(System::Object^ sender, System::EventArgs^ e) { //Par ID Commande
	String^ IDcom = this->textBox3->Text;
	this->textBox4->Clear();
	String^ req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande WHERE ID_Commande = " + IDcom + ";";
	InsertDataGrid(req);
}

private: System::Void Search_Ref_Com_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ IDcom = this->textBox4->Text;
	this->textBox3->Clear();
	String^ req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande WHERE Commande.Reference = '" + IDcom + "';";
	InsertDataGrid(req);
}

private: System::Void AjouterCom_Click(System::Object^ sender, System::EventArgs^ e) {
	this->G_Com->Visible = true;
	this->G_Paie->Visible = true;
	this->Modif_ComV->Visible = false;
	this->Cancel_Com->Visible = true;
	this->Add_ComV->Visible = true;
}


private: System::Void Cancel_Com_Click(System::Object^ sender, System::EventArgs^ e) {
	this->G_Com->Visible = false;
	this->G_Paie->Visible = false;
	this->Modif_ComV->Visible = false;
	this->Cancel_Com->Visible = false;
	this->Add_ComV->Visible = false;
}

private: System::Void Modif_ComV_Click(System::Object^ sender, System::EventArgs^ e) {
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
			req = "START TRANSACTION; UPDATE Projet.Commande SET Date_Livraison='" + theDate_liv + "', Date_Envoi= '" + theDate_env + "', Date_Commande='" + theDate_com + "', Reference= '" + this->Ref_Com->Text + "' WHERE ID_Commande = " + ligneCom->Cells["ID_Commande"]->Value->ToString() + "; UPDATE Projet.Ligne SET QUantite ='"+this->Qtt_Com->Text+"', ID_Article = (SELECT ID_Article FROM Projet.Catalogue_Entreprise WHERE Libelle_Article = '"+this->comboBox2->Text+"');COMMIT;";
		}
		else {
			req = "START TRANSACTION; UPDATE Projet.Paiement SET Libelle_Paiement = '" + this->textBox5->Text + "', Date_Paiement = '" + theDate_paie + "', Montant ='" + this->textBox6->Text + "', Solde_Restant='" + this->textBox7->Text + "', ID_Mode_Paiement =(SELECT ID_Mode_Paiement FROM Projet.Mode_Paiement WHERE Nom_Mode_Paiement = '" + this->comboBox1->Text + "'), ID_Commande = " + this->textBox11->Text + " WHERE ID_Paiement = " + lignePaie->Cells["ID_Paiement"]->Value->ToString() + "; UPDATE Projet.Commande SET Date_Livraison = '" + theDate_liv + "', Date_Envoi = '" + theDate_env + "', Date_Commande = '" + theDate_com + "', Reference = '" + this->Ref_Com->Text + "' WHERE ID_Commande = " + ligneCom->Cells["ID_Commande"]->Value->ToString() + ", ID_Article = (SELECT ID_Article FROM Projet.Catalogue_Entreprise WHERE Libelle_Article = '" + this->comboBox2->Text + "');COMMIT;";

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

private: System::Void Add_ComV_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ theDate_com = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
	String^ theDate_liv = this->dateTimePicker2->Value.ToString("yyyy-MM-dd");
	String^ theDate_env = this->dateTimePicker3->Value.ToString("yyyy-MM-dd");
	String^ theDate_paie = this->dateTimePicker4->Value.ToString("yyyy-MM-dd");

	try
	{
		MySqlConnection^ cnxx = gcnew MySqlConnection(this->cnxstr);
		MySqlCommand^ cmd = gcnew MySqlCommand();
		MySqlDataReader^ reader;
		String^ req;
		cmd->Connection = cnxx;
		if (this->checkBox1->Checked && !this->checkBox2->Checked) {
			cmd->CommandText = "START TRANSACTION;\
				INSERT INTO Commande(Date_Livraison, Date_Envoi, Date_Commande, Reference, CDE_Reduction, CDE_Montant_Total_TTC, CDE_Montant_Total_TVA, CDE_Montant_Total_HT)\
				SELECT '"+theDate_liv+"', '"+theDate_env+"', '"+theDate_com+"', '"+this->Ref_Com->Text+"', 2, 1, 1, 1;\
				INSERT INTO Ligne(Quantite, ID_Article, Couleur)\
				SELECT '"+this->Qtt_Com->Text+"', (SELECT ID_Article FROM Projet.Catalogue_Entreprise WHERE Libelle_Article = '"+this->comboBox2->Text+"') AS ID, (SELECT Couleur FROM Projet.Ligne WHERE ID_Article = (SELECT ID_Article FROM Projet.Catalogue_Entreprise WHERE Libelle_Article = '" + this->comboBox2->Text + "')) AS Couleur;\
				INSERT INTO Ligne_Commande(ID_Ligne, ID_Commande)\
				SELECT MAX(ID_Ligne), MAX(ID_Commande)\
				FROM Ligne, Commande; SELECT MAX(ID_Commande) FROM Commande LIMIT 1;";

			cnxx->Open();
			reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				req = reader[0]->ToString();
			};
			reader->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand();
			MySqlDataReader^ reader1;
			cmd2->Connection = cnxx;
			cmd2->CommandText = "UPDATE Commande\
				LEFT JOIN Ligne_Commande\
				ON Commande.ID_Commande = Ligne_Commande.ID_Commande\
				LEFT JOIN Ligne\
				ON Ligne_Commande.ID_Ligne = Ligne.ID_Ligne\
				LEFT JOIN Catalogue_Entreprise CE\
				ON Ligne.ID_Article = CE.ID_Article\
				SET CDE_Montant_Total_HT = (Quantite * Prix_HT * Prix_Commercial), CDE_Montant_Total_TVA = (Quantite * Prix_HT * Prix_Commercial * (Taux_TVA_Produit / 100)), CDE_Montant_Total_TTC = (Quantite * Prix_HT * Prix_Commercial * ((100 + Taux_TVA_Produit) / 100) * (100 - CDE_Reduction) / 100)\
				WHERE Commande.ID_Commande = '"+req+"';\
			COMMIT; ";
			reader1 = cmd2->ExecuteReader();
			while (reader1->Read())
			{
			};
			reader1->Close();
		}
		else if (!this->checkBox1->Checked && this->checkBox2->Checked && this->textBox11->Text !="") {
			try
			{
				cmd->CommandText = "START TRANSACTION; INSERT INTO Projet.Paiement(Libelle_Paiement, Date_Paiement, Montant, Solde_Restant, ID_Commande, ID_Mode_Paiement) SELECT '" + this->textBox5->Text + "', '" + theDate_paie + "', '" + this->textBox6->Text + "', '" + this->textBox7->Text + "', '" + this->textBox11->Text + "', Mode_Paiement.ID_Mode_Paiement FROM Projet.Mode_Paiement, Projet.Commande WHERE Mode_Paiement.Nom_Mode_Paiement = '" + this->comboBox1->Text + "'; COMMIT;";
				cnxx->Open();
				reader = cmd->ExecuteReader();
				while (reader->Read())
				{
				};
				reader->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Merci de renseigner des paramètres existants" + e);
			}
		}
		else if (this->checkBox1->Checked && this->checkBox2->Checked) {

		}
		else {
			MessageBox::Show("Choisisez ou ajouter");
		}

		req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande;";
		InsertDataGrid(req);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("" + e);
	}
	this->G_Com->Visible = false;
	this->G_Paie->Visible = false;
	this->Modif_ComV->Visible = false;
	this->Add_ComV->Visible = false;
	this->Cancel_Com->Visible = false;
}



private: System::Void GestionCommandes_Load(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ cnxx = gcnew MySqlConnection(this->cnxstr);
	MySqlCommand^ cmd = gcnew MySqlCommand();
	MySqlDataReader^ reader;
	cmd->Connection = cnxx;
	try
	{
		cmd->CommandText = "SELECT\
					Libelle_Article,\
					SCouleur,\
					Ligne.Couleur AS LCouleur\
					FROM\
					(SELECT\
						Catalogue_Entreprise.ID_Article AS CID_Article,\
						Libelle_Article,\
						SCouleur\
						FROM\
						(SELECT\
							Stock.Couleur AS SCouleur,\
							ID_Article\
							FROM\
							Projet.Stock\
							JOIN Projet.Present_en_Stock ON Present_en_Stock.ID_Stock = Stock.ID_Stock WHERE Quantite_Stock > 0) AS TStock\
						JOIN Projet.Catalogue_Entreprise ON Catalogue_Entreprise.ID_Article = TStock.ID_Article) AS TArticle\
					JOIN Projet.Ligne ON Ligne.ID_Article = TArticle.CID_Article WHERE SCouleur = Ligne.Couleur;";

		cnxx->Open();
		reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			this->comboBox2->Items->Add(reader[0]);
		};
	}
	catch (Exception^ e)
	{
		MessageBox::Show("" + e);
	}

	reader->Close();

	try
	{
		MySqlCommand^ cmd2 = gcnew MySqlCommand();
		MySqlDataReader^ reader1;
		cmd2->Connection = cnxx;
		cmd2->CommandText = "SELECT Nom_Mode_Paiement FROM Projet.Mode_Paiement;";
		reader1 = cmd2->ExecuteReader();
		while (reader1->Read())
		{
			this->comboBox1->Items->Add(reader1[0]);
		};
		reader1->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(""+e);
	}


}


private: System::Void sup_com_Click(System::Object^ sender, System::EventArgs^ e) {
	DataGridViewRow^ ligneCom = dataGridView1->SelectedRows[0];
	MySqlConnection^ cnxx = gcnew MySqlConnection(this->cnxstr);
	MySqlCommand^ cmd = gcnew MySqlCommand();
	MySqlDataReader^ reader;
	String^ id = ligneCom->Cells["ID_Commande"]->Value->ToString();
	cmd->Connection = cnxx;
	try
	{
		cmd->CommandText = "START TRANSACTION;\
			DELETE FROM Projet.Paiement\
			WHERE ID_Commande =  '" + id + "';\
			DELETE Projet.Ligne_Commande, Projet.Ligne\
			FROM Ligne\
			LEFT JOIN Projet.Ligne_Commande\
			ON Ligne_Commande.ID_Ligne = Ligne.ID_Ligne WHERE ID_Commande = '" + id + "';\
			DELETE Projet.Commande FROM Commande\
			WHERE ID_Commande =  '" + id + "';\
			COMMIT;";

		cnxx->Open();
		reader = cmd->ExecuteReader();
		while (reader->Read())
		{
		};
	}
	catch (Exception^ e)
	{
		MessageBox::Show("" + e);
	}

	reader->Close();
	String^ req = "SELECT ID_Commande, Date_Livraison, Date_Envoi, Date_Commande, CDE_Montant_Total_HT, CDE_Montant_Total_TVA, CDE_Reduction, CDE_Montant_Total_TTC, Reference FROM Projet.Commande;";
	InsertDataGrid(req);
}

private: System::Void modif_com_Click(System::Object^ sender, System::EventArgs^ e) {
	DataGridViewRow^ ligneCom = dataGridView1->SelectedRows[0];
	DataGridViewRow^ lignePaiement = dataGridView2->SelectedRows[0];
	DataGridViewRow^ ligneArticle = dataGridView3->SelectedRows[0];
	try
	{
		if (ligneCom)
		{
			//Affichage des données dans textbox Commande
			this->dateTimePicker3->Value = DateTime::ParseExact(ligneCom->Cells["Date_Commande"]->FormattedValue->ToString(), "MM/dd/yyyy", Globalization::CultureInfo::InvariantCulture);
			this->dateTimePicker2->Value = DateTime::ParseExact(ligneCom->Cells["Date_Envoi"]->FormattedValue->ToString(), "MM/dd/yyyy", Globalization::CultureInfo::InvariantCulture);
			this->dateTimePicker1->Value = DateTime::ParseExact(ligneCom->Cells["Date_Livraison"]->FormattedValue->ToString(), "MM/dd/yyyy", Globalization::CultureInfo::InvariantCulture);

			this->Ref_Com->Text = ligneCom->Cells["Reference"]->Value->ToString();


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

		if (ligneArticle) {
			this->Qtt_Com->Text = ligneArticle->Cells["Quantite"]->Value->ToString();
			this->comboBox2->Text = ligneArticle->Cells["Libelle_Article"]->Value->ToString();
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("" + e);
	}


	this->G_Com->Visible = true;
	this->G_Paie->Visible = true;


	this->checkBox1->Visible = true;
	this->checkBox2->Visible = true;
	this->Modif_ComV->Visible = true;
	this->Add_ComV->Visible = false;
	this->Cancel_Com->Visible = true;
}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if(this->checkBox2->Checked){
		this->label19->Visible = true;
		this->textBox11->Visible = true;
	}
	else {
		this->label19->Visible = false;
		this->textBox11->Visible = false;
	}
}
};
}
