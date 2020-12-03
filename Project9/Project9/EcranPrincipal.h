#pragma once
#include "GestionPersonnel.h"
#include "GestionClient.h"
#include "GestionCommandes.h"
#include "GestionStats.h"
#include "GestionStock.h"
#include "Accueil.h"
#include "Parametres.h"
namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EcranPrincipal
	/// </summary>
	public ref class FormEcranPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormEcranPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		System::String^ cnxstr;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormEcranPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ GestPers;
	private: System::Windows::Forms::Button^ Param;


	private: System::Windows::Forms::Button^ GestStats;

	private: System::Windows::Forms::Button^ GestSto;

	private: System::Windows::Forms::Button^ GestCom;

	private: System::Windows::Forms::Button^ GestCli;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: 
		Project9::GestionPersonnel^ gestionPersonnel1 = nullptr;
		Project9::Accueil^ Accueil = nullptr;
		Project9::GestionClient^ GestionClient = nullptr;
		Project9::GestionCommandes^ GestionCommandes = nullptr;
		Project9::GestionStock^ GestionStock = nullptr;
		Project9::GestionStats^ GestionStats = nullptr;
		Project9::Parametres^ Parametres = nullptr;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Param = (gcnew System::Windows::Forms::Button());
			this->GestStats = (gcnew System::Windows::Forms::Button());
			this->GestSto = (gcnew System::Windows::Forms::Button());
			this->GestCom = (gcnew System::Windows::Forms::Button());
			this->GestCli = (gcnew System::Windows::Forms::Button());
			this->GestPers = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->Param);
			this->panel1->Controls->Add(this->GestStats);
			this->panel1->Controls->Add(this->GestSto);
			this->panel1->Controls->Add(this->GestCom);
			this->panel1->Controls->Add(this->GestCli);
			this->panel1->Controls->Add(this->GestPers);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 650);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, -22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 149);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Image = Image::FromFile("./Logo2.png");
			// 
			// Param
			// 
			this->Param->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->Param->FlatAppearance->BorderSize = 0;
			this->Param->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Param->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Param->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->Param->Location = System::Drawing::Point(0, 567);
			this->Param->Margin = System::Windows::Forms::Padding(0);
			this->Param->Name = L"Param";
			this->Param->Size = System::Drawing::Size(200, 83);
			this->Param->TabIndex = 6;
			this->Param->Text = L"Informations";
			this->Param->UseVisualStyleBackColor = false;
			this->Param->Click += gcnew System::EventHandler(this, &FormEcranPrincipal::Param_Click);
			// 
			// GestStats
			// 
			this->GestStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->GestStats->FlatAppearance->BorderSize = 0;
			this->GestStats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GestStats->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GestStats->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->GestStats->Location = System::Drawing::Point(0, 462);
			this->GestStats->Margin = System::Windows::Forms::Padding(0);
			this->GestStats->Name = L"GestStats";
			this->GestStats->Size = System::Drawing::Size(200, 83);
			this->GestStats->TabIndex = 5;
			this->GestStats->Text = L"Gestion des statistiques";
			this->GestStats->UseVisualStyleBackColor = false;
			this->GestStats->Click += gcnew System::EventHandler(this, &FormEcranPrincipal::GestStats_Click);
			// 
			// GestSto
			// 
			this->GestSto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->GestSto->FlatAppearance->BorderSize = 0;
			this->GestSto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GestSto->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GestSto->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->GestSto->Location = System::Drawing::Point(0, 379);
			this->GestSto->Margin = System::Windows::Forms::Padding(0);
			this->GestSto->Name = L"GestSto";
			this->GestSto->Size = System::Drawing::Size(200, 83);
			this->GestSto->TabIndex = 4;
			this->GestSto->Text = L"Gestion du stock";
			this->GestSto->UseVisualStyleBackColor = false;
			this->GestSto->Click += gcnew System::EventHandler(this, &FormEcranPrincipal::GestSto_Click);
			// 
			// GestCom
			// 
			this->GestCom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->GestCom->FlatAppearance->BorderSize = 0;
			this->GestCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GestCom->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GestCom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->GestCom->Location = System::Drawing::Point(0, 296);
			this->GestCom->Margin = System::Windows::Forms::Padding(0);
			this->GestCom->Name = L"GestCom";
			this->GestCom->Size = System::Drawing::Size(200, 83);
			this->GestCom->TabIndex = 3;
			this->GestCom->Text = L"Gestion des commandes";
			this->GestCom->UseVisualStyleBackColor = false;
			this->GestCom->Click += gcnew System::EventHandler(this, &FormEcranPrincipal::GestCom_Click);
			// 
			// GestCli
			// 
			this->GestCli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->GestCli->FlatAppearance->BorderSize = 0;
			this->GestCli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GestCli->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GestCli->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->GestCli->Location = System::Drawing::Point(0, 213);
			this->GestCli->Margin = System::Windows::Forms::Padding(0);
			this->GestCli->Name = L"GestCli";
			this->GestCli->Size = System::Drawing::Size(200, 83);
			this->GestCli->TabIndex = 2;
			this->GestCli->Text = L"Gestion des Clients";
			this->GestCli->UseVisualStyleBackColor = false;
			this->GestCli->Click += gcnew System::EventHandler(this, &FormEcranPrincipal::GestCli_Click);
			// 
			// GestPers
			// 
			this->GestPers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->GestPers->FlatAppearance->BorderSize = 0;
			this->GestPers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GestPers->Font = (gcnew System::Drawing::Font(L"Whitney Light", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GestPers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->GestPers->Location = System::Drawing::Point(0, 130);
			this->GestPers->Margin = System::Windows::Forms::Padding(0);
			this->GestPers->Name = L"GestPers";
			this->GestPers->Size = System::Drawing::Size(200, 83);
			this->GestPers->TabIndex = 1;
			this->GestPers->Text = L"Gestion du personnel";
			this->GestPers->UseVisualStyleBackColor = false;
			this->GestPers->Click += gcnew System::EventHandler(this, &FormEcranPrincipal::GestPers_Click);
			// 
			// FormEcranPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(1435, 650);
			this->Controls->Add(this->panel1);
			this->Name = L"FormEcranPrincipal";
			this->Text = L"Gestion Compta";
			this->Load += gcnew System::EventHandler(this, &FormEcranPrincipal::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->Icon = Icon->ExtractAssociatedIcon("./Icon.ico");
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CreateAccueil();
	}
	private: void SetLight(System::Windows::Forms::Button^ bouton) {
		bouton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
			static_cast<System::Int32>(static_cast<System::Byte>(51)));
		if (oldbutton){
		oldbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
		}
		else {
			delete this->Accueil;
			Accueil = nullptr;
		}
		if (oldbutton == GestPers) {
			CreateGestPers();
		}
		else if (oldbutton == GestCom) {
			CreateGestCom();
		}
		else if (oldbutton == GestCli) {
			CreateGestCli();
		}
		else if (oldbutton == GestSto) {
			CreateGestSto();
		}
		else if (oldbutton == GestStats) {
			CreateGestStats();
		}
		else if (oldbutton == Param) {
			CreateGestParam();
		}

		oldbutton = bouton;

	}
	private: System::Windows::Forms::Button^ oldbutton = nullptr;
	private: 
		void CreateAccueil() {
			if (this->Accueil) {
				delete this->Accueil;
				Accueil = nullptr;
			}
			else {
				this->Accueil = gcnew Project9::Accueil();
				this->Accueil->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->Accueil->Location = System::Drawing::Point(200, 0);
				this->Accueil->Margin = System::Windows::Forms::Padding(0);
				this->Accueil->Name = L"accueil1";
				this->Accueil->Size = System::Drawing::Size(1234, 650);
				this->Accueil->TabIndex = 1;
				this->Controls->Add(this->Accueil);
			}
		}
		void CreateGestPers() {
			if (this->gestionPersonnel1) {
				delete this->gestionPersonnel1;
				gestionPersonnel1 = nullptr;
			}
			else {
				this->gestionPersonnel1 = gcnew Project9::GestionPersonnel();
				this->gestionPersonnel1->Font = (gcnew System::Drawing::Font(L"Whitney Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->gestionPersonnel1->Location = System::Drawing::Point(200, 0);
				this->gestionPersonnel1->Margin = System::Windows::Forms::Padding(0);
				this->gestionPersonnel1->Name = L"gestionPersonnel1";
				this->gestionPersonnel1->Size = System::Drawing::Size(1234, 650);
				this->gestionPersonnel1->TabIndex = 1;
				this->gestionPersonnel1->cnxstr = cnxstr;
				this->Controls->Add(this->gestionPersonnel1);
			}
		}
		void CreateGestCom() {
			if (this->GestionCommandes) {
				delete this->GestionCommandes;
				GestionCommandes = nullptr;
			}
			else {
				this->GestionCommandes = gcnew Project9::GestionCommandes();
				this->GestionCommandes->Location = System::Drawing::Point(200, 0);
				this->GestionCommandes->Name = L"gestionCommandes";
				this->GestionCommandes->Size = System::Drawing::Size(1234, 650);
				this->GestionCommandes->TabIndex = 1;
				this->Controls->Add(this->GestionCommandes);
			}
		}
		void CreateGestCli() {
			if (this->GestionClient) {
				delete this->GestionClient;
				GestionClient = nullptr;
			}
			else {
				this->GestionClient = gcnew Project9::GestionClient();
				this->GestionClient->Location = System::Drawing::Point(200, 0);
				this->GestionClient->Name = L"GestionClient";
				this->GestionClient->Size = System::Drawing::Size(1234, 650);
				this->GestionClient->TabIndex = 1;
				this->GestionClient->cnxstr = cnxstr;
				this->Controls->Add(this->GestionClient);
			}
		}
		void CreateGestSto() {
			if (this->GestionStock) {
				delete this->GestionStock;
				GestionStock = nullptr;
			}
			else {
				this->GestionStock = gcnew Project9::GestionStock();
				this->GestionStock->Location = System::Drawing::Point(200, 0);
				this->GestionStock->Name = L"GestionStock";
				this->GestionStock->Size = System::Drawing::Size(1234, 650);
				this->GestionStock->TabIndex = 1;
				this->Controls->Add(this->GestionStock);
			}
		}
		void CreateGestStats() {
			if (this->GestionStats) {
				delete this->GestionStats;
				GestionStats = nullptr;
			}
			else {
				this->GestionStats = gcnew Project9::GestionStats();
				this->GestionStats->Location = System::Drawing::Point(200, 0);
				this->GestionStats->Name = L"GestionStats";
				this->GestionStats->Size = System::Drawing::Size(1234, 650);
				this->GestionStats->TabIndex = 1;
				this->GestionStats->cnxstr = cnxstr;
				this->Controls->Add(this->GestionStats);
			}
		}
		void CreateGestParam() {
			if (this->Parametres) {
				delete this->Parametres;
				Parametres = nullptr;
			}
			else {
				this->Parametres = gcnew Project9::Parametres();
				this->Parametres->Location = System::Drawing::Point(200, 0);
				this->Parametres->Name = L"GestionClient";
				this->Parametres->Size = System::Drawing::Size(1234, 650);
				this->Parametres->TabIndex = 1;
				this->Controls->Add(this->Parametres);
			}
		}
	private: System::Void GestPers_Click(System::Object^ sender, System::EventArgs^ e) {
		SetLight(GestPers);
		CreateGestPers();
	}
	private: System::Void GestCli_Click(System::Object^ sender, System::EventArgs^ e) {
		SetLight(GestCli);
		CreateGestCli();
	}
	private: System::Void GestCom_Click(System::Object^ sender, System::EventArgs^ e) {
		SetLight(GestCom);
		CreateGestCom();
	}
	private: System::Void GestSto_Click(System::Object^ sender, System::EventArgs^ e) {
		SetLight(GestSto);
		CreateGestSto();
	}
	private: System::Void GestStats_Click(System::Object^ sender, System::EventArgs^ e) {
		SetLight(GestStats);
		CreateGestStats();
	}
	private: System::Void Param_Click(System::Object^ sender, System::EventArgs^ e) {
		SetLight(Param);
		CreateGestParam();
	}
};
}
