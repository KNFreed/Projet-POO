#include <iostream>
#include <map>
#include <iterator> 

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
	/// Summary for GestionStats
	/// </summary>
	public ref class GestionStats : public System::Windows::Forms::UserControl
	{
	public:
		GestionStats(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;



	public:

		System::String^ cnxstr;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GestionStats()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btn_exec_stat;
	private: System::Windows::Forms::ComboBox^ comboBox_stat;
	private: System::Windows::Forms::TextBox^ Output_BoxStat;

	private: System::Windows::Forms::Label^ label_action;

	private: System::Windows::Forms::Label^ label_mois;
	private: System::Windows::Forms::GroupBox^ groupBox_calcMois;
	private: System::Windows::Forms::ComboBox^ comboBox_mois;
	private: MySql::Data::MySqlClient::MySqlConnection^ connection;
	private: System::Windows::Forms::TextBox^ textBox_IDclient;


	private: System::Windows::Forms::GroupBox^ groupBox_Calcachat;
	private: System::Windows::Forms::Button^ btn_searchID;


	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:



	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_exec_stat = (gcnew System::Windows::Forms::Button());
			this->comboBox_stat = (gcnew System::Windows::Forms::ComboBox());
			this->Output_BoxStat = (gcnew System::Windows::Forms::TextBox());
			this->label_action = (gcnew System::Windows::Forms::Label());
			this->label_mois = (gcnew System::Windows::Forms::Label());
			this->groupBox_calcMois = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox_mois = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_IDclient = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_Calcachat = (gcnew System::Windows::Forms::GroupBox());
			this->btn_searchID = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox_calcMois->SuspendLayout();
			this->groupBox_Calcachat->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_exec_stat
			// 
			this->btn_exec_stat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exec_stat->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exec_stat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->btn_exec_stat->Location = System::Drawing::Point(910, 20);
			this->btn_exec_stat->Name = L"btn_exec_stat";
			this->btn_exec_stat->Size = System::Drawing::Size(97, 38);
			this->btn_exec_stat->TabIndex = 0;
			this->btn_exec_stat->Text = L"�xecuter";
			this->btn_exec_stat->UseVisualStyleBackColor = true;
			this->btn_exec_stat->Click += gcnew System::EventHandler(this, &GestionStats::btn_exec_stat_Click);
			// 
			// comboBox_stat
			// 
			this->comboBox_stat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->comboBox_stat->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox_stat->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_stat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->comboBox_stat->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"o Calculer le panier moyen (apr�s remise)",
					L"o Calculer le chiffre d�affaire sur un mois en particulier", L"o Identifier les produits sous le seuil de r�approvisionnement",
					L"o Calculer le montant total des achats pour un client", L"o Identifier les 10 articles les plus vendus", L"o Identifier les 10 articles les moins vendus",
					L"o Calculer la valeur commerciale du stock", L"o Calculer la valeur d�achat du stock", L"o Simuler des variations de valeurs commerciales pour en d�duire la valeur du sto"
					L"ck"
			});
			this->comboBox_stat->Location = System::Drawing::Point(241, 27);
			this->comboBox_stat->Name = L"comboBox_stat";
			this->comboBox_stat->Size = System::Drawing::Size(627, 26);
			this->comboBox_stat->TabIndex = 1;
			// 
			// Output_BoxStat
			// 
			this->Output_BoxStat->AcceptsReturn = true;
			this->Output_BoxStat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->Output_BoxStat->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Output_BoxStat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->Output_BoxStat->Location = System::Drawing::Point(241, 205);
			this->Output_BoxStat->Multiline = true;
			this->Output_BoxStat->Name = L"Output_BoxStat";
			this->Output_BoxStat->ReadOnly = true;
			this->Output_BoxStat->Size = System::Drawing::Size(627, 293);
			this->Output_BoxStat->TabIndex = 2;
			// 
			// label_action
			// 
			this->label_action->AutoSize = true;
			this->label_action->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_action->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label_action->Location = System::Drawing::Point(22, 30);
			this->label_action->Name = L"label_action";
			this->label_action->Size = System::Drawing::Size(176, 18);
			this->label_action->TabIndex = 3;
			this->label_action->Text = L"S�lectionnez une action :";
			// 
			// label_mois
			// 
			this->label_mois->AutoSize = true;
			this->label_mois->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_mois->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label_mois->Location = System::Drawing::Point(19, 25);
			this->label_mois->Name = L"label_mois";
			this->label_mois->Size = System::Drawing::Size(158, 18);
			this->label_mois->TabIndex = 4;
			this->label_mois->Text = L"Selectionnez un mois :";
			// 
			// groupBox_calcMois
			// 
			this->groupBox_calcMois->Controls->Add(this->comboBox_mois);
			this->groupBox_calcMois->Controls->Add(this->label_mois);
			this->groupBox_calcMois->Location = System::Drawing::Point(25, 87);
			this->groupBox_calcMois->Name = L"groupBox_calcMois";
			this->groupBox_calcMois->Size = System::Drawing::Size(339, 68);
			this->groupBox_calcMois->TabIndex = 5;
			this->groupBox_calcMois->TabStop = false;
			this->groupBox_calcMois->Visible = false;
			// 
			// comboBox_mois
			// 
			this->comboBox_mois->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->comboBox_mois->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox_mois->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_mois->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->comboBox_mois->FormattingEnabled = true;
			this->comboBox_mois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier", L"Fevrier", L"Mars", L"Avril",
					L"Mai", L"Juin", L"Juillet", L"Aout", L"Septembre", L"Octobre", L"Novembre", L"Decembre"
			});
			this->comboBox_mois->Location = System::Drawing::Point(183, 22);
			this->comboBox_mois->Name = L"comboBox_mois";
			this->comboBox_mois->Size = System::Drawing::Size(121, 26);
			this->comboBox_mois->TabIndex = 5;
			this->comboBox_mois->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionStats::comboBox_mois_SelectedIndexChanged);
			// 
			// textBox_IDclient
			// 
			this->textBox_IDclient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox_IDclient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->textBox_IDclient->Location = System::Drawing::Point(57, 25);
			this->textBox_IDclient->Name = L"textBox_IDclient";
			this->textBox_IDclient->Size = System::Drawing::Size(100, 26);
			this->textBox_IDclient->TabIndex = 7;
			// 
			// groupBox_Calcachat
			// 
			this->groupBox_Calcachat->Controls->Add(this->btn_searchID);
			this->groupBox_Calcachat->Controls->Add(this->textBox_IDclient);
			this->groupBox_Calcachat->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox_Calcachat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->groupBox_Calcachat->Location = System::Drawing::Point(668, 87);
			this->groupBox_Calcachat->Name = L"groupBox_Calcachat";
			this->groupBox_Calcachat->Size = System::Drawing::Size(339, 68);
			this->groupBox_Calcachat->TabIndex = 8;
			this->groupBox_Calcachat->TabStop = false;
			this->groupBox_Calcachat->Text = L"ID Client";
			this->groupBox_Calcachat->Visible = false;
			// 
			// btn_searchID
			// 
			this->btn_searchID->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_searchID->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_searchID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->btn_searchID->Location = System::Drawing::Point(194, 18);
			this->btn_searchID->Name = L"btn_searchID";
			this->btn_searchID->Size = System::Drawing::Size(99, 39);
			this->btn_searchID->TabIndex = 0;
			this->btn_searchID->Text = L"Rechercher";
			this->btn_searchID->UseVisualStyleBackColor = true;
			this->btn_searchID->Click += gcnew System::EventHandler(this, &GestionStats::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label_action);
			this->panel1->Controls->Add(this->Output_BoxStat);
			this->panel1->Controls->Add(this->comboBox_stat);
			this->panel1->Controls->Add(this->btn_exec_stat);
			this->panel1->Controls->Add(this->groupBox_Calcachat);
			this->panel1->Controls->Add(this->groupBox_calcMois);
			this->panel1->Location = System::Drawing::Point(79, 68);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1044, 541);
			this->panel1->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->groupBox1->Location = System::Drawing::Point(3, 197);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(232, 301);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Simulation Variation";
			this->groupBox1->Visible = false;
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->comboBox5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"2", L"3", L"5" });
			this->comboBox5->Location = System::Drawing::Point(116, 163);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(110, 26);
			this->comboBox5->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label5->Location = System::Drawing::Point(6, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 18);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Demarque (%)";
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0", L"5", L"6" });
			this->comboBox4->Location = System::Drawing::Point(116, 131);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(110, 26);
			this->comboBox4->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label4->Location = System::Drawing::Point(6, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Reduc (%)";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"5", L"10", L"15" });
			this->comboBox3->Location = System::Drawing::Point(116, 99);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(110, 26);
			this->comboBox3->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label3->Location = System::Drawing::Point(6, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Marge (%)";
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5.5", L"10", L"20" });
			this->comboBox2->Location = System::Drawing::Point(116, 67);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(110, 26);
			this->comboBox2->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label2->Location = System::Drawing::Point(6, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"TVA (%)";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->button1->Location = System::Drawing::Point(57, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Simuler";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GestionStats::button1_Click_1);
			// 
			// GestionStats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"GestionStats";
			this->Size = System::Drawing::Size(1234, 650);
			this->groupBox_calcMois->ResumeLayout(false);
			this->groupBox_calcMois->PerformLayout();
			this->groupBox_Calcachat->ResumeLayout(false);
			this->groupBox_Calcachat->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void btn_exec_stat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox_calcMois->Visible = false;
		this->groupBox_Calcachat->Visible = false;
		this->groupBox1->Visible = false;
		int index = this->comboBox_stat->SelectedIndex;
		int j = 1;
		int i = 1;
		MySqlConnection^ connect = gcnew MySqlConnection(this->cnxstr);
		MySqlCommand^ cmd = gcnew MySqlCommand();
		cmd->Connection = connect;
		String^ req;
		MySqlDataReader^ reader;
		connect->Open();
		req = "";


		switch (index)
		{
		case 0:
			float moy;

			req = "SELECT SUM(CDE_Montant_Total_TTC-CDE_Reduction) AS sum, COUNT(*) AS count FROM Projet.Commande;";

			cmd->CommandText = req;

			try
			{
				reader = cmd->ExecuteReader();
				reader->Read();
				moy = System::Convert::ToSingle(reader[0]) / System::Convert::ToSingle(reader[1]); //Conversion Objet � Float (int ?)
				//moy = (float)reader[0] / (float)reader[1];
			}
			catch (Exception^ e)
			{
				moy = 0;
			}
			reader->Close();

			this->Output_BoxStat->Text = "La moyenne de panier est de : " + moy + " �";
			break;


		case 1:
			this->groupBox_calcMois->Visible = true;
			break;

		case 2:
			String ^ prod;
			req = "SELECT ID_Article, Libelle_Article AS Nom FROM Projet.Catalogue_Entreprise WHERE ID_Article = \
			(SELECT ID_Article FROM Projet.Present_en_Stock WHERE ID_Stock = (SELECT ID_Stock FROM Projet.Stock WHERE Quantite_Stock < Seuil_Reapprov));";

			cmd->CommandText = req;

			try
			{
				reader = cmd->ExecuteReader();
				prod = "	ID	 /	Article	\r\n";
				if (reader->HasRows == true) {
					while (reader->Read()) {
						prod += "	" + reader[0] + "		" + reader[1] + "\r\n";
					};
				}
				else {
					prod += "Aucune donn�e enregistr�e";
				};
			}
			catch (Exception^ e)
			{
				prod = "Une erreur lors de la requ�te � �t� constat�";
			}

			reader->Close();
			this->Output_BoxStat->Text = "Produits sous le seuil de reaprovisionnement :\r\n " + prod;
			break;

		case 3:
			this->groupBox_Calcachat->Visible = true;
			break;


		case 4:
			String ^ top10;
			String^ noqtt;
			req = "SELECT Catalogue_Entreprise.ID_Article, TOT_QTT, Libelle_Article FROM Projet.Catalogue_Entreprise LEFT JOIN \
			(SELECT SUM(Quantite) AS TOT_QTT, ID_Article FROM Projet.Ligne GROUP BY ID_Article) AS TOP_QTT ON TOP_QTT.ID_Article = Catalogue_Entreprise.ID_Article \
			ORDER BY TOT_QTT DESC LIMIT 10";

			cmd->CommandText = req;

			try
			{
				reader = cmd->ExecuteReader();
				if (reader->HasRows == true) {
					while (reader->Read()) {
						if (reader[1]->ToString() == "") {
							noqtt = "NULL";
						}
						else {
							noqtt = reader[1]->ToString();
						};

						top10 += i + " -  Article : " + reader[2] + "		 | Quantite : " + noqtt + "\r\n";
						i++;
					};
				}
				else {
					top10 += "Aucune donn�e enregistr�e";
				};
			}
			catch (Exception^ e)
			{
				top10 = "Une erreur lors de la requ�te � �t� constat�";
			}


			reader->Close();
			this->Output_BoxStat->Text = "Les 10 articles les plus vendus :\r\n " + top10;
			break;

		case 5:
			String ^ end10;
			String^ noqtt2;
			req = "SELECT Catalogue_Entreprise.ID_Article, TOT_QTT, Libelle_Article FROM Projet.Catalogue_Entreprise LEFT JOIN \
			(SELECT SUM(Quantite) AS TOT_QTT, ID_Article FROM Projet.Ligne GROUP BY ID_Article) AS TOP_QTT ON TOP_QTT.ID_Article = Catalogue_Entreprise.ID_Article \
			ORDER BY TOT_QTT ASC LIMIT 10";

			cmd->CommandText = req;

			try
			{
				reader = cmd->ExecuteReader();
				if (reader->HasRows == true) {
					while (reader->Read()) {
						if (reader[1]->ToString() == "") {
							noqtt2 = "NULL";
						}
						else {
							noqtt2 = reader[1]->ToString();
						};
						end10 += j + " -  Article : " + reader[2] + "		 | Quantite : " + noqtt2 + "\r\n";
						j++;
					};
				}
				else {
					end10 += "Aucune donn�e enregistr�e";
				};
			}
			catch (Exception^ e)
			{
				end10 = "Une erreur lors de la requ�te � �t� constat�";
			}
			reader->Close();
			this->Output_BoxStat->Text = "Les 10 articles les moins vendus :\r\n " + end10;
			break;

		case 6:

			float val_comm;
			req = "SELECT SUM(Quantite_Stock* Prix_HT* Prix_Commercial) AS TOT FROM Projet.Stock LEFT JOIN Projet.Present_en_Stock ON Stock.ID_Stock = Present_en_Stock.ID_Stock LEFT JOIN Projet.Catalogue_Entreprise ON Present_en_Stock.ID_Article = Catalogue_Entreprise.ID_Article;";

			cmd->CommandText = req;

			try
			{
				reader = cmd->ExecuteReader();
				reader->Read();
				val_comm = System::Convert::ToSingle(reader[0]);
			}
			catch (Exception^ e)
			{
				val_comm = 0;
			}

			reader->Close();
			this->Output_BoxStat->Text = "Valeur commerciale du stock : " + val_comm + " �";
			break;

		case 7:

			float val_achat;
			req = "SELECT SUM(Quantite_Stock* Prix_HT) AS TOT FROM Projet.Stock LEFT JOIN Projet.Present_en_Stock ON Stock.ID_Stock = Present_en_Stock.ID_Stock LEFT JOIN Projet.Catalogue_Entreprise ON Present_en_Stock.ID_Article = Catalogue_Entreprise.ID_Article;";

			cmd->CommandText = req;

			try
			{
				reader = cmd->ExecuteReader();
				reader->Read();
				val_achat = System::Convert::ToSingle(reader[0]);
			}
			catch (Exception^ e)
			{
				val_achat = 0;
			}

			reader->Close();
			this->Output_BoxStat->Text = "Valeur d'achat du stock : " + val_achat + " �";
			break;

		case 8:
			this->groupBox1->Visible = true;
			break;

		default:
			this->Output_BoxStat->Text = "Choose a valid action";
		}

		/*
		cmd = gcnew MySqlCommand(req, connection);
		this->reader = cmd->ExecuteReader();
		while (this->reader->Read())
		{
			this->Output_BoxStat->Text += this->reader[0];
		}
		*/
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ connect = gcnew MySqlConnection(this->cnxstr);
		MySqlCommand^ cmd = gcnew MySqlCommand();
		cmd->Connection = connect;
		connect->Open();
		String^ req;
		MySqlDataReader^ reader;
		String^ mont_tot;
		String^ Entry_id;
		Entry_id = this->textBox_IDclient->Text;
		String^ temp;
		temp = "";

		if (Entry_id != "") {
			temp = " WHERE ID_Client = " + Entry_id;
		};

		req = "SELECT Client.ID_Client,PRIX_Achats, Nom_Client, Prenom_Client FROM Projet.Client INNER JOIN (SELECT SUM(FC_Montant_Total_TTC-FC_Reduction) AS PRIX_Achats,\
			ID_Client FROM Projet.Facture_Vente" + temp + " GROUP BY ID_Client) AS Commande ON Client.ID_CLient = Commande.ID_Client LIMIT 20;";

		//TODO : Faire une requ�te que avec choses utiles

		cmd->CommandText = req;

		try
		{
			reader = cmd->ExecuteReader();
			if (reader->HasRows == true) {
				while (reader->Read()) {
					mont_tot += "\r\n" + reader[1] + " �  -  Client : " + reader[2] + " " + reader[3];
				};
			}
			else {
				mont_tot += "Aucune donn�e enregistr�e";
			};
		}
		catch (Exception^ e)
		{
			mont_tot = "Une erreur lors de la requ�te � �t� constat�";
		}


		reader->Close();
		this->Output_BoxStat->Text = "Moyenne d'achat client : " + mont_tot;

	}


	private: System::Void comboBox_mois_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ connect = gcnew MySqlConnection(this->cnxstr);
		MySqlCommand^ cmd = gcnew MySqlCommand();
		MySqlDataReader^ reader;
		cmd->Connection = connect;
		connect->Open();
		String^ req;
		float ch_aff;

		std::string Entry_mois;
		int mois_int = this->comboBox_mois->SelectedIndex + 1;

		std::map<int, std::string> mois_str;  // Map des mois (comme un dictionnaire) 
		mois_str.insert(std::pair<int, std::string>(1, "Janvier"));
		mois_str.insert(std::pair<int, std::string>(2, "Fevrier"));
		mois_str.insert(std::pair<int, std::string>(3, "Mars"));
		mois_str.insert(std::pair<int, std::string>(4, "Avril"));
		mois_str.insert(std::pair<int, std::string>(5, "Mai"));
		mois_str.insert(std::pair<int, std::string>(6, "Juin"));
		mois_str.insert(std::pair<int, std::string>(7, "Juillet"));
		mois_str.insert(std::pair<int, std::string>(8, "Aout"));
		mois_str.insert(std::pair<int, std::string>(9, "Septembre"));
		mois_str.insert(std::pair<int, std::string>(10, "Octobre"));
		mois_str.insert(std::pair<int, std::string>(11, "Novembre"));
		mois_str.insert(std::pair<int, std::string>(12, "Decembre"));

		std::map<int, std::string>::iterator itr;
		for (itr = mois_str.begin(); itr != mois_str.end(); ++itr) {
			if (itr->first == mois_int) {
				Entry_mois = itr->second;
				break;
			}
		};

		String^ Entry_moisS = gcnew String(Entry_mois.c_str()); //Conversion vers String^

		req = "SELECT SUM(CDE_Montant_Total_HT) AS Gains FROM Projet.Commande WHERE MONTH(Date_Commande) = " + mois_int; //Seulement les g

		cmd->CommandText = req;

		try
		{
			reader = cmd->ExecuteReader();
			reader->Read();
			ch_aff = System::Convert::ToSingle(reader[0]);
		}
		catch (Exception^ e)
		{
			ch_aff = 0;
		}
		reader->Close();

		this->Output_BoxStat->Text = "Gains (� changer en chiffre d'affaire) durant le mois de " + Entry_moisS + " :" + ch_aff.ToString(); //TODO : changer gains en chiffre d'affaire


	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try{
			if(comboBox2->SelectedItem->ToString()!="" && comboBox3->SelectedItem->ToString() != ""&& comboBox4->SelectedItem->ToString() != ""&& comboBox5->SelectedItem->ToString() != ""){
				MySqlConnection^ connect = gcnew MySqlConnection(this->cnxstr);
				MySqlCommand^ cmd = gcnew MySqlCommand();
				cmd->Connection = connect;
				String^ req;
				MySqlDataReader^ reader;
				connect->Open();
				req = "";
				float val_achat;
				req = "SELECT SUM(Quantite_Stock* Prix_HT) AS TOT FROM Projet.Stock LEFT JOIN Projet.Present_en_Stock ON Stock.ID_Stock = Present_en_Stock.ID_Stock LEFT JOIN Projet.Catalogue_Entreprise ON Present_en_Stock.ID_Article = Catalogue_Entreprise.ID_Article;";

				cmd->CommandText = req;

				try
				{
					reader = cmd->ExecuteReader();
					reader->Read();
					val_achat = System::Convert::ToSingle(reader[0]);
				}
				catch (Exception^ e)
				{
					val_achat = 0;
				}

				reader->Close();
				float x1 = float::Parse(comboBox2->SelectedItem->ToString());
				float x2 = float::Parse(comboBox3->SelectedItem->ToString());
				float x3 = float::Parse(comboBox4->SelectedItem->ToString());
				float x4 = float::Parse(comboBox5->SelectedItem->ToString());
				// D'abord la marge, puis la TVA. 
				float val_final = val_achat * ((100 + x2) / 100) * ((100 + x1) / 100);
				// puis la r�duc
				val_final -= val_final*(x3 / 100);
				// puis le dernier
				val_final -= val_final * (x4 / 100);

			this->Output_BoxStat->Text = "Valeur totale Stock : " + val_final + " �";
			}
			else {
				MessageBox::Show("Merci de renseigner tous les param�tres obligatoires.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Erreur innatendue. Veuillez recommencer.");
		}
	}
};
}