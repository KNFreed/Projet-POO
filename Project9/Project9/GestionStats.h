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
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
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
			this->groupBox_calcMois->SuspendLayout();
			this->groupBox_Calcachat->SuspendLayout();
			this->panel1->SuspendLayout();
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
			this->btn_exec_stat->Text = L"Éxecuter";
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
				L"o Calculer le panier moyen (après remise)",
					L"o Calculer le chiffre d’affaire sur un mois en particulier", L"o Identifier les produits sous le seuil de réapprovisionnement",
					L"o Calculer le montant total des achats pour un client", L"o Identifier les 10 articles les plus vendus", L"o Identifier les 10 articles les moins vendus",
					L"o Calculer la valeur commerciale du stock", L"o Calculer la valeur d’achat du stock", L"o Simuler des variations de valeurs commerciales pour en déduire la valeur du sto"
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
			this->label_action->Text = L"Sélectionnez une action :";
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
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void btn_exec_stat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox_calcMois->Visible = false;
		this->groupBox_Calcachat->Visible = false;
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
				moy = System::Convert::ToSingle(reader[0]) / System::Convert::ToSingle(reader[1]); //Conversion Objet à Float (int ?)
				//moy = (float)reader[0] / (float)reader[1];
			}
			catch (Exception^ e)
			{
				moy = 0;
			}
			reader->Close();

			this->Output_BoxStat->Text = "La moyenne de panier est de : " + moy + " €";
			break;


		case 1:
			this->groupBox_calcMois->Visible = true;
			break;

		case 2:
			String ^ prod;
			req = "SELECT ID_Article, Libelle_Article AS Nom FROM Projet.Catalogue_Entreprise WHERE ID_Article = \
			(SELECT ID_Article FROM Projet.Present_en_Stock WHERE ID_Stock = (SELECT ID_Stock FROM Projet.Stock WHERE Quantite_Stock < Seuil_Reapprov));";

			cmd->CommandText =req;

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
					prod += "Aucune donnée enregistrée";
				};
			}
			catch (Exception^ e)
			{
				prod = "Une erreur lors de la requête à été constaté";
			}

			reader->Close();
			this->Output_BoxStat->Text = "Produits sous le seuil de reaprovisionnement :\r\n " + prod;
			break;

		case 3:
			this->groupBox_Calcachat->Visible = true;
			break;


		case 4:
			String^ top10;
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
					top10 += "Aucune donnée enregistrée";
				};
			}
			catch (Exception^ e)
			{
				top10 = "Une erreur lors de la requête à été constaté";
			}


			reader->Close();
			this->Output_BoxStat->Text = "Les 10 articles les plus vendus :\r\n " + top10;
			break;

		case 5:
			String^ end10;
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
					end10 += "Aucune donnée enregistrée";
				};
			}
			catch (Exception^ e)
			{
				end10 = "Une erreur lors de la requête à été constaté";
			}
			reader->Close();
			this->Output_BoxStat->Text = "Les 10 articles les moins vendus :\r\n " + end10;
			break;

		case 6:
			
			float val_comm;
			req = "SELECT SUM(Quantite_Stock*Prix_Commercial) AS TOT FROM Projet.Stock";

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
			this->Output_BoxStat->Text = "Valeur commerciale du stock : " + val_comm + " €";
			break;

		case 7:
			// TODO : ATTENTION CHANGER LA REQUETE ET BDD ICI JUSTE TEMPORAIRE

			float val_achat;
			req = "SELECT SUM(Quantite_Stock * Prix_HT) AS TOT FROM Projet.Stock FULL JOIN \
			(SELECT ID_Stock AS ID_S, ID_Article, Prix_HT FROM Projet.Present_en_Stock FULL JOIN(SELECT \
					ID_Article AS ID_A, Prix_HT FROM Projet.Catalogue_Entreprise) AS cmd ON ID_A = ID_Article) AS all_id ON ID_S = ID_Stock";

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
			this->Output_BoxStat->Text = "Valeur d'achat du stock : " + val_achat + " €";
			break;

		case 8:
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

		//TODO : Faire une requête que avec choses utiles

		cmd->CommandText = req;

		try
		{
			reader = cmd->ExecuteReader();
			if (reader->HasRows == true) {
				while (reader->Read()) {
					mont_tot += "\r\n" + reader[1] + " €  -  Client : " + reader[2] + " " + reader[3];
				};
			}
			else {
				mont_tot += "Aucune donnée enregistrée";
			};
		}
		catch (Exception^ e)
		{
			mont_tot = "Une erreur lors de la requête à été constaté";
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

		this->Output_BoxStat->Text = "Gains (à changer en chiffre d'affaire) durant le mois de " + Entry_moisS + " :" + ch_aff.ToString(); //TODO : changer gains en chiffre d'affaire


	}
	};
}