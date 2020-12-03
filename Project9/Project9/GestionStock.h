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
	/// Summary for GestionStock
	/// </summary>
	public ref class GestionStock : public System::Windows::Forms::UserControl
	{
	public:
		GestionStock(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
    private: System::Windows::Forms::Button^ button6;
    public:
    private: System::Windows::Forms::CheckBox^ checkBox1;
    public: System::String^ cnxstr;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GestionStock()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label12;


    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::DataGridView^ dataGridView1;

    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ AjoutPers;
    private: System::Windows::Forms::Button^ AffichPers;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::DataGridView^ dataGridView3;
    private: System::Windows::Forms::Label^ label15;

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
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->AjoutPers = (gcnew System::Windows::Forms::Button());
            this->AffichPers = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
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
            this->textBox7->Location = System::Drawing::Point(240, 439);
            this->textBox7->MaxLength = 20;
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(122, 26);
            this->textBox7->TabIndex = 58;
            this->textBox7->Visible = false;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label13->Location = System::Drawing::Point(123, 441);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(111, 18);
            this->label13->TabIndex = 57;
            this->label13->Text = L"Quantite Stock";
            this->label13->Visible = false;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label12->Location = System::Drawing::Point(172, 509);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(62, 18);
            this->label12->TabIndex = 56;
            this->label12->Text = L"Couleur";
            this->label12->Visible = false;
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
            this->textBox6->Location = System::Drawing::Point(240, 407);
            this->textBox6->MaxLength = 20;
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(122, 26);
            this->textBox6->TabIndex = 53;
            this->textBox6->Visible = false;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label11->Location = System::Drawing::Point(118, 409);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(116, 18);
            this->label11->TabIndex = 52;
            this->label11->Text = L"Prix commercial";
            this->label11->Visible = false;
            // 
            // dataGridView2
            // 
            this->dataGridView2->AllowUserToAddRows = false;
            this->dataGridView2->AllowUserToDeleteRows = false;
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Location = System::Drawing::Point(0, 251);
            this->dataGridView2->MultiSelect = false;
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->ReadOnly = true;
            this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView2->Size = System::Drawing::Size(357, 189);
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
            this->label8->Size = System::Drawing::Size(80, 18);
            this->label8->TabIndex = 23;
            this->label8->Text = L"Historique";
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
            this->label7->Size = System::Drawing::Size(66, 18);
            this->label7->TabIndex = 20;
            this->label7->Text = L"Produits";
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
            this->button5->Location = System::Drawing::Point(479, 442);
            this->button5->Margin = System::Windows::Forms::Padding(0);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(239, 68);
            this->button5->TabIndex = 21;
            this->button5->Text = L"Supprimer produit";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &GestionStock::button5_Click);
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
            this->textBox5->Location = System::Drawing::Point(240, 375);
            this->textBox5->MaxLength = 10;
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(122, 26);
            this->textBox5->TabIndex = 51;
            this->textBox5->Visible = false;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label10->Location = System::Drawing::Point(156, 377);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(78, 18);
            this->label10->TabIndex = 50;
            this->label10->Text = L"Taux TVA";
            this->label10->Visible = false;
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
            this->textBox4->Location = System::Drawing::Point(240, 343);
            this->textBox4->MaxLength = 40;
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(122, 26);
            this->textBox4->TabIndex = 49;
            this->textBox4->Visible = false;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label9->Location = System::Drawing::Point(175, 347);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(59, 18);
            this->label9->TabIndex = 48;
            this->label9->Text = L"Prix HT";
            this->label9->Visible = false;
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
            this->button3->Location = System::Drawing::Point(176, 571);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(239, 78);
            this->button3->TabIndex = 47;
            this->button3->Text = L"Retour";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Visible = false;
            this->button3->Click += gcnew System::EventHandler(this, &GestionStock::button3_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label6->Location = System::Drawing::Point(150, 317);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(84, 18);
            this->label6->TabIndex = 46;
            this->label6->Text = L"Date insert";
            this->label6->Visible = false;
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
            this->dateTimePicker1->Location = System::Drawing::Point(240, 311);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(122, 26);
            this->dateTimePicker1->TabIndex = 45;
            this->dateTimePicker1->Visible = false;
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
            this->button4->Location = System::Drawing::Point(0, 442);
            this->button4->Margin = System::Windows::Forms::Padding(0);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(239, 68);
            this->button4->TabIndex = 20;
            this->button4->Text = L"Modifier produit";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &GestionStock::button4_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(0, 28);
            this->dataGridView1->MultiSelect = false;
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(718, 198);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionStock::dataGridView1_CellClick);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->panel2->Controls->Add(this->button6);
            this->panel2->Controls->Add(this->dataGridView3);
            this->panel2->Controls->Add(this->label15);
            this->panel2->Controls->Add(this->dataGridView2);
            this->panel2->Controls->Add(this->label8);
            this->panel2->Controls->Add(this->label7);
            this->panel2->Controls->Add(this->button5);
            this->panel2->Controls->Add(this->button4);
            this->panel2->Controls->Add(this->dataGridView1);
            this->panel2->Location = System::Drawing::Point(510, 139);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(718, 510);
            this->panel2->TabIndex = 43;
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->button6->Enabled = false;
            this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->button6->Location = System::Drawing::Point(239, 443);
            this->button6->Margin = System::Windows::Forms::Padding(0);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(240, 68);
            this->button6->TabIndex = 27;
            this->button6->Text = L"Modifier stock";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &GestionStock::button6_Click);
            // 
            // dataGridView3
            // 
            this->dataGridView3->AllowUserToAddRows = false;
            this->dataGridView3->AllowUserToDeleteRows = false;
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Location = System::Drawing::Point(361, 250);
            this->dataGridView3->MultiSelect = false;
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->ReadOnly = true;
            this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView3->Size = System::Drawing::Size(357, 189);
            this->dataGridView3->TabIndex = 26;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label15->Location = System::Drawing::Point(361, 229);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(46, 18);
            this->label15->TabIndex = 25;
            this->label15->Text = L"Stock";
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
            this->button2->Location = System::Drawing::Point(391, 247);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(96, 26);
            this->button2->TabIndex = 42;
            this->button2->Text = L"Rechercher";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &GestionStock::button2_Click);
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
            this->textBox3->Location = System::Drawing::Point(240, 279);
            this->textBox3->MaxLength = 20;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(122, 26);
            this->textBox3->TabIndex = 41;
            this->textBox3->Visible = false;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label4->Location = System::Drawing::Point(178, 281);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(56, 18);
            this->label4->TabIndex = 40;
            this->label4->Text = L"Nature";
            this->label4->Visible = false;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label3->Location = System::Drawing::Point(94, 251);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(140, 18);
            this->label3->TabIndex = 39;
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
            this->textBox2->Location = System::Drawing::Point(240, 247);
            this->textBox2->MaxLength = 20;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(122, 26);
            this->textBox2->TabIndex = 38;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label2->Location = System::Drawing::Point(288, 217);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(25, 18);
            this->label2->TabIndex = 37;
            this->label2->Text = L"ou";
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
            this->button1->Location = System::Drawing::Point(391, 167);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(96, 26);
            this->button1->TabIndex = 36;
            this->button1->Text = L"Rechercher";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &GestionStock::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label1->Location = System::Drawing::Point(54, 170);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(180, 18);
            this->label1->TabIndex = 35;
            this->label1->Text = L"Recherche par identifiant";
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
            this->textBox1->Location = System::Drawing::Point(240, 167);
            this->textBox1->MaxLength = 11;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(122, 26);
            this->textBox1->TabIndex = 34;
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
            this->AjoutPers->Text = L"Ajouter un produit";
            this->AjoutPers->UseVisualStyleBackColor = false;
            this->AjoutPers->Click += gcnew System::EventHandler(this, &GestionStock::AjoutPers_Click);
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
            this->AffichPers->Text = L"Afficher tout le catalogue";
            this->AffichPers->UseVisualStyleBackColor = false;
            this->AffichPers->Click += gcnew System::EventHandler(this, &GestionStock::AffichPers_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::Red;
            this->label5->Location = System::Drawing::Point(210, 199);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(191, 18);
            this->label5->TabIndex = 44;
            this->label5->Text = L"Erreur: identifiant invalide.";
            this->label5->Visible = false;
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
            this->panel1->TabIndex = 33;
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->textBox8->Location = System::Drawing::Point(240, 471);
            this->textBox8->MaxLength = 20;
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(122, 26);
            this->textBox8->TabIndex = 60;
            this->textBox8->Visible = false;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->label14->Location = System::Drawing::Point(22, 473);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(212, 18);
            this->label14->TabIndex = 59;
            this->label14->Text = L"Seuil de réapprovisionnement";
            this->label14->Visible = false;
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)));
            this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Rouge", L"Bleu", L"Violet", L"Rose" });
            this->comboBox1->Location = System::Drawing::Point(240, 506);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(121, 26);
            this->comboBox1->TabIndex = 61;
            this->comboBox1->Visible = false;
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
                static_cast<System::Int32>(static_cast<System::Byte>(222)));
            this->checkBox1->Location = System::Drawing::Point(240, 539);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(150, 22);
            this->checkBox1->TabIndex = 62;
            this->checkBox1->Text = L"Nouvelle Variante";
            this->checkBox1->UseVisualStyleBackColor = true;
            this->checkBox1->Visible = false;
            // 
            // GestionStock
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->dateTimePicker1);
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
            this->Controls->Add(this->label5);
            this->Controls->Add(this->panel1);
            this->Name = L"GestionStock";
            this->Size = System::Drawing::Size(1234, 650);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->panel1->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void AffichPers_Click(System::Object^ sender, System::EventArgs^ e) {
        System::String^ req = "SELECT ID_Article, Libelle_Article AS Nom, Nature, Prix_HT, Taux_TVA_Produit, Prix_Commercial FROM Projet.Catalogue_Entreprise;";
        InsertDataGrid(req);
    }
    System::Void InsertDataGrid(System::String^ req) {
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    System::String^ req = "SELECT ID_Article, Libelle_Article AS Nom, Nature, Prix_HT, Taux_TVA_Produit, Prix_Commercial FROM Projet.Catalogue_Entreprise WHERE ID_Article =" + textBox1->Text + ";";
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    System::String^ req = "SELECT ID_Article, Libelle_Article AS Nom, Nature, Prix_HT, Taux_TVA_Produit, Prix_Commercial FROM Projet.Catalogue_Entreprise WHERE Libelle_Article LIKE '" + textBox2->Text + "%';";
    InsertDataGrid(req);
    textBox2->Text = "";
}

       System::Void button2_Click2(System::Object^ sender, System::EventArgs^ e) {
           try {
               if (this->textBox2->Text != "" && this->textBox3->Text != "" && this->textBox4->Text != "" && this->textBox5->Text != "" && this->textBox6->Text != "" && this->textBox7->Text != "" && this->textBox8->Text != "" && this->comboBox1->Text != "") {
                   //Query
                   System::String^ theDate = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
                   // Connexion SQL

                   MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
                   MySqlCommand^ cmd = gcnew MySqlCommand();
                   MySqlDataReader^ Reader;
                   cmd->Connection = cnxx;

                   cmd->CommandText = "START TRANSACTION; INSERT INTO Catalogue_Entreprise (Libelle_Article, Nature, Prix_HT, Taux_TVA_Produit, Prix_Commercial) VALUES ('" + this->textBox2->Text + "', '" + this->textBox3->Text + "', " + this->textBox4->Text + ", " + this->textBox5->Text + ", " + this->textBox6->Text + "); INSERT INTO Stock (Couleur, Quantite_Stock, Seuil_Reapprov) VALUES ('" + this->comboBox1->Text + "', " + this->textBox7->Text + ", " + this->textBox8->Text + "); INSERT INTO Historique_Tarif_TVA (Date_Debut_Mesure, Taux_TVA, Prix_UHT) VALUES ('" + theDate + "', " + this->textBox5->Text + ", " + this->textBox4->Text + "); INSERT INTO Present_en_Stock (ID_Stock, ID_Article) SELECT MAX(Stock.ID_Stock),MAX(Catalogue_Entreprise.ID_Article) FROM Stock,Catalogue_Entreprise; INSERT INTO Liste_Historique (ID_Histo, ID_Article) SELECT MAX(Historique_Tarif_TVA.ID_Histo),MAX(Catalogue_Entreprise.ID_Article) FROM Historique_Tarif_TVA,Catalogue_Entreprise; COMMIT;";
                   MessageBox::Show(cmd->CommandText);
                   cnxx->Open();
                   Reader = cmd->ExecuteReader();
                   while (Reader->Read())
                   {
                   };
                   Reader->Close();
                   System::String^ requ = "SELECT ID_Article, Libelle_Article AS Nom, Nature, Prix_HT, Taux_TVA_Produit, Prix_Commercial FROM Projet.Catalogue_Entreprise;";
                   InsertDataGrid(requ);

                   // On remet tout comme avant
                   retour();
               }
               else {
                   MessageBox::Show("Erreur : Merci de remplir tous les champs obligatoires.");
               }
           }
           catch (Exception^ ex) {
               MessageBox::Show("Erreur innatendue. Contactez votre adminsitrateur système.");
           }
       }

       System::Void button2_Click3(System::Object^ sender, System::EventArgs^ e) {
      
           DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
           DataGridViewRow^ ligneHisto = dataGridView2->SelectedRows[0];
           try {
               if (this->textBox2->Text != "" && this->textBox3->Text != "" && this->textBox4->Text != "" && this->textBox5->Text != "" && this->textBox6->Text != "") {
                   if (this->textBox4->Text != ligne->Cells["Prix_HT"]->Value->ToString() || this->textBox5->Text != ligne->Cells["Taux_TVA_Produit"]->Value->ToString()) {
                       //Query
                       System::String^ theDate = this->dateTimePicker1->Value.ToString("yyyy-MM-dd");
                       // Connexion SQL

                       MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
                       MySqlCommand^ cmd = gcnew MySqlCommand();
                       MySqlDataReader^ Reader;
                       cmd->Connection = cnxx;
                       cmd->CommandText = "START TRANSACTION; UPDATE Catalogue_Entreprise SET Libelle_Article = '" + this->textBox2->Text + "', Nature = '" + this->textBox3->Text + "', Prix_HT = " + this->textBox4->Text + ", Taux_TVA_Produit = " + this->textBox5->Text + ", Prix_Commercial = " + this->textBox6->Text + " WHERE ID_Article = '" + ligne->Cells["ID_Article"]->Value->ToString() + "'; UPDATE Historique_Tarif_TVA SET Date_Fin_Mesure = '" + theDate + "' WHERE ID_Histo = '" + ligneHisto->Cells["ID_Histo"]->Value->ToString() + "'; INSERT INTO Historique_Tarif_TVA (Date_Debut_Mesure, Taux_TVA, Prix_UHT) VALUES ('" + theDate + "', " + this->textBox5->Text + ", " + this->textBox4->Text + "); INSERT INTO Liste_Historique (ID_Histo, ID_Article) SELECT MAX(Historique_Tarif_TVA.ID_Histo),'" + ligne->Cells["ID_Article"]->Value->ToString() + "' FROM Historique_Tarif_TVA; COMMIT;";
                       MessageBox::Show(cmd->CommandText);
                       cnxx->Open();
                       Reader = cmd->ExecuteReader();
                       while (Reader->Read())
                       {
                       };
                       Reader->Close();
                   }
                   else {
                       //Query
                       // Connexion SQL

                       MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
                       MySqlCommand^ cmd = gcnew MySqlCommand();
                       MySqlDataReader^ Reader;
                       cmd->Connection = cnxx;
                       cmd->CommandText = "START TRANSACTION; UPDATE Catalogue_Entreprise SET Libelle_Article = '" + this->textBox2->Text + "', Nature = '" + this->textBox3->Text + "', Prix_Commercial = " + this->textBox6->Text + " WHERE ID_Article = '" + ligne->Cells["ID_Article"]->Value->ToString() + "'; COMMIT;";
                       cnxx->Open();
                       Reader = cmd->ExecuteReader();
                       while (Reader->Read())
                       {
                       };
                       Reader->Close();
                   }
                   System::String^ requ = "SELECT ID_Article, Libelle_Article AS Nom, Nature, Prix_HT, Taux_TVA_Produit, Prix_Commercial FROM Projet.Catalogue_Entreprise;";
                   InsertDataGrid(requ);

                   // On remet tout comme avant
                   retour();
               }
               else {
                   MessageBox::Show("Erreur : Merci de remplir tous les champs obligatoires.");
               }
           }
           catch (Exception^ ex) {
               MessageBox::Show("Erreur innatendue. Contactez votre adminsitrateur système.");
           }
       }

       System::Void button2_Click4(System::Object^ sender, System::EventArgs^ e) {
           DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
           DataGridViewRow^ ligneStock = dataGridView3->SelectedRows[0];
           try {
               if (this->textBox7->Text != "" && this->textBox8->Text != "" && this->comboBox1->Text != "") {
                   if (this->checkBox1->Checked) {
                       //Query
                       // Connexion SQL

                       MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
                       MySqlCommand^ cmd = gcnew MySqlCommand();
                       MySqlDataReader^ Reader;
                       cmd->Connection = cnxx;
                       cmd->CommandText = "START TRANSACTION; INSERT INTO Stock (Couleur, Quantite_Stock, Seuil_Reapprov) VALUES ('" + this->comboBox1->Text + "', " + this->textBox7->Text + ", " + this->textBox8->Text + "); INSERT INTO Present_en_Stock (ID_Stock, ID_Article) SELECT MAX(Stock.ID_Stock),'" + ligne->Cells["ID_Article"]->Value->ToString() + "' FROM Stock,Catalogue_Entreprise; COMMIT;";
                       MessageBox::Show(cmd->CommandText);
                       cnxx->Open();
                       Reader = cmd->ExecuteReader();
                       while (Reader->Read())
                       {
                       };
                       Reader->Close();
                   }
                   else {
                       //Query
                       // Connexion SQL

                       MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
                       MySqlCommand^ cmd = gcnew MySqlCommand();
                       MySqlDataReader^ Reader;
                       cmd->Connection = cnxx;
                       cmd->CommandText = "START TRANSACTION; UPDATE Stock SET Couleur = '" + this->comboBox1->Text + "', Quantite_Stock = " + this->textBox7->Text + ", Seuil_Reapprov = " + this->textBox8->Text + " WHERE ID_Stock = '" + ligneStock->Cells["ID_Stock"]->Value->ToString() + "'; COMMIT;";
                       cnxx->Open();
                       Reader = cmd->ExecuteReader();
                       while (Reader->Read())
                       {
                       };
                       Reader->Close();
                   }
                   System::String^ requ = "SELECT ID_Article, Libelle_Article AS Nom, Nature, Prix_HT, Taux_TVA_Produit, Prix_Commercial FROM Projet.Catalogue_Entreprise;";
                   InsertDataGrid(requ);

                   // On remet tout comme avant
                   retour();
               }
               else {
                   MessageBox::Show("Erreur : Merci de remplir tous les champs obligatoires.");
               }
           }
           catch (Exception^ ex) {
               MessageBox::Show("Erreur innatendue. Contactez votre adminsitrateur système.");
           }
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
    this->label4->Visible = true;
    this->label14->Visible = true;
    this->textBox3->Visible = true;
    this->textBox4->Visible = true;
    this->textBox5->Visible = true;
    this->textBox6->Visible = true;
    this->label13->Visible = true;
    this->textBox7->Visible = true; 
    this->textBox8->Visible = true;
    this->comboBox1->Visible = true;
    //Déplacement case Ajouter
    this->button2->Location = System::Drawing::Point(391, 506);
    this->button2->Click -= gcnew System::EventHandler(this, &GestionStock::button2_Click);
    this->button2->Click += gcnew System::EventHandler(this, &GestionStock::button2_Click2);
    this->button4->Enabled = false;
    this->button5->Enabled = false;
    this->button6->Enabled = false;
    this->AffichPers->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    retour();
}
       void retour() {
           this->label1->Visible = true;
           this->label2->Visible = true;
           this->label3->Visible = true;
           this->textBox1->Visible = true;
           this->textBox2->Visible = true;
           this->button1->Visible = true;
           this->button3->Visible = false;
           this->label9->Visible = false;
           this->label10->Visible = false;
           this->label11->Visible = false;
           this->label12->Visible = false;
           this->textBox4->Visible = false;
           this->textBox5->Visible = false;
           this->textBox6->Visible = false;
           this->label13->Visible = false;
           this->textBox7->Visible = false;
           this->checkBox1->Visible = false;
           this->textBox3->Visible = false;
           this->label4->Visible = false;
           this->label14->Visible = true;
           this->label3->Text = L"Recherche par Nom";
           this->label3->Location = System::Drawing::Point(94, 248);
           this->label6->Visible = false;
           this->dateTimePicker1->Visible = false;
           this->textBox8->Visible = false;
           this->comboBox1->Visible = false;
           this->button2->Location = System::Drawing::Point(391, 247);
           this->button2->Click -= gcnew System::EventHandler(this, &GestionStock::button2_Click2);
           this->button2->Click -= gcnew System::EventHandler(this, &GestionStock::button2_Click3);
           this->button2->Click -= gcnew System::EventHandler(this, &GestionStock::button2_Click4);
           this->label14->Visible = false;

           this->button2->Click += gcnew System::EventHandler(this, &GestionStock::button2_Click);
           textBox2->Text = "";
           textBox3->Text = "";
           textBox4->Text = "";
           textBox5->Text = "";
           textBox6->Text = "";
           textBox7->Text = "";
           textBox8->Text = "";
           this->button2->Text = "Rechercher";

           if (this->AjoutPers->Enabled == false) {
               this->AjoutPers->Enabled = true;
               this->button5->Enabled = true;
           }
           this->AffichPers->Enabled = true;
       }
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
    System::String^ Identifiant = ligne->Cells["ID_Article"]->Value->ToString();
    System::String^ requ = "SELECT Historique_Tarif_TVA.ID_Histo, Date_Debut_Mesure, Date_Fin_Mesure, Taux_TVA, Prix_UHT FROM Projet.Liste_Historique LEFT JOIN Projet.Historique_Tarif_TVA ON Liste_Historique.ID_Histo = Historique_Tarif_TVA.ID_Histo WHERE ID_Article =" + Identifiant + " ORDER BY Date_Debut_Mesure DESC;";
    this->button4->Enabled = true;
    this->button5->Enabled = true;
    this->button6->Enabled = true;
    HistoDataGrid(requ);
    requ = "SELECT Stock.ID_Stock, Couleur, Quantite_Stock, Seuil_Reapprov FROM Projet.Stock LEFT JOIN Projet.Present_en_Stock ON Stock.ID_Stock = Present_en_Stock.ID_Stock WHERE ID_Article =" + Identifiant + ";";
    StockDataGrid(requ);
}
    System::Void HistoDataGrid(System::String^ req) {
			   MySqlDataAdapter^ adapt;
			   MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
			   adapt = gcnew MySqlDataAdapter(req, cnxx);
			   MySqlCommandBuilder^ commandBuilder;
			   commandBuilder = gcnew MySqlCommandBuilder(adapt);
			   System::Data::DataTable^ table;
			   table = gcnew Data::DataTable();
			   adapt->Fill(table);
			   dataGridView2->DataSource = table;
               dataGridView2->Columns[1]->DefaultCellStyle->Format = "MM/dd/yyyy";
               dataGridView2->Columns[0]->Visible = false;
               dataGridView2->Columns[2]->DefaultCellStyle->Format = "MM/dd/yyyy";
		   }
    System::Void StockDataGrid(System::String^ req) {
			   MySqlDataAdapter^ adapt;
			   MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
			   adapt = gcnew MySqlDataAdapter(req, cnxx);
			   MySqlCommandBuilder^ commandBuilder;
			   commandBuilder = gcnew MySqlCommandBuilder(adapt);
			   System::Data::DataTable^ table;
			   table = gcnew Data::DataTable();
			   adapt->Fill(table);
			   dataGridView3->DataSource = table;
               dataGridView3->Columns[0]->Visible = false;
		   }
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    // Ajout des items spécifiques au stock
    this->label12->Visible = true;
    this->label13->Visible = true;
    this->label14->Visible = true;
    this->checkBox1->Visible = true;
    this->textBox7->Visible = true;
    this->textBox8->Visible = true;
    this->comboBox1->Visible = true;
    this->button3->Visible = true;
    // Retrait des items inutiles au stock
    this->label1->Visible = false;
    this->label2->Visible = false;
    this->label3->Visible = false;
    this->label5->Visible = false;
    this->textBox1->Visible = false;
    this->textBox2->Visible = false;
    this->button1->Visible = false;
    //Déplacement case Ajouter
    this->button2->Text = "Update";
    this->button2->Location = System::Drawing::Point(391, 529);
    this->button2->Click -= gcnew System::EventHandler(this, &GestionStock::button2_Click);
    this->button2->Click += gcnew System::EventHandler(this, &GestionStock::button2_Click4);
    //Block les autres boutons
    this->AjoutPers->Enabled = false;
    this->AffichPers->Enabled = false;
    this->button4->Enabled = false;
    this->button5->Enabled = false;
    this->button6->Enabled = false;
    // Insert données par défaut
    DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
    DataGridViewRow^ ligneStock = dataGridView3->SelectedRows[0];
    this->textBox7->Text = ligneStock->Cells["Quantite_Stock"]->Value->ToString();
    this->textBox8->Text = ligneStock->Cells["Seuil_reapprov"]->Value->ToString();
    this->comboBox1->Text = ligneStock->Cells["Couleur"]->Value->ToString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    // Ajout des items spécifiques au stock
    this->label4->Visible = true;
    this->label6->Visible = true;
    this->label9->Visible = true;
    this->label10->Visible = true;
    this->label11->Visible = true;
    this->textBox3->Visible = true;
    this->textBox4->Visible = true;
    this->textBox5->Visible = true;
    this->textBox6->Visible = true;
    this->dateTimePicker1->Visible = true;
    this->button3->Visible = true;
    // Retrait des items inutiles au stock
    this->label1->Visible = false;
    this->label2->Visible = false;
    this->label5->Visible = false;
    this->textBox1->Visible = false;
    this->button1->Visible = false;
    //Déplacement case Ajouter
    this->button2->Text = "Update";
    this->button2->Location = System::Drawing::Point(391, 407);
    this->button2->Click -= gcnew System::EventHandler(this, &GestionStock::button2_Click);
    this->button2->Click += gcnew System::EventHandler(this, &GestionStock::button2_Click3);
    // Modif des noms
    this->label3->Text = "Nom";
    this->label3->Location = System::Drawing::Point(194, 248);
    //Block les autres boutons
    this->AjoutPers->Enabled = false;
    this->AffichPers->Enabled = false;
    this->button4->Enabled = false;
    this->button5->Enabled = false;
    this->button6->Enabled = false;
    // Insert données par défaut
    DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
    DataGridViewRow^ ligneHisto = dataGridView2->SelectedRows[0];
    this->textBox2->Text = ligne->Cells["Nom"]->Value->ToString();
    this->textBox3->Text = ligne->Cells["Nature"]->Value->ToString();
    this->textBox4->Text = ligne->Cells["Prix_HT"]->Value->ToString();
    this->textBox5->Text = ligne->Cells["Taux_TVA_Produit"]->Value->ToString();
    this->textBox6->Text = ligne->Cells["Prix_Commercial"]->Value->ToString();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    DataGridViewRow^ ligne = dataGridView1->SelectedRows[0];
    MySqlConnection^ cnxx = gcnew MySqlConnection(cnxstr);
    MySqlCommand^ cmd = gcnew MySqlCommand();
    MySqlDataReader^ Reader;
    cmd->Connection = cnxx;
    cmd->CommandText = "START TRANSACTION; DELETE Projet.Present_en_Stock, Projet.Stock FROM Present_en_Stock LEFT JOIN Projet.Stock ON Present_en_Stock.ID_Stock = Stock.ID_Stock WHERE ID_Article = '" + ligne->Cells["ID_Article"]->Value->ToString() + "'; DELETE Projet.Liste_Historique, Projet.Historique_Tarif_TVA FROM Liste_Historique LEFT JOIN Projet.Historique_Tarif_TVA ON Liste_Historique.ID_Histo = Historique_Tarif_TVA.ID_Histo WHERE ID_Article = '" + ligne->Cells["ID_Article"]->Value->ToString() + "'; DELETE FROM Catalogue_Entreprise WHERE ID_Article = '" + ligne->Cells["ID_Article"]->Value->ToString() + "'; COMMIT;";
    cnxx->Open();
    Reader = cmd->ExecuteReader();
    while (Reader->Read())
    {
    };
    Reader->Close();
    System::String^ requ = "SELECT ID_Article, Libelle_Article AS Nom, Nature, Prix_HT, Taux_TVA_Produit, Prix_Commercial FROM Projet.Catalogue_Entreprise;";
    InsertDataGrid(requ);
    this->button4->Enabled = false;
    this->button5->Enabled = false;
    this->button6->Enabled = false;
}
};
}
